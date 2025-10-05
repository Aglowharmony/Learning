# lets make a player class

class player():
    def __init__(self, name, pw ='', highscore = 0) 
       self.name = name
       self.password = pw
       self.highscore = highscore

       def update_highscore(self, new_score):
           if new_score > self.highscore:
               self.highscore = new_score

