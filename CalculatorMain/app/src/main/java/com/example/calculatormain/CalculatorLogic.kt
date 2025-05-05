package com.example.calculatorapp

import android.icu.text.DecimalFormat
import android.util.Log
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.unit.sp
import androidx.core.text.isDigitsOnly
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import org.mozilla.javascript.Context
import org.mozilla.javascript.Scriptable

//Use Of ViewModel
class CalculatorLogic : ViewModel(){
    private val _textEquation = MutableLiveData<String>().apply { value = "" }
    val textEquation : LiveData<String> = _textEquation

    private val _textResult = MutableLiveData<String>().apply { value = "0" }
    val textResult : LiveData<String> = _textResult

    private val _textResultSize = MutableLiveData<Int>().apply { value = 33 }
    val textResultSize : LiveData<Int> = _textResultSize

    private val _textEquationSize = MutableLiveData<Int>().apply { value = 56 }
    val textEquationSize : LiveData<Int> = _textEquationSize

    fun OnButtonClick(button: String) {
        Log.i("Button Clicked", button)

        _textEquation.value?.let{
            if(button == "AC"){
                _textEquation.value = ""
                _textResult.value = "0"
                if(it.isNotEmpty()) {
                    _textResultSize.value = 33
                    _textEquationSize.value = 56
                }
                return
            }

            if(button == "C"){
                if(it.isNotEmpty()) {
                    if(_textResultSize.value == 56){
                        _textResultSize.value = 33
                    }
                    if(_textEquationSize.value == 33){
                        _textEquationSize.value =56
                    }
                    _textEquation.value = it.dropLast(1)
                    val newEquation = _textEquation.value
                    println("hhh $newEquation")
                    //Only Calculates result if the new equation is valid
                    if (newEquation != null) {
                        if (newEquation.isNotEmpty()) {
                            fun isOperator(char: Char): Boolean {
                                return when (char) {
                                    '+', '-', '*', '/', '%' ,'(',')' -> true
                                    else -> false
                                }
                            }
                            if(!isOperator(newEquation.last())) {
                                _textResult.value = calculateResult(_textEquation.value.toString())
                            }
                        } else{
                            _textEquation.value = ""
                            _textResult.value = "0"
                        }
                    }
                }
                    return
            }

            if(button == "="){
                if(_textEquation.value != "") {
                    _textResultSize.value = 56
                    _textEquationSize.value = 33

                }
                return
            }

            //To concat the string
//            _textEquation.value = (_textEquation.value?:"") + button
            _textEquation.value = it + button

            //Calculating Result
            try {
                _textResult.value = calculateResult(_textEquation.value.toString())
            }catch ( _ : Exception ){}
        }
        }

    fun calculateResult(equation: String): String {
        return try{
            val context = Context.enter()
            context.optimizationLevel = -1
            val scriptable : Scriptable = context.initSafeStandardObjects()
            var finalResult = context.evaluateString(scriptable,equation, "javascript", 1, null).toString()
            if (finalResult.endsWith(".0")){
                finalResult = finalResult.replace(".0","")
//            finalResult = finalResult.dropLast(2)
                finalResult = " $finalResult"
            }
            val decimalFormat = DecimalFormat("#.##")
            val formattedResult = decimalFormat.format(finalResult.toDoubleOrNull() ?: return "Error")

            "= $formattedResult"
        } catch (e: Exception){
            "Error"
        }
    }



    }