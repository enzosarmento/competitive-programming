package codeforces.rating800

fun main() {
    val x = readln().toInt()
    val range = 5 downTo 1
    var sum = 0
    var ans = 0
    for (i in range) {
        while (sum + i <= x) {
            sum += i
            ans++
        }
        if (sum > x) {
            sum -= i
            ans--
        }
    }

    println(ans)
}