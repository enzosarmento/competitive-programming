package codeforces

fun main() {
    val s = readln()
    val distinct = s.map { it }.toSet()
    if (distinct.size % 2 == 0)
        println("CHAT WITH HER")
    else
        println("IGNORE HIM")
}