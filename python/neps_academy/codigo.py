def main():
  n = int(input())

  arr = list(map(int, input().split()))

  ans = 0
  for i in range(n - 2):
    if arr[i] == 1 and arr[i + 1] == 0 and arr[i + 2] == 0:
      ans += 1
      i += 2

  print(ans)

if __name__ == "__main__":
  main()