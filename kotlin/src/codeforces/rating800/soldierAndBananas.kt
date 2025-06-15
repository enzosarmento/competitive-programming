package codeforces.rating800

fun main() {
    val (k, n, w) = readln().split(" ").map { it.toInt() }

    var sum = 0
    for (i in 1..w) {
        sum += i * k
    }

    val ans = sum - n
    if (ans < 0) {
        println(0)
    } else {
        println(ans)
    }
}