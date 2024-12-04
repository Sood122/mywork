# """
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
   
def sum_of_all_odd_number(n):
    total=0
    for num  in range(1,n+1):
        if num%2!=0:
            total+=num
    return total 
n=int(input("Enter the number:"))
print("The sum of all odd numbers up to", n, "is:", sum_of_all_odd_number(n))