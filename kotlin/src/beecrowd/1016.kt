package beecrowd

fun main() {
    var x = 1
    var y = 1.5

    val km = readln().toInt()

    while(y - x < km) {
        x++
        y = 1.5 * x
    }

    println("$x minutos")
}