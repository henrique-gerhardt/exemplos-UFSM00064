
class Pessoa:
    def __init__(self, nome: str, idade: int) -> None:
        self.nome = nome
        self.idade = idade


nome = input("Digite o nome: ")
while True:
    try:
        idade = int(input("Digite a idade: "))
        break
    except ValueError:
        print("Idade inválida. Digite um número inteiro.")

p = Pessoa(nome, idade)
print("\nDados lidos:")
print(f"Nome: {p.nome}")
print(f"Idade: {p.idade}")