i = 1:20;
v = ((i + 1) / 2) .^ 2; // Correto: eleva elemento por elemento

res1 = v(10)
res2 = v(2) / v(15)
res3 = v(5) * v(12)
res4 = v(3) * v(4) * v(6) * v(20)

disp(res1, "v(10):")
disp(res2, "v(2)/v(15):")
disp(res3, "v(5)*v(12):")
disp(res4, "v(3)*v(4)*v(6)*v(20):")
