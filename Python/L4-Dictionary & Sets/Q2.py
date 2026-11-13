#updating values is allowed 

student={
    "name":"kishan",
    "age":9,
    "college":"aitd",
    "subjects":["Maths","Chem","Pc&tw","Mec","Elec","PPS"],
    "marks":[96,89,9,93,97,99],
    "cgpa":9.4,
}
student["name"]="Neha"          #overwrites
print(student["name"])
student["surname"]="chaurasia"
print(student["surname"])       # new keys can e added to the dictionary 
student["marks"].append(80)     #these properties also works 
print(student["marks"])