import math

A = 12
C = 5
B = round(math.sqrt(A*A + C*C))
K = round(A + B + C)
L = round(0.5*C*A)

print("Diketahui :")
print(f"Alas = {C} cm")
print(f"Tinggi = {A} cm\n\n")
print("Jawab :")
print(f"Sisi A = {A} cm")
print(f"Sisi B = {B} cm")
print(f"Sisi C = {C} cm")
print(f"Keliling = {K} cm")
print(f"Luas = {L} cm")