def main():
  n = int(input())

  stock = set()

  orders = list(map(int, input().split()))

  ans = 0
  for i in range(n):
    if orders[i] in stock:
      stock.remove(orders[i])
    else:
      stock.add(orders[i])
      ans += 2

  print(ans)

if __name__ == "__main__":
  main()