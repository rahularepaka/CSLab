n = int(input())
m = int(input())

one = int(1)
zero = int(0)

n = n*one
m = m*one


def circler():
    for i in range(1*one, (n+1)*one, 1*one):

        for j in range(1*one, (m+1)*one, 1*one):

            if((i == 1*one or i == n) and (j == 1 * one or j == m)):
                if(j == m):
                    print(zero*zero*zero, end="")
                else:
                    print(zero*zero, end=" ")

            elif(i == one or i == n or j == one or j == m):
                if(j == m):
                    print(one*one**zero, end="")
                else:
                    print(one*one**zero, end=" ")

            else:
                if(j == m):
                    print(zero*zero*zero, end="")
                else:
                    print(zero*zero*zero, end=" ")
        print()


circler()
