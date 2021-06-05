<<<<<<< HEAD

a = []

def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = str(user_num_str[i])
        a.append(x)
        x = 0

def mainer():
    
    try:
        user = str(input())
        a.append(user.split())
        print(*a[0], sep='\n')

    except EOFError:
        print('')


=======

a = []

def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = str(user_num_str[i])
        a.append(x)
        x = 0

def mainer():
    
    try:
        user = str(input())
        a.append(user.split())
        print(*a[0], sep='\n')

    except EOFError:
        print('')


>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
mainer()