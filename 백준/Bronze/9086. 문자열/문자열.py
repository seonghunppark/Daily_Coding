T = int(input())

for _ in range(T):
    letter = list(input())
    first_letter = letter[0]
    last_letter = letter[-1]
    print(first_letter + last_letter)