def incrementar_valor(x: int) -> int:
    return x + 1


def incrementar_lista(lst):
    #Como listas são mutáveis, a modificação é visível fora da função
    lst[0] += 1


try:
    numero = int(input("Digite um número inteiro: "))
except ValueError:
    print("Entrada inválida.")
    raise SystemExit(1)

print(f"Antes de incrementar (imutável): {numero}")
numero = incrementar_valor(numero)
print(f"Depois de incrementar (imutável): {numero}")

# Utilizando lista para simular passagem por referência
lista_numero = [numero]
print(f"\nAntes de incrementar (lista mutável): {lista_numero[0]}")
incrementar_lista(lista_numero)
print(f"Depois de incrementar (lista mutável): {lista_numero[0]}")