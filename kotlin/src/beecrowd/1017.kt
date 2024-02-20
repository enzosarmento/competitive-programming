package beecrowd

fun main() {
    val hr = readln().toInt()
    val km = readln().toInt()

    val liters = hr * km / 12.0

    println("%.3f".format(liters))
}