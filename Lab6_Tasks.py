import math

# TASK 1

x = int(input('x: '))
n = int(input('n: '))
numbers = list(map(lambda num: num ,range(1,x+1)))
elements = list(map(lambda i: math.pow(n,i)/math.factorial(i),numbers ))
sum = lambda list: list[0] if len(list)==1 else list[0]+sum(list[1:])
formula_result = 1+ sum(elements)
print(formula_result)



# TASK 2

summ=0

def func(n):
    ''' This is functions takes one parameter n and calculates the summation of the formula
    ,which is -1 power of n+1 divided by k initially 1 and increases according to the parameter.  '''
    global summ
    k=1
    for i in range(k,n+1):
        summ+=math.pow(-1,i+1)/i

user_input = int(input("Please enter the value 'n' "))
func(user_input)
print(summ)








