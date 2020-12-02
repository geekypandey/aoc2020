f = open('input', 'r')

count = 0
for line in f:
    r, letter, word = line.split(' ')
    start, end = map(int, r.split('-'))
    letter = letter[0]
    lcount = word.count(letter)
    if lcount >=start and lcount <= end:
        count += 1

print(count)
f.close()
