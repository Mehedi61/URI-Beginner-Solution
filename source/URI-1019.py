# URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1019
# Programmed by MD. Mehedi Hasan
x = input()
x = int(x)
hours = x / 3600
x = x % 3600
minutes = x / 60
seconds = x % 60
print("%d:%d:%d" % (hours, minutes, seconds))