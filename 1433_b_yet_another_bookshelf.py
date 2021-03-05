'''
  Contest : 1433
  Problem B : Yet Another Bookshelf
  Author : Rakesh Kumar
  Date: 05/03/2021
'''

def solve():
    for _ in range(int(input())):
        n = int(input())
        books = list(map(int, input().split()))
        s = -1
        res = 0
        for i in range(n):
            if books[i] == 1:
                if s == -1:
                    s = i
                else:
                    res += i - s - 1
                    s = i
        print(res)

if __name__ == '__main__':
    solve()
