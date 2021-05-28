deci = int(input())

def binfinder(deci):
    binary_val = bin(deci)

    print(binary_val[2:])
    

if __name__ == '__main__':
    binfinder(deci)
