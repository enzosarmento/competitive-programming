package codeforces.rating800

fun main() {
    val n = readln().toInt()
    var x = 0
    repeat(n) {
        val action = readln()
        if (action[1] == '+') {
            x += 1
        } else if (action[1] == '-') {
            x -= 1
        }
    }

    println(x)
}