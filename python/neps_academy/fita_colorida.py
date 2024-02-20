def main():
  n = int(input())
  ribbon = list(map(int, input().split()))

  ribbon_ans = [10 if x == -1 else x for x in ribbon]

  for i in range(1, n):
    ribbon_ans[i] = min({ribbon_ans[i], ribbon_ans[i - 1] + 1, 9})

  for i in range(n - 2, -1, -1):
    ribbon_ans[i] = min({ribbon_ans[i], ribbon_ans[i + 1] + 1, 9})

  for value in ribbon_ans:
    print(value, end=" ")

  print()

if __name__ == "__main__":
  main()