package com.example.calculatorapp

import androidx.compose.ui.graphics.Color
import androidx.compose.runtime.Composable
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Brush


val gradientColors = listOf(
Color(0xFF9796F0),
Color(0xFFFBC7D4)
)
@Composable
fun GradientBackgroundBrush(isVerticalGradient: Boolean, color: List<Color>): Brush {

    val endOffset = if(isVerticalGradient){
        Offset(0f,Float.POSITIVE_INFINITY)
    }else{
        Offset(Float.POSITIVE_INFINITY,0f)
    }
    return Brush.linearGradient(
        colors = color,
        start = Offset.Zero,
        end = endOffset

    )

}

