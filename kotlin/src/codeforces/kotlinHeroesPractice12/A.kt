package codeforces.kotlinHeroesPractice12

fun main() {
    val t = readln().toInt()
    repeat(t) {
        val n = readln().toInt()
        var ans = 0
        for (i in 1..<n) {
            if (n - i > 0) {
                ans++
            }
        }
        println(ans)
    }
}