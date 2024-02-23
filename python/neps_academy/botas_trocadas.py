class Pair:
  def __init__(self, first, second) -> None:
    self.first = first
    self.second = second

  def left(self):
    self.first += 1

  def right(self):
    self.second += 1

def main():
  n = int(input())

  pairs = []

  j = 1
  feet = []
  while j <= 61:
    feet.append(Pair(0, 0))
    j += 1

  for _ in range(n):
    number, foot = input().split()
    pairs.append((number, foot))

  for i in range(n):
    if pairs[i][1] == 'E':
      feet[int(pairs[i][0])].left()
    else:
      feet[int(pairs[i][0])].right()

  ans = 0
  
  for i in range(61):
    ans += min(feet[i].first, feet[i].second)

  print(ans)

if __name__ == "__main__":
  main()