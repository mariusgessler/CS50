from cs50 import get_float

while True:
    dollars = get_float("Change owed: ")
    if dollars >= 0:
        break

cents = round(dollars * 100)
denominations = [25, 10, 5, 1]
coins = 0

for item in denominations:
    while cents >= item:
        cents -= item
        coins += 1

print(coins)