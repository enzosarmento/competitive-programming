def main():
  n = int(input())
  queue = list(map(int, input().split()))

  m = int(input())
  leave_queue = list(map(int, input().split()))

  for i in range(m):
    queue.remove(leave_queue[i])

  for value in queue:
    print(value, end=" ")

  print()


if __name__ == "__main__":
  main()