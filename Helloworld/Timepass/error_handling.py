# let's use errors to our advangtage 
num1 = 10
try:
    print(1/num1)
except:
    print('you cannot divide by zero')

num2 = 10
num3 = 40
    try:
        print(1/num2)
        print(1 + num3)
    except Exception as e:
        print(f'An error happened: {e}')
    
num4 = 'ten'

try:
    print(1/num4)
except ZeroDivisionError:
    print('you cannot divide by zero') 
except TypeError:
    print('you cannot driving those two types')
except Exception as e:
    print(f'something unexpected happened: {e}')
    _
print('This is the end of the program.')
