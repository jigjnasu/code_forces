'''
  Contest : 1234
  Problem A : Equalize Prices Again
  Author : Rakesh Kumar
  Date: 05/03/2021
'''

import math

def solve():
    for _ in range(int(input())):
        n = int(input())
        s = sum(list(map(int, input().split())))
        print(math.ceil(s / n))

if __name__ == '__main__':
    solve()

