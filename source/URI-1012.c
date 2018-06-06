// URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1012
// Programmed by MD. Mehedi Hasan
A, B, C = input().split()
A, B, C = [float(A), float(B), float(C)]
print("TRIANGULO: %.3f" %(0.5*A*C))
print("CIRCULO: %.3f" %(3.14159*C*C))
print("TRAPEZIO: %.3f" %(0.5*(A+B)*C))
print("QUADRADO: %.3f" %(B*B))
print("RETANGULO: %.3f" %(A*B))