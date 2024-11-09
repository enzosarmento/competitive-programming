package codeforces

fun main() {
    val (m, n) = readln().split(' ').map { it.toInt() }
    val answer = m * n / 2
    println(answer)
}