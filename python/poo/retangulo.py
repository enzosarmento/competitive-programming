class Rectangle:
  def __init__(self) -> None:
    self.__x1: int
    self.__y1: int
    self.__x2: int
    self.__y2: int

  @property
  def x1(self) -> int:
    return self.__x1
  
  @property
  def x2(self) -> int:
    return self.__x2
  
  @property
  def y1(self) -> int:
    return self.__y1
  
  @property
  def y2(self) -> int:
    return self.__y2
  
  @x1.setter
  def x1(self, value: int) -> None:
    self.__x1 = value

  @x2.setter
  def x2(self, value: int) -> None:
    self.__x2 = value

  @y1.setter
  def y1(self, value: int) -> None:
    self.__y1 = value

  @y2.setter
  def y2(self, value: int) -> None:
    self.__y2 = value

  def area(self) -> int:
    return abs((self.x2 - self.x1) * (self.y2 - self.y1))

def main() -> None:
  
  rectangle = Rectangle()

  n: int = int(input())

  for i in range(n):
        line = input().split()

        if line[0] == 'R':
            x1, y1, x2, y2 = map(int, line[1:])
            rectangle.x1 = x1
            rectangle.y1 = y1
            rectangle.x2 = x2
            rectangle.y2 = y2
        else:
            print(rectangle.area())


if __name__ == "__main__":
  main()