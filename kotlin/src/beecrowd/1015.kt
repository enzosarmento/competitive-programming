package beecrowd

import kotlin.math.pow
import kotlin.math.sqrt

fun main() {
    val input1 = readln()
    val input2 = readln()

    val p1 = input1.split(" ")
    val p2 = input2.split(" ")
    val x1 = p1[0].toDouble()
    val y1 = p1[1].toDouble()
    val x2 = p2[0].toDouble()
    val y2 = p2[1].toDouble()

    val distance = sqrt((x1 - x2).pow(2) + (y1 - y2).pow(2))
    println("%.4f".format(distance))
}