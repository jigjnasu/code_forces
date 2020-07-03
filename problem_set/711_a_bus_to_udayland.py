'''
  Contest 711
  Problem A : Bus to udayland
  Author : Rakesh Kumar
  Date: 25/01/2020
'''

def bus():
    n = int(input())

    sit = False
    b = []
    while n > 0:
        row = str(input())
        if sit == False:
            if row.find('OO') != -1:
                sit = True
                row = row.replace('OO', '++', 1)
        b.append(row)
        n -= 1

    '''
        Turn of the output now
    '''
    if sit == True:
        print('YES')
        for row in b:
            print(row)
    else:
        print('NO')


if __name__ == '__main__':
    bus()
