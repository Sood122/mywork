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

#--------------------------------------------------------------------------------------------------------------------------------