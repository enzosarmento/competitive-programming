package codeforces.rating800

fun main() {
    val n = readln()
    val answer = n.split("+").sorted()
    for (i in answer.indices) {
        print(answer[i])
        if (i < answer.size - 1)
            print("+")
    }
}