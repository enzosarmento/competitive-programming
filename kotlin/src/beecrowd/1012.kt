package beecrowd

import kotlin.math.pow

fun main() {
    val input = readLine()

    val values = input!!.split(" ")

    val a = values[0].toDouble()
    val b = values[1].toDouble()
    val c = values[2].toDouble()

    val triangle = (a * c) / 2
    val circle = c.pow(2.0) * 3.14159
    val trapeze = ((a + b) * c) / 2
    val square = b.pow(2.0)
    val rectangle = a * b

    println("TRIANGULO: " + "%.3f".format(triangle))
    println("CIRCULO: " + "%.3f".format(circle))
    println("TRAPEZIO: " + "%.3f".format(trapeze))
    println("QUADRADO: " + "%.3f".format(square))
    println("RETANGULO: " + "%.3f".format(rectangle))

}
