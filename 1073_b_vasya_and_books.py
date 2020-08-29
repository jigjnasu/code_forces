'''
  Contest : 1073
  Problem B : Vasya and books
  Author : Rakesh Kumar
  Date: 12/07/2020
'''

def solve(books):
    deck = list(map(int, input().split(' ')))
    top = 1
    for b in deck:
        if books[b] >= top:
            print(books[b] - top + 1, end=' ')
            top = books[b] + 1
        else:
            print('0', end=' ')
    print()

if __name__ == '__main__':
    n = int(input())
    temp = list(map(int, input().split(' ')))
    books = {}
    for i in range(1, n + 1):
        books[temp[i - 1]] = i
    solve(books)
