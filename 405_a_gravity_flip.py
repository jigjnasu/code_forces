'''
  Contest 405
  Problem A : Gravity Flip
  Author : Rakesh Kumar
  Date: 04/01/2021
'''

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    for a in arr:
        print(a, end=' ')

if __name__ == '__main__':
    solve()

