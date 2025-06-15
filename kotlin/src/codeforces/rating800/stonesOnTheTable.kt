package codeforces.rating800

fun main() {
    val n = readln().toInt()
    val s = readln()
    var ans = 0

    for (i in 0..<n - 1) {
        if (s[i] == s[i + 1]) {
            ans++
        }
    }

    println(ans)
}

