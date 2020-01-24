def color(c):
    return c in 'CMY'

def photos():
    res = False
    l = str(input())
    l = [int(i) for i in l.split()]
    for i in range(l[0]):
        s = str(input())
        r = [color(c) for c in s.split()]
        if True in r:
            res = True

    if res == True:
        print('#Color')
    else:
        print('#Black&White')

if __name__ == '__main__':
    photos()
