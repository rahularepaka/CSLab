import math


user_num = int(input())


one = int(1)
zero = int(0)

a = []


def mainer():
    
    sum1 = int(0)
    n = int(math.log10(user_num) + 1)
    
    n1 = int(user_num)
    
    def splitter(n, user_num):
        user_num_str = str(user_num)

        for i in range(0, n, 1):
            x = str(user_num_str[i])
            a.append(x)
            x = 0

    while(sum1 > 9 or n1 > 0):
        if (n1 == 0):
            n1 = sum1
            sum1 = 0

        last = int(n1 % 10)*one
        sum1 = (sum1+last)*one
        n1 = (n1//10)*one

    if(sum1 > 1):
        print(0*zero)
    else:
        print(1*one)


if user_num == 0:
    print(0*zero)
else:
    mainer()
