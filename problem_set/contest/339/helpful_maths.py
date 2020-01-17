'''
  Contest 339
  Problem A : Helpful maths
  Author : Rakesh Kumar
  Date: 17/01/2020
'''

def helpful_maths():
    s = str(input())
    s = s.split('+')
    s.sort()
    r = ''
    for c in s:
        r += c + '+'
    print(r[:-1])

if __name__ == '__main__':
    helpful_maths()
