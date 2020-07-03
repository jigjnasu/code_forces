def way_too_long_words():
    n = int(input())
    while (n > 0):
        word = str(input())
        if len(word) > 10:
            t = word[0]
            t += str(len(word) - 2)
            t += word[-1]
            word = t
        print(word)
        n -= 1

if __name__ == '__main__':
    way_too_long_words()
