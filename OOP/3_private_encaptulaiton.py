class Car:
    campany_name = "Volvo"  #class attributes
    def __init__(self,name,engine,price) -> None:
        #instance atributes
        #name engine public attribues and price private attributes  can't access  outside the class
        self.name=name
        self.engine=engine
        self.__price=price
    
    def display(self):
        print(f'Company name {self.campany_name} car {self.name} price {self.__price}')
    
    def car_price(self):
        print(f"Car price {car.__price}")

    def __str__(self) -> str:
        return f'Company name {self.campany_name}  '

car=Car('BMW',"Motor",2312)
car.display()
car.car_price()

print(car.name)
# print(car.__price) # can't access  because price private varible



