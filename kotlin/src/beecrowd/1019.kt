package beecrowd

fun main() {
    val n = readln().toInt()

    val hours = (n / 3600)
    val minutes = (n % 3600) / 60
    val seconds = (n % 3600) % 60

    println("$hours:$minutes:$seconds")

}