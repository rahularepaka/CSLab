n = int(input())

n1 = n

if(n%9 != 0):
    n1 = n%9

ni_val = int(n/9)

ni_val_str = str(9)*ni_val

n_se = int(str(n1)+ni_val_str+(str(0)*n))

print(n_se)