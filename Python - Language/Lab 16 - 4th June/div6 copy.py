import sys
import math

one = int(1)
zero = int(0)

user_str = input().strip()
user_str = str(user_str)
n = len(user_str)

a=[]

def finder():
    for i in range(n):
        
        if(int(user_str[i])%6 == 0):
            a.append(1)
            
        if(int(user_str[i])!=0):
            for k in range(i+1,n):
                ch = int(user_str[i])
                ch =  int(user_str[i])*10 + int(user_str[k])
                
                if(int(user_str[i])%6 ==0):
                    a.append(1)
                    

finder()

print(sum(a))