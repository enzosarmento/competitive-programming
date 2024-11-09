package codeforces

fun main() {
    val (n, k) = readln().split(' ').map { it.toInt() }
    val arr = readln().split(' ').map { it.toInt() }
    val kTh = arr[k - 1]

    val ans = arr.count { it >= kTh && it > 0 }

    println(ans)
}