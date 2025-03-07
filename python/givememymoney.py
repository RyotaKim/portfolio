"""
n1 = int(input("Enter total: "))
n2 = int(input("Enter payment: "))
change = n2 - n1
print(f"Your change is {change}. Heres your change: ")
denominations = [1000, 200, 100, 50, 20, 10, 5, 1]

change_breakdown = {}
if n2 == n1:
    print("I receive exact amount.")
elif n2 > n1:
    for denom in denominations:
        count = change // denom 
        if count > 0:  
            change_breakdown[denom] = count
            change -= denom * count
    for denom, count in change_breakdown.items():
        if denom >= 20:  
            print(f"{count} {denom}-peso bill{'s' if count > 1 else ''}")
        else:  
            print(f"{count} {denom}-peso coin{'s' if count > 1 else ''}")
else:
    print("Aicham! You have to pay properly")

"""
# Get total amount and payment from user
total = int(input("Enter total: "))  # Total amount
payment = int(input("Enter payment: "))  # Payment amount

# Calculate change
change = payment - total
print(f"Your change is {change}. Here's your change:")

# Define denominations in descending order
denominations = [1000, 200, 100, 50, 20, 10, 5, 1]

if payment < total:
    print("Aicham! You have to pay properly.")
elif payment == total:
    print("I received the exact amount.")
else:
    # Calculate and print the breakdown of change in one loop
    for denom in denominations:
        count = change // denom  # Integer division
        if count:
            print(f"{count} {denom}-peso bill{'s' if denom >= 20 and count > 1 else 's' if count > 1 else ''}")
            change %= denom  # Update change to reflect the remaining amount

