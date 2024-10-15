"""
In Python yield keyword is used to make the function a generator.
"""
from typing import Iterable

def count_up_n(n: int):
    count = 1
    while count <= n:
        yield count
        count += 1


for i in count_up_n(10):
    print(i)


"""

In python iterable is any object which capable of returning all elements at a time.
For example, list, set, tuble

"""

mylist = [2, 8, 9, 3]
myit = iter(mylist)

print(next(myit))

print("Next is: " + str(next(myit)))

"""

Creating an iterator object

"""

class Numbers:
    # Similar to __init__ method, it also acts as an initializor for iterable objects
    def __iter__(self):
        self.a = 1
        return self
    
    # Returns the next object
    def __next__(self):
        x = self.a
        self.a += 1
        return x
    
natural_numbers = Numbers()
nums_iter = iter(natural_numbers)

print(next(nums_iter))
print(next(nums_iter))
print(next(nums_iter))


"""
We have StopIteration which specifies where to stop iteration.
If a certain condition meet it will automatically stop iterating.
"""

class TenToZero:
    def __iter__(self):
        self.number = 10
        return self
    
    def __next__(self):
        if self.number >= 0:
            x = self.number
            self.number -= 1
            return x
        
        else:
            raise StopIteration
        

ten_nums = TenToZero()
nums_iter_2 = iter(ten_nums)

print(next(nums_iter_2))
print(next(nums_iter_2))

def febonucci(n: int) -> Iterable[int]:
    a, b = 0, 1
    count = 1
    while count < n:
        yield a
        a, b = b, a+b
        count += 1

for num in febonucci(10):
    print(num)