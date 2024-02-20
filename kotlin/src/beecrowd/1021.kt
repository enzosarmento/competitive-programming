package beecrowd

import kotlin.math.roundToInt

fun main() {
    val n = readln().toDouble()

    val money = mutableMapOf(
        "100" to 0.0, "50" to 0.0, "20" to 0.0, "10" to 0.0, "5" to 0.0, "2" to 0.0
    )

    val coins = mutableMapOf(
        "0.50" to 0.0, "0.25" to 0.0, "0.10" to 0.0, "0.05" to 0.0
    )

    var value = n
    var coin1 = 0
    var coin01 = 0.0

    if (value >= 100)  {
        money["100"] = (value / 100)
        value %= 100.0
    }
    if (value >= 50) {
        money["50"] = (value / 50)
        value %= 50.0
    }
    if (value >= 20) {
        money["20"] = (value / 20)
        value %= 20.0
    }
    if (value >= 10)  {
        money["10"] = (value / 10)
        value %= 10.0
    }
    if (value >= 5)  {
        money["5"] = (value / 5)
        value %= 5.0
    }
    if (value >= 2) {
        money["2"] = (value / 2)
        value %= 2.0
    }
    if (value >= 1) {
        coin1 = value.toInt()
        value -= coin1 * 1.0
    }
    if(value >= 0.50) {
        coins["0.50"] = (value / 0.50)
        value %= 0.50
    }
    if (value >= 0.25) {
        coins["0.25"] = (value / 0.25)
        value %= 0.25
    }
    if (value >= 0.10) {
        coins["0.10"] = (value / 0.10)
        value %= 0.10
    }
    if (value >= 0.05) {
        coins["0.05"] = (value / 0.05)
        value %= 0.05
    }
    if (value != 0.0) {
        coin01 = (value / 0.01)
    }

    println("NOTAS:")
    money.forEach { (key, value) ->
        println("${value.toInt()} nota(s) de R$ $key.00")
    }

    println("MOEDAS:")
    println("$coin1 moeda(s) de R$ 1.00")
    coins.forEach { (key, value) ->
        println("${value.toInt()} moeda(s) de R$ $key")
    }
    println("${coin01.roundToInt()} moeda(s) de R$ 0.01")
}