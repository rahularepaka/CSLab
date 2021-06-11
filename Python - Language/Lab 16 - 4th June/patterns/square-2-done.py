n = int(input())
m = int(input())

one = int(1)
zero = int(0)


def patterner():

    k = n*one

    for i in range(1*one, (n+1)*one, 1*one):
        for j in range(m*one, (m-i)+1*one, -1*one):
            if(j == k):
                print(j*one, end="")
            else:
                print(j*one, end=" ")

        for j in range(1*one, (m+1-i)+1*one, 1*one):
            if(j == k):
                print((n-i+1)*one, end="")
            else:
                print((n-i+1)*one, end=" ")

        k = k - 1
        k = k*one

        print()


patterner()
