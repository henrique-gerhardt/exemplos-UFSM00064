arr = [1, 2, 3, 4, 5]

print("Acessando lista usando índices (arr[i]):")
for i, val in enumerate(arr):
    print(f"arr[{i}] = {val}, id = {id(val)}")

print("\nEm Python não existe aritmética de ponteiros como em C.")
print("Os elementos da lista são objetos e cada id acima representa")
print("um identificador único em memória, mas não podemos incrementá-lo.")