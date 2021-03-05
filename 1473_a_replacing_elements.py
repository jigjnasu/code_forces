'''
  Contest : 1473
  Problem A : Replacing Elements
  Author : Rakesh Kumar
  Date: 05/03/2021
'''

def solve():
    for _ in range(int(input())):
        n, d = map(int, input().split())
        arr = list(map(int, input().split()))
        a = max(arr)
        b = a
        bigger = False
        for e in arr:
            if e > d:
                bigger = True
            if e < a:
                b = a
                a = e
            elif e < b:
                b = e

        r = 'YES'
        if bigger:
            if a + b > d:
                r = 'NO'
        print(r)

if __name__ == '__main__':
    solve()
