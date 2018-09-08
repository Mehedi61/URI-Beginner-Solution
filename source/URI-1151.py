# Problem Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1151

number = int(input())

if number >= 46:
    exit()

x = 0
y = 1
z = 3

print("{} {}".format(x,y),end = "")

while number>=z and number<46:
    xy = x + y
    print(" {}".format(xy),end= "")
    x = y
    y = xy
    z += 1

print()
