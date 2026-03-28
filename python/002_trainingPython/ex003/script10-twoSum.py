List = [11, 21, 31, 41, 50, 60]

for i in range(len(List)):
    for j in range(i+1, len(List)):
        if List[i] + List[j] == 110:
            print([i, j])


