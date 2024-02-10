class Enemy:
  quantity_alive: int

  def __init__(self, x: int, y: int, alive: bool) -> None:
    self.x = x
    self.y = y
    self.alive = alive

  def was_hit(self, x: int, y: int) -> None:
    if self.x == x and self.y == y and self.alive:
      Enemy.quantity_alive -= 1
      self.alive = False


def main() -> None:
  n: int = int(input())

  Enemy.quantity_alive: int = n
  enemys: list = []

  for i in range(n):
    x, y = map(int, input().split())
    enemys.append(Enemy(x, y, True))

  m: int = int(input())

  for i in range(m):
    x, y = map(int, input().split())

    for enemy in enemys:
      enemy.was_hit(x, y)

  print(f"vivos: {Enemy.quantity_alive}")
  print(f"mortos: {n - Enemy.quantity_alive}")

  
if __name__ == "__main__":
  main()
