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
