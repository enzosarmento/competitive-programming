package codeforces.rating800

fun main() {
    val word = readln()
    println(word.replaceFirstChar { if (it.isLowerCase()) it.uppercase() else it.toString() })
}