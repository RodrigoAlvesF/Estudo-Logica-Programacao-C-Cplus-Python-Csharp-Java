N = int(input("Qual a ordem da matriz ?"))

mat: [[int]] = [[0 for x in range (N)] for x in range(N)]

for i in range (0,N):
    for j in range (0,N):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Diagonal principal: ")

for i in range (0,N):
    print(f"{mat[i][i]} ",end=" ")

qtdnegativos = 0

for i in range (0,N):
    for j in range (0,N):
        if mat[i][j] < 0:
            qtdnegativos = qtdnegativos + 1

print()
print(f"Quantidade de negativos: {qtdnegativos}")