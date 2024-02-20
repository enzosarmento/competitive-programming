package beecrowd

fun main() {
    val n = readln().toInt()

    val years = n / 365
    val months = (n % 365) / 30
    val days = (n % 365) % 30

    println("$years ano(s)\n$months mes(es)\n$days dia(s)")

}