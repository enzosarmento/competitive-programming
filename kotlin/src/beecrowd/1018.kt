package beecrowd

fun main() {
    val value = readln().toInt()
    val values = mutableMapOf(
            "100" to 0, "50" to 0, "20" to 0, "10" to 0, "5" to 0, "2" to 0, "1" to 0
        )

    var n = value
    while(n >= 1) {
        if(n >= 100) {
            values["100"] = values["100"]!! + n / 100
            n %= 100
        } else if(n >= 50) {
            values["50"] = values["50"]!! + n / 50
            n %= 50
        } else if(n >= 20) {
            values["20"] = values["20"]!! + n / 20
            n %= 20
        } else if(n >= 10) {
            values["10"] = values["10"]!! + n / 10
            n %= 10
        } else if(n >= 5) {
            values["5"] = values["5"]!! + n / 5
            n %= 5
        } else if(n >= 2) {
            values["2"] = values["2"]!! + n / 2
            n %= 2
        } else {
            values["1"] = values["1"]!! + 1
            n--
        }
    }

    println(value)
    values.forEach { (key, value) ->
        println("$value nota(s) de R$ $key,00")
    }
}