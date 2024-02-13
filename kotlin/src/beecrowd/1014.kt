package beecrowd

fun main() {
    val km = readln().toInt()
    val spentFuel = readln().toDouble()

    val spentPerLiter = km / spentFuel

    println("%.3f".format(spentPerLiter) + " km/l")
}