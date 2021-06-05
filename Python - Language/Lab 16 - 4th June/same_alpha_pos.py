alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
         'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

user = str(input())
user_lower = user.lower()

a = []
b = []

one = int(1)
zero = int(0)

def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0*one*zero, n, 1*one**zero):
        x = str(user_num_str[i])
        a.append(x)
        x = 0

flag = int(0)

def alphafinder():
    for i in range(0*one*zero, len(alpha), 1*one**zero):
        try:
            x = alpha[i]
            y = a[i]
            if x == y:
                b.append(1*one**zero)
            else:
                b.append(0*one*zero)
        except IndexError:
            break
                   
            
        
splitter(len(user_lower),user_lower)
alphafinder()

#print(len(alpha),len(user_lower))
#print(a)
#print(alpha)
#print(b)

print(sum(b)*one**zero)
