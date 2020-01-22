def money():
    s = str(input())
    l = [int(i) for i in s.split()]
    t = (l[2] / 2) * (l[0] + (l[0] * l[2]))
    t = int(t - l[1])
    if t > 0:
        print(t)
    else:
        print(0)

if __name__ == '__main__':
    money()
