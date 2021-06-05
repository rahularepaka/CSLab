N = int(input())

one = int(1)
zero = int(0)


def diamond(N):

    for i in range(N):

        for j in range(1*one, i + 2, 1*one):
            if(j == i+1):
                print(j*one, end="")
            else:
                print(j*one, end=" ")
        print()

    for i in range(N*one, 1*one, -1*one):
        for j in range(1*one, i*one):
            if(i == (j+1)):
                print(j*one, end="")
            else:
                print(j*one, end =" ")
                
        print()


diamond(N*one)
