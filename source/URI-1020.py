# URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1020
# Programmed by MD. Mehedi Hasan
x = input()
x = int(x)
years = x / 365
x = x % 365
months = x / 30
days = x % 30
print("%d ano(s)" %years)
print("%d mes(es)" %months)
print("%d dia(s)" %days)