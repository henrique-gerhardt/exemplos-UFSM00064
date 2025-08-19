def soma(v, n):
  if n == 0:
    return 0;
  return v[n -1] + soma(v, n - 1)

v = [1, 2, 3, 4]

print(soma(v, len(v)))