from constraint import Problem, AllDifferentConstraint

prob = Problem()

tasks = ["OS", "DBMS", "AIML", "FED"]
time_slots = list(range(4))

for task in tasks:
    prob.addVariable(task, time_slots)

prob.addConstraint(AllDifferentConstraint(), tasks)

def after(aiml_slot, os_slot):
    return aiml_slot > os_slot

prob.addConstraint(after, ("AIML", "OS"))

solutions = prob.getSolutions()

print("Valid schedules:")
for solution in solutions:
    print(solution)
