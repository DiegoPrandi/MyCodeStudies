print("Fahrenheit | Celsius")
print("----------------------")

for f in range(30, 51, 2):
    c = (f - 32) * 5 / 9
    print(f"{f:10} | {c:7.2f}")
