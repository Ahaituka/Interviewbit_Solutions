# Trailing Zeros in Factorial
# Given an integer n, return the number of trailing zeroes in n!.
#
# Note: Your solution should be in logarithmic time complexity.
#
# Example :
#
# n = 5
# n! = 120
# Number of trailing zeros = 1
# So, return 1



def fact(n):
    pro = 1
    for i in range(1, n + 1):
        pro *= i
    x = str(pro)
    count = 0
    for c in reversed(x):
        if (c == '0'):
            count = count + 1
        if (c != '0'):
            break
    return count


print fact(10000)
