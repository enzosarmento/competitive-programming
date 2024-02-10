class Project:
  def __init__(self, requirement_programming: int, requirement_design: int) -> None:
    self.requirement_programming = requirement_programming
    self.requirement_design = requirement_design

class Employee:

  def __init__(self, value_per_project: int) -> None:
    self.__value_per_project = value_per_project
    self.__amount_received = 0

  @property
  def amount_received(self) -> int:
    return self.__amount_received
  
  def able(self, project: Project) -> bool:
    return False
  
  def receive_reward(self) -> None:
    self.__amount_received += self.__value_per_project

class Developer(Employee):
  def __init__(self, value_per_project: int, programming_ability: int)  -> None:
    super().__init__(value_per_project)
    self.programming_ability = programming_ability

  def able(self, project: Project) -> bool:
    return self.programming_ability >= project.requirement_programming
  
class Designer(Employee):
  def __init__(self, value_per_project: int, design_ability: int)  -> None:
    super().__init__(value_per_project)
    self.design_ability = design_ability

  def able(self, project: Project) -> bool:
    return self.design_ability >= project.requirement_design



def main() -> None:
  value_programming, skill_programming = map(int, input().split())
  value_design, skill_design = map(int, input().split())

  n = int(input())

  developer = Developer(value_programming, skill_programming)
  designer = Designer(value_design, skill_design)

  for _ in range(n):
    skill_p, skill_d = map(int, input().split())
    project = Project(skill_p, skill_d)

    if developer.able(project) and designer.able(project):
      developer.receive_reward()
      designer.receive_reward()
      

  print(f"Programador: R$ {developer.amount_received}")
  print(f"Designer: R$ {designer.amount_received}")


if __name__ == "__main__":
  main()