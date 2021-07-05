

one = int(1)
zero = int(0)

res = []
a = []

def palin(elt):
    k = str(elt)
    str1 = str(k[::-1])

    if (k == str1):
        return True
    else:
        return False
    
def finder():
    res = [user_str[i: j] for i in range(len(user_str))
           for j in range(i + 1, len(user_str) + 1)]
    
    for i in range(len(res)):
        if(palin(res[i]) == True):
            a.append(res[i])
    
user_str = input()

finder()      
print(max(a, key=len))
