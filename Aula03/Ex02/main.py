try:
    n = int(input("Quantos elementos deseja alocar? "))
except ValueError:
    print("Número inválido.")
    raise SystemExit(1)

if n <= 0:
    print("O número de elementos deve ser positivo.")
    raise SystemExit(1)

vet = []  # Lista vazia que crescerá dinamicamente
for i in range(n):
    while True:
        try:
            val = int(input(f"Digite o valor {i}: "))
            break
        except ValueError:
            print("Entrada inválida. Tente novamente.")
    vet.append(val)

soma = sum(vet)
print(f"Soma dos valores = {soma}")