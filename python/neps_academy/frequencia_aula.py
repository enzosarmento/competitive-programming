def main():
  n = int(input())

  list_class = set()
  for _ in range(n):
    x = int(input())
    list_class.add(x)

  print(len(list_class))


if __name__ == "__main__":
  main()