print("Digite dois numeros")
x = int(input())
y = int(input())

while x != y:
    if x > y:
        print("Descrescente!")

    else:
        print("Crescente!")

    print("Digite outros dois números: ")
    x = int(input())
    y = int(input())