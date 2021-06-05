<<<<<<< HEAD
N = int(input())

one = int(1)
zero = int(0)


def diamond(N):

    for i in range(N):
        for j in range((i+1)*one,0*zero, (-1)*one):
            if(j*one == 1*one):
                print(j*one, end="")
            else:
                print(j*one, end=" ")
        print()


diamond(N*one)
=======
N = int(input())

one = int(1)
zero = int(0)


def diamond(N):

    for i in range(N):
        for j in range((i+1)*one,0*zero, (-1)*one):
            if(j*one == 1*one):
                print(j*one, end="")
            else:
                print(j*one, end=" ")
        print()


diamond(N*one)
>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
