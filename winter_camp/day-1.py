# ""WAP to find sum of all natural number upto n"
# def sum(a):
#     if a < 1:
#         return "Input should be a natural number (a >= 1)."
#     return n * (a + 1) // 2
# a = int(input("Enter a natural number: "))
# if n >= 1:
#     result = sum(a)
#     print(f"The sum of all natural numbers up to {a} is: {result}")
# else:
#     print("Please enter a natural number (a >= 1).")
#     """
 #-------------WAP to find sum of odd number upto n------------------------------------  
def sum_of_all_odd_number(n):
    total=0
    for num  in range(1,n+1):
        if num%2!=0:
            total+=num
    return total 
n=int(input("Enter the number:"))
print("The sum of all odd numbers up to", n, "is:", sum_of_all_odd_number(n))

#----------------------WAP to find the square of number n-------------------------------------------

def square(n):
    return n * n
number = int(input("Enter a number: "))
print(f"The square of {number} is {square(number)}")


#---------------------------------------------WAP to find sum and square of odd number upto n--------------------------------------------------------------
def sum_square_odd_numbers(n):
    num = (n + 1) // 2
    sum_odds = num ** 2
    print(f"The sum of odd numbers up to {n} is {sum_odds}")
    return sum_odds ** 2
n = int(input("Enter the number: ")) 
result = sum_square_odd_numbers(n)
print(f"The square of the sum of odd numbers up to {n} is {result}")

#--------------------------------------------WAP to find count digits of number n-----------------------------------------------------------------
def count(num):
    count = 0
    while num != 0:
        num //= 10  
        count += 1
    return count
n = int(input("Enter the number: "))
print(f"The number {n} has {count(n)} digits.")

#-----------------------------------------------WAP to find count and sum of digits of number n-----------------------------------------------------------------
def count(num):
    count = 0
    while num != 0:
        num //= 10  
        count += 1
    return count

n = int(input("Enter the number: "))
print(f"The number {n} has {count(n)} digits.")

def sum(num):
    total = 0
    while num != 0:
        total += num % 10
        num //= 10
    return total
print(f"The sum of the digits of {n} is {sum(n)}.")

#---------------------WAP to find one number occuring odd number of times--------------------------------------------------
def occurence(arr):
    result = 0
    for num in arr:
        result ^= num
    return result
    
arr = [1,1,5,3,5,2,3,2,2,2,3,]
print(f"The number that occurs an odd number of times is: {occurence(arr)}")
#this code is only counting one odd number in the array.

def find_occurrences(arr):
    count_dict = {}
    for num in arr:
        count_dict[num] = count_dict.get(num, 0) + 1
    
    print("Number of occurrences for each number:")
    for num, count in count_dict.items():
        print(f"{num}: {count} times")

    odd_occurrence_numbers = [num for num, count in count_dict.items() if count % 2 != 0]
    
    print("Numbers that occur an odd number of times:")
    for num in odd_occurrence_numbers:
        print(num)

arr = [1,4,5,7,4,1,2,3,6,9,8,5,2,1,4,7,8,5,2,1,4,7,8,9,6,3,2,5,8,8]
find_occurrences(arr)
#Above mentioned code is countr the number of each number and giving the count and then final answer

#--------------------------reverse a number---------------------------------
def reverse(n):
    num = 0
    while n > 0:
        remainder = n % 10
        num = (num * 10) + remainder
        n = n // 10
    return num
n = int(input("Enter the number: "))
print(f"The reverse of {n} is {reverse(n)}")

#------------------------------------check the number is palindrome or not----------------------------------------------------------------
def palindrome(num):
    num_str = str(num)    
    return num_str == num_str[::-1]
num = int(input("Enter the number: "))
if palindrome(num):
    print("The number is palindrome")
else:
    print("The number is not a palindrome")
     
#--------------------------------------------------------------------------------------------------------------------------------------
