package codeforces.rating900

fun main() {
    val str = readln()
    val ans = if (str.contains("0000000") || str.contains("1111111")) "YES" else "NO"
    println(ans)
}