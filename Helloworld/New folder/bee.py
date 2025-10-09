WORDS = {"PAIR" : 4, "HAIR" :4, "CHAIR" :5}

def main():
    print("Welcome to spelling bee")
    print("Your letters are : A I P C R H G ")

    while len(WORDS) > 0:
        print(f"{len(WORDS)} words left!")
        guess = input("guess a words: ")

        if guess in WORDS.keys():
            points = WORDS.pop(guess)
            print(f"Good job! your scored {points} points.")

    print("that's the game!")

if __name__ == "__main__":
    main()
