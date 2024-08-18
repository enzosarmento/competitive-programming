package codeforces

fun main() {
    val n = readln().toInt()
    val m = Array(n) { IntArray(3) }
    var answer = 0

    for (i in 0..<n) {
        val input = readln()
        val number = input.split(" ")
        var count = 0
        for (j in 0..<3) {
            m[i][j] = number[j].toInt()
            count += if (m[i][j] == 1) 1 else 0
        }
        answer += if (count > 1) 1 else 0
    }

    println(answer)
}