import math

a = []  # user array

c = []


def perfect_square(x):
    return math.sqrt(x) ** 2 == x


def sorted(arr, n):

    a1 = []  # index
    a2 = []  # perfect squares

    for i in range(n):
        if(perfect_square(a[i]) == True):
            a1.append(i)
            a2.append(a[i])

    a2.sort()

    #print(a1)
    #print(a2)
    
 
    for i in range(n):
        if(perfect_square(a[i]) != True):
            c.append(a[i])
            
    #print(c)
    
    n1 = len(a2)
            
    for i in range(0,n1,1):
        c.insert(a1[i],a2[i])
    
    #print(c)

n = int(input())
a = list(map(int, input().strip().split()))[:n]
#print(a)
sorted(a, n)

print(*c,sep=" ")
