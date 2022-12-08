N = int(input("Quantos números você vai digitar? "))

vet: [float] = [0 for x in range (N)]

for i in range (0,N):
    vet[i] = float(input("Digite um número: "))

print()

print("Valores = ", end=" ")

soma = 0

for i in range (0,N):
    print(f"{vet[i]:.1f}", end=" ")

for i in range (0, N):
    soma = soma + vet[i]

print()
print(f"Soma = {soma:.2f}")

media = (soma / N)

print(f"Média = {media:.2f}")