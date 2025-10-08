from player_class import *
import json
import random

# in this game, my player is going to try to guess a random number and see how many tries it takes 

def intify(user_input):
    try:
        int(input)
    except:
        intify(input('that was not a number, please try again.\n'))

random_num = random.randint(1,10)
user_guess = input('Guess a number between 1 to 10\n')
try:
    user_guess = int(user_guess) 
except:
user_guess = intify(input('that was not a digit please enter a number')
score = 100

while random_num != user_game:
    print('Good guess but not quite there, please try again')
    user_guess = intify(input('Guess again:\n'))
    score -= 10

print(f'Good job, that was the correct number!{score}.')
