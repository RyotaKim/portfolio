set1 = set(map(int, input("Enter first set of data seperated by space:\n").split()[1:]))
set2 = set(map(int, input("Enter second set of data seperated by space:\n").split()[1:]))
 
temp1 = set1.difference(set2)
temp2 = set2.difference(set1)

result = temp1.union(temp2)


print(f"{' '.join(map(str, sorted(result)))}")
