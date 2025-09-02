class Node:
    def __init__(self, data: int) -> None:
        self.data: int = data
        self.next: 'Node | None' = None


def append(head: 'Node | None', value: int) -> Node:
    """Adiciona um nó ao final da lista e retorna a cabeça atualizada."""
    new_node = Node(value)
    if head is None:
        return new_node
    current = head
    while current.next is not None:
        current = current.next
    current.next = new_node
    return head


def print_list(head: 'Node | None') -> None:
    current = head
    while current:
        print(f"{current.data} -> ", end="")
        current = current.next
    print("None")


try:
    n = int(input("Quantos elementos deseja inserir na lista? "))
except ValueError:
    print("Número inválido.")
    raise SystemExit(1)

if n < 0:
    print("O número de elementos não pode ser negativo.")
    raise SystemExit(1)

head: Node | None = None
for i in range(n):
    while True:
        try:
            value = int(input(f"Digite o valor {i}: "))
            break
        except ValueError:
            print("Entrada inválida. Digite um número inteiro.")
    head = append(head, value)

print("Lista ligada:")
print_list(head)