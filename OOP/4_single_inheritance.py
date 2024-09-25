

class A:
    def __init__(self,name,age) -> None:
        self.name = name
        self.age=age

    def display_info(self):
        print(f"Your name is {self.name} , and age {self.age}")


class B(A):
   def __init__(self, name, age) -> None:
       super().__init__(name, age)


person=B('rafiu',26);

person.display_info()
