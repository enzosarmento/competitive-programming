package codeforces.rating800

fun main() {
    var (a, b) = readln().split(" ").map { it.toInt() }

    var days = 0

    while (a <= b) {
        a *= 3
        b *= 2
        days++
    }

    println(days)
}