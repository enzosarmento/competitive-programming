package codeforces

fun main() {
    val n = readln().toInt()
    val listWords = mutableListOf<String>()

    for (i in 0..<n) {
        val word = readln()
        listWords.add(word)
    }

    listWords.forEach { word ->
        if (word.length <= 10) {
            println(word)
        } else {
            println("${word[0]}${word.length - 2}${word[word.length - 1]}")
        }
    }
}