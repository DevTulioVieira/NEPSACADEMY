def main():
    total = int(input())
    numeros=list(map(float, input().split()))
    anterior = 0

    if total==1:
        if numeros[0]<=8:
            print("S")
        else:
            print("Não")
        exit(0)
    
    for i in numeros:
        if (i-anterior)<=8:
            anterior = i
        else:
            print("Não")
            exit(0)
    
    print("S")
  

if __name__ == "__main__":
    main()