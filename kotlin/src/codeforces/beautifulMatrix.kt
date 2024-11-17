package codeforces

import kotlin.math.abs

fun main() {
    val matrix = Array(5) { IntArray(5) }
    var x2: Int = 0
    var y2: Int = 0
    for (i in 0..< 5) {
        val line = readln().split(" ").map { it.toInt() }
        for (j in 0..< 5) {
            matrix[i][j] = line[j]
            if (line[j] == 1) {
                x2 = i
                y2 = j
            }
        }
    }

    val answer = abs(2 - x2) + abs(2 - y2)
    println(answer)
}