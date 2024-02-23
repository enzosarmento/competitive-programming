def main():
  n, k, u = map(int, input().split())

  cnt = [0 for _ in range(n + 1)]
  cards_bingo = [list() for _ in range(u + 1)]
  ans = []

  for c in range(1, n + 1):
    for num in map(int, input().split()):
      cards_bingo[num].append(c)

  for num in map(int, input().split()):
    if ans:
      break

    for c in cards_bingo[num]:
      cnt[c] += 1

      if cnt[c] == k:
        ans.append(c)

  print(*ans)


if __name__ == "__main__":
  main()