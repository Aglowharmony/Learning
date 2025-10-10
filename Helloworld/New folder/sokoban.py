def main():
    history = []

    while True:
        action = input("Action: ")

        if action =="Undo":
           pundone = history.pop()
           print(f"undone: {undone}")
       elif:
           action == "Restart":
           history.clear()
       else:
             history.append(action)
             print(history)


main()
