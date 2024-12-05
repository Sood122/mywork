#-------------Find maximum product of of sub array---------------------------------------------

def product(arr):
    if not arr:
        return 0

    max_product = min_product = result = arr[0]

    for num in arr[1:]:
        if num < 0:
            max_product, min_product = min_product, max_product
        max_product = max(num, max_product * num)
        min_product = min(num, min_product * num)
        result = max(result, max_product)
    return result
arr = [1, 2, 3, 0, 4, 5]
print(f"The maximum product is: {product(arr)}")

#---------------find the number which is occuring more then n/2 times if there is no such then return -1.----------------------

def occurance(arr):
    candidate, count = None, 0
    for num in arr:
        if count == 0:
            candidate, count = num, 1
        elif num == candidate:
            count += 1
        else:
            count -= 1
    if arr.count(candidate) > len(arr) // 2:
        return candidate
    else:
        return -1
arr = list(map(int, input("Enter array elements separated by space: ").split()))
print(f"The majority element is: {occurance(arr)}")

#---------using nested loop-

def occurence(arr):
    n = len(arr)
    for i in range(n):
        count = 0
        for j in range(n):
            if arr[i] == arr[j]:
                count += 1
        if count > n // 2:
            return arr[i]
    return -1
arr = list(map(int, input("Enter array elements with space: ").split()))
print(f"Result: {occurence(arr)}")

#--------------------------------------------find the greatest digit in the given number-----------------------------------
def large_num(n):
    str_num=str(n)
    max_digit="0"
    for digit in str_num:
        if digit>max_digit:
          max_digit=digit
    return int(max_digit)
n=int(input("Enter the number: "))
print("The largest digit is :",large_num(n))
#--------------------------------------------check if an array is sorted or not---------------------------------------
def is_sorted(arr):
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            return False
    return True
arr=list(map(int,input("The the array: ").split()))
if is_sorted(arr):
    print("Sorted")
else:
    print("unsorted")
#-------------------------------------find the smallest missing +ve number---------------------------------------------------    
#find the smallest missing +ve number
# let length of array=n
# each element<=n
#each element only one time

def find_smallest_missing_positive(arr):
    n = len(arr)
    if any(num > n for num in arr):
        return "Error: All elements should be >= number of elemts."
    if len(set(arr)) != n:
        return "Error: Each element should appear only once."
    if any(num < 0 for num in arr):
        return "Error: All elements should be non-negative."
    for i in range(n):
        while 1 <= arr[i] <= n and arr[i] != arr[arr[i] - 1]:
            arr[arr[i] - 1], arr[i] = arr[i], arr[arr[i] - 1]
    for i in range(n):
        if arr[i] != i + 1:
            return i + 1
    return n + 1
arr = list(map(int, input("Enter elements: ").split()))
print(find_smallest_missing_positive(arr))