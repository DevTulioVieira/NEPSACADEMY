def main():
    total = int(input())
    a = int(input())
    b = int(input())
    count = int(0)
    y = int(1)
    resto = a

    for i in range(a, (b+1)):
        soma = int(0)
        igual = int(i)
        if y>1:
            y = y - 1
        else:
            while igual>9:
                resto = int(igual%10)
                igual = int(igual/10)
                soma += resto
            else:
                soma+=igual
                
            if soma==total:
                count +=1
                

    print(count)

    

if __name__ == "__main__":
    main()