head = None

n = int(input("Enter the number of nodes: "))

for i in range(n):
    data = int(input("Enter data: "))

    new_node = {
        "data": data,
        "next": None
    }

    if head is None:
        head = new_node

    else:
        temp = head

        while temp["next"] is not None:
            temp = temp["next"]

        temp["next"] = new_node


print("Linked List:")

temp = head

while temp is not None:
    print(temp["data"], end=" -> ")
    temp = temp["next"]

print("None")
