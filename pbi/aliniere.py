n = int(input())
v = []
for i in range(n):
    g, height = input().split()
    if g == "B":
        v.append((2, height, -(i + 1)))
    else:
        v.append((1, height, -(i + 1)))
v.sort(reverse=True)
for t in v:
    print(-t[-1], end=" ")