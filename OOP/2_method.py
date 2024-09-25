
class Car:
    campany_name = "Volvo"  #class attributes
    def __init__(self,name,engine) -> None:
        #instance atributes
        self.name=name
        self.engine=engine
        print("This is  Constructor")
    
    def display(self):
        print("I this a method")

    def __del__(self):
        print("This is destructor")

    def __str__(self) -> str:
        return f'Company name {self.campany_name}'


car=Car('BMW',"Motorrr")
print(car)
car.price=5
print(car.__dict__)





