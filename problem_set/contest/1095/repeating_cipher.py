'''
  Contest: 1095
  Problem A : Repeating Cipher
  Author : Rakesh Kumar
  Date: 22/06/2020
'''

def cipher():
    d = []
    for n in range(11):
        d.append((n * (n + 1)) >> 1)
    n = int(input())
    line = str(input())
    for i in range(len(d)):
        if d[i] < len(line):
            print(line[d[i]], end='')
    print()

if __name__ == "__main__":
    cipher()
