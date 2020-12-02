f = open('input', 'r')

count = 0
for line in f:
    r, letter, word = line.split(' ')
    start, end = map(int, r.split('-'))
    letter = letter[0]
    start = start - 1
    end = end - 1
    if word[start] == letter and word[end] == letter:
        continue
    elif word[start] == letter or word[end] == letter:
        count += 1

print(count)
f.close()
