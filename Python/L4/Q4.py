#nested dictionary


employees = {
    "emp1": {
        "name": "Alice", 
        "role": "Developer", 
        "salary": 85000
    },
    "emp2": {
        "name": "Bob", 
        "role": "Designer", 
        "salary": 70000
    }
}

alice_role = employees["emp1"]["role"]
print("Alice's Role: " + alice_role)

employees["emp3"] = {
    "name": "Charlie", 
    "role": "Manager", 
    "salary": 95000
}

employees["emp2"]["salary"] = 75000

del employees["emp1"]["salary"]

print("Employee 1 Name: " + employees["emp1"]["name"])
print("Employee 2 Salary: " + str(employees["emp2"]["salary"]))
print("Employee 3 Role: " + employees["emp3"]["role"])
