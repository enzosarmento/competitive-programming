def main():
  n = int(input())

  arr: list[int] = []
  arr2: list[int] = []

  for i in range(n):
    x = int(input())
    arr.append(x)
    arr2.append(0)

  for i in range(n):
    if i == n - 1:
      break
    else:
      if arr[i + 1] == 1:
        arr2[i] += 1

  for i in range(n - 1, -1, -1):
    if i == 0:
      break
    else:
      if arr[i - 1] == 1:
        arr2[i] += 1

  sum = lambda x, y: x + y

  ans = map(sum, arr, arr2)
  list_ans = list(ans)

  for value in list_ans:
    print(value)

if __name__ == "__main__":
  main()