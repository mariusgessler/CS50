import cs50

while True:
    n = cs50.get_int("Height: ")
    if n >=0 and n <= 23:
        break

for i in range(n):
    print(' ' * (n-i-1), end="")
    print('#' * (i+1), end="")
    print('  ', end="")
    print('#' * (i+1))
