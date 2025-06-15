package codeforces.kotlinHeroesPractice12

fun main() {
    val t = readln().toInt()
    repeat(t) {
        val n = readln().toInt()
        val s = readln()
        val dash = s.count { it == '-' }.toLong()
        val underscore = s.count { it == '_' }.toLong()
        if (dash < 2 || underscore == 0L) {
            println(0)
        } else {
            val x = dash / 2
            val res1 = x * (dash - x) * underscore
            println(res1)
        }
    }
}