def main():
  n = int(input())
  ans = 0;

  while n >= 1:
    if n >= 100:
      ans += int(n / 100)
      n %= 100
    elif n >= 50:
      ans += int(n / 50)
      n %= 50
    elif n >= 25:
      ans += int(n / 25)
      n %= 25
    elif n >= 10:
      ans += int(n / 10)
      n %= 10
    elif n >= 5:
      ans += int(n / 5)
      n %= 5
    else:
      ans += 1
      n -= 1
  
  print(ans)



if __name__ == "__main__":
  main()