<<<<<<< HEAD
import math

N = int(input())

one = int(1)
zero = int(0)


def diamond(N):
    
    for i in range(1*one, (N+1)*one, 1*one):
        
        k = (i * 2*one) - 1*one
        
        for j in range(i*one, (N+1)*one,1*one):
            
            if(j==N):
                print(k*one, end="")
            else:
                print(k*one,end=" ")    
        
            k +=  2*one*one-zero+zero
            
        print()
        
        
=======
import math

N = int(input())

one = int(1)
zero = int(0)


def diamond(N):
    
    for i in range(1*one, (N+1)*one, 1*one):
        
        k = (i * 2*one) - 1*one
        
        for j in range(i*one, (N+1)*one,1*one):
            
            if(j==N):
                print(k*one, end="")
            else:
                print(k*one,end=" ")    
        
            k +=  2*one*one-zero+zero
            
        print()
        
        
>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
diamond(N*one)