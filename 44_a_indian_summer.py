'''
  Contest 44
  Problem A : Indian summer
  Author : Rakesh Kumar
  Date: 15/01/2020
'''

def indian_summer():
    n = int(input())
    b = set()
    while n > 0:
        l = str(input())
        b.add(l)
        n -= 1

    print(len(b))

if __name__ == '__main__':
    indian_summer()
