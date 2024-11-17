package codeforces

fun main() {
    val str1 = readln().lowercase()
    val str2 = readln().lowercase()
    var answer = 0


    if (str1 < str2) answer = -1
    else if (str1 > str2) answer = 1

    println(answer)
}