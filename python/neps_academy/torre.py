def main():
  n = int(input())

  m_list = []
  for _ in range(n):
    arr = list(map(int, input().split()))
    m_list.append(arr)

  sum_row = []
  sum_col = list(range(n))

  for i in range(n):
    sum_col[i] = 0

  for i in range(n):
    x = 0
    for j in range(n):
      x += m_list[i][j]
      sum_col[j] += m_list[i][j]
    sum_row.append(x)

  ans = 0
  for i in range(n):
    for j in range(n):
      position = (sum_row[i] + sum_col[j]) - (m_list[i][j] * 2)
      ans = max(ans, position)
  
  print(ans)

if __name__ == "__main__":
  main()