# Implement strStr().
#
# strstr - locate a substring ( needle ) in a string ( haystack ).
# Try not to use standard library string functions for this question.
#
# Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
#
# NOTE: Good clarification questions:
# What should be the return value if the needle is empty?
# What if both haystack and needle are empty?
# For the purpose of this problem, assume that the return value should be -1 in both cases.

# python solution without using find function

def strStr(A, x):
    #   if(len(A)==1 and len() )
    for current in range(len(A)):
        i = 0
        if (A[current] == x[i]):
            pos = current
            if (len(x) == 1):
                return 0
            while (i < len(x) and pos != len(A) - 1):
                pos += 1
                i += 1
                t = a[pos]
                u = x[i]
                if (A[pos] != x[i]):
                    break
                if (i >= len(x) - 1):
                    return current

    return -1


a = "b";
print strStr(a, "b")
