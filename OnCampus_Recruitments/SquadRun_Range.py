#SquadRun

"""Given a string of numbers find the range needed to include all the numbers.Range is defined as consecutive numbers
Example 1:
Input
1,2,3,4,5,6,7,8,9,10
Output 
1
Example 2:
Input
2,4,5,6,10,11,12,17,18,19,23
Output 
5
"""

#my solution :




# t= raw_input();
t="2,4,5,6,10,11,12,17,18,19,23"
x=[int(i) for i in t.split(',')];
count=0
s=len(x)
for i in range(0,len(x)) :
    if(i==s-1):
        count+=1
        break
    if x[i+1]!=x[i]+1 and i!=s:
        count=count+1
print(count);
