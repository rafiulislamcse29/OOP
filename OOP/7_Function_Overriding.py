
class A:
  def __init__(self,name,age) -> None:
    self.name=name
    self.age=age
  
  def display(self):
    print(f"{self.name} {self.age}")


class B(A):
  def __init__(self, name, age,designation) -> None:
    super().__init__(name, age)
    self.designation=designation

  # display method override from class A
  def display(self): 
    print(f"{self.name} {self.age} {self.designation}")



person =B('rafiul',32,'student')
person.display()




# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

# CompileTime Polymorphism-> Static Binding | Overloading | Early Binding