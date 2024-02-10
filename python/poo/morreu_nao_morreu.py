class Character:

  def __init__(self, name: str, attack: int, defense: int, hp: int) -> None:
    self.name = name
    self.attack = attack
    self.defense = defense
    self.hp = hp

  def alive(self, damage: int) -> bool:
    return self.__accounting_damage(damage) < self.hp

  def __accounting_damage(self, damage: int) -> int:
    return damage - self.defense


def main() -> None:
  name: str = input()
  attack: int = int(input())
  defense: int = int(input())
  hp: int = int(input())
  damage: int = int(input())

  character: 'Character' = Character(name, attack, defense, hp)

  if character.alive(damage):
    print(f"{character.name} sobreviveu!!!")
  else:
    print(f"{character.name} morreu :(")


if __name__ == "__main__":
  main()