import sys

try:
    a = int(sys.argv[1])
    b = int(sys.argv[2])
except ValueError: 
    print("Bad arguments for divisors, please use valid integers.\nSetting defaults (3, 5)")
    a = 3
    b = 5
except IndexError:
    print("No arguments for divisors, setting defaults (3, 5)")
    a = 3
    b = 5
    start = 1
    end = 100
    
try:
    start = int(sys.argv[3])
    end = int(sys.argv[4])
except ValueError:
    print("Bad arguments for starting and ending indicies, please use valid integers.\nSetting defaults (1, 100)")
    start = 1
    end = 100
except IndexError:
    print("No arguments for starting and ending indicies, setting defaults (1, 100)")
    start = 1
    end = 100

output = ""

for i in range(start, end + 1):
    if(i % a == 0):
        output += "Fizz "
    if(i % b == 0):
        output += "Buzz"
    if(i % a != 0 and i % b != 0):
        output += str(i)
    output += "\n"

print(output)
