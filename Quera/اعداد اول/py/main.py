# Python program to display prime numbers

# Input numbers
a = int(input())
b = int(input())

for num in range(a, b + 1):
    # all prime numbers are greater than 1
    if num > 1:
        # For every numbers in range (2,...)
        for i in range(2, num):
            if (num % i) == 0:
                # If extant = 0 loop break
                break
        else:
            # If every things are good we can see prime numbers
            print(num)