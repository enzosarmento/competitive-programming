package codeforces.rating1000

fun main() {
    val n = readln().toInt()
    for (i in 0..<n) {
        val (lengthStr, currentColor) = readln().split(" ")
        val str = readln()
        if (currentColor[0] == 'g') {
            println(0)
            continue
        }
        str.arrayIndexChar(currentColor[0])
    }
}

fun String.arrayIndexChar(c: Char): List<Int> {
    val list = mutableListOf<Int>()
    for (i in this.indices) {
        if (c == this[i]) {
            list.add(i)
        }
    }
    return list
}