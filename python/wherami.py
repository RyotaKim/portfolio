x ,y = map(int, input("Enter X and Y seperated by a space: ").split())

if x > 0 and y > 0:
    print("Q 1")
if x < 0 and y > 0:
    print("Q 2")
if x < 0 and y < 0:
    print("Q 3")
if x > 0 and y < 0:
    print("Q 4")