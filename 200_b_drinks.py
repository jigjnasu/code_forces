'''
  Contest 200
  Problem B : Drinks
  Author : Rakesh Kumar
  Date: 04/01/2021
'''

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    t = 0
    for v in arr:
        t += v * 0.01
    print((t / n) * 100)

if __name__ == '__main__':
    solve()

