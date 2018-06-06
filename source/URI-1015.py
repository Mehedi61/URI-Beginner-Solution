# URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1015
# Programmed by MD. Mehedi Hasan
x1, y1 = input().split()
x2, y2 = input().split()
x1, x2, y1, y2 = [float(x1), float(x2), float(y1), float(y2)]
X = (x2 - x1) * (x2 - x1)
Y = (y2 - y1) * (y2 - y1)
add = X + Y
float(add)
import math
add = math.sqrt(add)
print("%.4f" %add)