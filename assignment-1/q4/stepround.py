power = 1
step = 0.0
for i in range (0, 7, 1):
    power = power * 100
    step = 1 / float(power)
    printf(str.format('{0.:15f}', step))
