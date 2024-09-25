class Car:
    campany_name = "Volvo"  #class attributes
    def __init__(self,name,engine,price) -> None:
        #instance atributes
        #name engine price public attribues
        self.name=name
        self.engine=engine
        self.price=price
    
    def display(self):
        print(f'Company name {self.campany_name} car {self.name} price {self.price}')

    def __str__(self) -> str:
        return f'Company name {self.campany_name}  '

car=Car('BMW',"Motor",2312)
car.display()





