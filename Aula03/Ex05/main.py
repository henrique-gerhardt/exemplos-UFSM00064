try:
    linhas = int(input("Digite o número de linhas: "))
    colunas = int(input("Digite o número de colunas: "))
except ValueError:
    print("Entrada inválida.")
    raise SystemExit(1)

if linhas <= 0 or colunas <= 0:
    print("Linhas e colunas devem ser positivas.")
    raise SystemExit(1)

matriz = []
for i in range(linhas):
    linha = []
    for j in range(colunas):
        while True:
            try:
                val = int(input(f"Digite o valor para [{i},{j}]: "))
                break
            except ValueError:
                print("Entrada inválida. Tente novamente.")
        linha.append(val)
    matriz.append(linha)

soma = sum(sum(linha) for linha in matriz)
print(f"Soma de todos os elementos = {soma}")