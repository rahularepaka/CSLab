
n = int(input())

binary_n = bin(n)
binary_n = binary_n[2:]

length = int(len(str(binary_n)))

binary_n_str = list(binary_n)


for i in range(0,length):
    if(binary_n_str[i] == '0'):
        binary_n_str[i] = '1'
        i = i+1
    else:
        binary_n_str[i] = '0'
        i = i + 1
        
        
listToStr = ''.join([str(elem) for elem in binary_n_str])


print(int(listToStr, 2))
