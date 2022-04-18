# day 77 out of 100
# classes and objects in python


class Dog:

    animal = 'dog'

    def __init__(self, breed):

        self.breed = breed

    def setColor(self, color):
        self.color = color

    def getColor(self):
        return self.color


Rodger = Dog("pug")
Rodger.setColor("brown")
print(Rodger.getColor())
