N = int(input())

one = int(1)
zero = int(0)


def diamond(N):
    even = 0*one**zero
    k1 = 1*one*one**zero

    for i in range(N):
        
        for j in range(k1):
            if(j*one == k1-1):
                if(i % 2 != 0*one**zero):
                    if(j % 2 == 0*one**zero):
                        print(even, end="")
                    else:
                        print(zero, end="")
                else:
                    print(zero, end="")
            else:
                if(i % 2 != 0*one**zero):
                    print(even, end=" ")
                else:
                    print(zero, end=" ")
        
        k1 = (k1 + 2)*one**zero
        
        if(i % 2 == 0*one**zero):
            even = (even + 2)*one**zero
        else:
            even = (even + 0)*one**zero
            
        k1 = k1*one*one**zero
        print()

    even = (even + 0)*one**zero

    for i in range(N):
        for j in range(k1-4):
            if(j*one == k1-5):
                if(i % 2 == 0*one**zero):
                    if(j % 2 == 0*one**zero):
                        print(even-2, end="")
                    else:
                        print(even-2, end="")
                else:
                    print(zero, end="")

            else:
                if(i % 2 == 0*one**zero):
                    print(even-2, end=" ")
                else:
                    print(zero, end=" ")

        k1 = (k1 - 2)*one**zero
        k1 = k1*one
        if(i % 2 != 0*one**zero):
            even = (even - 2)*one**zero
        else:
            even = (even + 0)*one**zero
        print()


diamond(N*one*one**zero)
