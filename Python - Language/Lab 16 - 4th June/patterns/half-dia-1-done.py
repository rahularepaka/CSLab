N = int(input())

one = int(1)
zero = int(0)


def diamond(N):

    k1 = 1*one
    for i in range(N):
        for j in range(k1):
            if(j*one == k1-1):
                print((j+1)*one,end="")
            else:
                print((j+1)*one,end=" ")
        k1 = k1 + 2
        k1 = k1*one
        print()
    
    for i in range(N):
        for j in range(k1-4):
            if(j*one==k1-5):
                print((j+1)*one,end="")
            else:
                print((j+1)*one,end = " ")

        k1 = k1 - 2
        k1 = k1*one
        print()



diamond(N*one)
