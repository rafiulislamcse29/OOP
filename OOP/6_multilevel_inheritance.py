class A:
  def __init__(self,name,age) -> None:
    self.name=name
    self.age=age

  def display_A(self):
    print(f"{self.name} {self.age}")

# inherite from class A
class B(A):
  def __init__(self, name, age,designation) -> None:
    super().__init__(name, age)
    self.designation=designation
  
  def display_B(self):
    print(f"{self.name} {self.age} {self.designation}")

# inherite from clsss B
class C(B):
  def __init__(self, name, age, designation,sub) -> None:
    super().__init__(name, age, designation)
    self.sub=sub

  def display_C(self):
    print(f"{super().display_B()} {self.sub}")

person =C('rafiul',23,'student','cse')
person.display_C()


