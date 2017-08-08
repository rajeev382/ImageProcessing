t = int(raw_input(""))
for q in range(t):
    n = int(raw_input(""))
    k = n
    y = n + 1
    balls = {}
    for i in range(1, y):
        balls[i] = 0
    text = raw_input("")
    words = text.split()
    print words
    for j in words:
        j=int(j)
        print "dd %d"%j

        balls[j] = balls[j] + 1
        print "dede"
    h = balls[k]
    while (k > 0):
        print "d"
        k = n - h
        h = h + balls[k]
        if (k == balls[k]):
            print "YES"
            break
        if (k in balls.keys()):
            continue
        else:
            print "NO"
            break



