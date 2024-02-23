def main():

  n = -1
  d = -1

  while n != 0 and d != 0:
    n, d = map(int, input().split())
    if n != 0 and d != 0:
      number = input()
      erased = 0
      ans = ''
      for x in number:
        while len(ans) > 0 and x > ans[-1] and erased < d:
          ans = ans.removesuffix(ans[-1])
          erased += 1
        
        if len(ans) < n - d:
          ans += x
      
      print(ans)


if __name__ == "__main__":
  main()