package com.example.calculatorapp


import android.os.Vibrator
import android.util.Log
import androidx.annotation.DrawableRes
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.gestures.detectTapGestures
import androidx.compose.foundation.indication
import androidx.compose.foundation.interaction.MutableInteractionSource
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.BoxWithConstraints
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.lazy.grid.GridCells
import androidx.compose.foundation.lazy.grid.LazyVerticalGrid
import androidx.compose.foundation.lazy.grid.items
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.ripple.RippleAlpha
import androidx.compose.material.ripple.rememberRipple
import androidx.compose.material3.Divider
import androidx.compose.material3.FloatingActionButton
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.livedata.observeAsState
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.ExperimentalComposeUiApi
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.alpha
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.input.pointer.pointerInteropFilter
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.font.FontStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.core.content.ContextCompat.getSystemService

val buttonLists = listOf(
    "AC","(",")", "/",
    "7","8","9","*",
    "4","5","6","-",
    "1","2","3","+",
    "C","0",".","="
)

@Composable
fun MainScreen(viewModel: CalculatorLogic)
{

    val ac = painterResource(id = R.drawable.ac)
    val divide = painterResource(id = R.drawable.div)
    val multi = painterResource(id = R.drawable.mul)
    val plus = painterResource(id = R.drawable.add)
    val del = painterResource(id = R.drawable.newdel)
    val sub = painterResource(id = R.drawable.sub)
    val image1 = painterResource(id = R.drawable.one)
    val image2 = painterResource(id = R.drawable.two)
    val image3 = painterResource(id = R.drawable.three)
    val image4 = painterResource(id = R.drawable.four)
    val image5 = painterResource(id = R.drawable.five)
    val image6 = painterResource(id = R.drawable.six)
    val image7 = painterResource(id = R.drawable.seven)
    val image8 = painterResource(id = R.drawable.eight)
    val image9 = painterResource(id = R.drawable.nine)
    val image0 = painterResource(id = R.drawable.zero)
    val dot = painterResource(id = R.drawable.dot)
    val equalto = painterResource(id = R.drawable.equal)
    val right = painterResource(id = R.drawable.towardsright)
    val left = painterResource(id = R.drawable.towardsleft)

    val textEqutaion = viewModel.textEquation.observeAsState()
    val resultEquation = viewModel.textResult.observeAsState()
    val textEquSize = viewModel.textEquationSize.observeAsState()
    val resEquSize = viewModel.textResultSize.observeAsState()

    Box(modifier = Modifier
        .fillMaxSize()
        .background(GradientBackgroundBrush(isVerticalGradient = true, color = gradientColors))

    ){
        Column (modifier = Modifier
            .fillMaxWidth()
            .padding(horizontal = 26.dp, vertical = 16.dp),
            horizontalAlignment = Alignment.End

        ){
            Spacer(modifier = Modifier.height(316.dp))

            Text(text = textEqutaion.value?:"", modifier = Modifier, fontSize = (textEquSize.value ?: 55).sp, fontWeight = FontWeight.Bold, color = Color.Black)
            Text(text = resultEquation.value?:"", modifier = Modifier, fontSize = (resEquSize.value ?: 33).sp, fontWeight = FontWeight.Medium, color = Color.Black )
        }
        Divider(
            color = Color.Black,
            thickness = 1.dp,
            modifier = Modifier
                .padding(bottom = 416.dp)
                .align(Alignment.BottomCenter)
                .width(330.dp),
        )
        Box(modifier = Modifier
            .align(Alignment.BottomCenter)
            .fillMaxWidth()
            .size(435.dp)
            .padding(16.dp),

        ){
            Column (modifier = Modifier
                .fillMaxHeight(),
                verticalArrangement = Arrangement.SpaceEvenly

            ){
                EachRowContent(image1 = ac,image2 = right,image3 = left,image4 = divide)
                EachRowContent(image1 = image7,image2 = image8,image3 = image9,image4 = multi)
                EachRowContent(image1 = image4,image2 = image5,image3 = image6,image4 = sub)
                EachRowContent(image1 = image1,image2 = image2,image3 = image3,image4 = plus )
                EachRowContent(image1 = del,image2 = image0,image3 = dot,image4 = equalto )
            }
            LazyVerticalGrid(columns = GridCells.Fixed(4)) {
                items(buttonLists){
                    RealButton(button = it, onClick = {
                        viewModel.OnButtonClick(it)
                    })
                }
            }

        }
    }
}

@OptIn(ExperimentalComposeUiApi::class)
@Composable
fun RealButton(button: String, onClick: () -> Unit){
    val context = LocalContext.current
    val vibrator = getSystemService(context,Vibrator::class.java)
    Box(modifier = Modifier
        .clip(RoundedCornerShape(12.dp))
        .size(80.dp)
    ){
        FloatingActionButton(
            onClick = {
                onClick()

                vibrator?.vibrate(74)
            },
                    modifier = Modifier
                        .align(Alignment.Center)
                        .size(45.dp)
                        .alpha(0f)





        ) {
            Text(text = button, fontSize = 0.sp)
        }
    }
}
@Composable
fun EachRowContent(image1: Painter,
                   image2: Painter,
                   image3: Painter,
                   image4: Painter,contentDescription:String = ""){

    Row (modifier = Modifier.fillMaxWidth(),
        horizontalArrangement = Arrangement.SpaceEvenly
    ){
        Box(modifier = Modifier
            .clip(RoundedCornerShape(12.dp))
            .size(80.dp)
        ){
            OnImageClick(painter = image1)

        }

        Box(modifier = Modifier
            .clip(RoundedCornerShape(12.dp))
            .size(80.dp)
        ){

            OnImageClick(painter = image2)

        }

        Box(modifier = Modifier
            .clip(RoundedCornerShape(12.dp))
            .size(80.dp)
        ){

            OnImageClick(painter = image3)

        }

        Box(modifier = Modifier
            .clip(RoundedCornerShape(12.dp))
            .size(80.dp)
        ){

            OnImageClick(painter = image4 )


        }
    }


}
@Composable
fun OnImageClick(painter: Painter) {
    Image(painter = painter, contentDescription = "", modifier = Modifier
        .size(80.dp)
        .clickable {}
    )
}

