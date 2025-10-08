# looking into storing and reading information using json 

# json is a object notation that is used to store data 
# java script object notation 

import json

user ={'user_name':'smit',
       'user_pw':'smit123',
       'user_highscore':125}

f = open('user_data.json','w')
json.dump(user, f)
f.close()

class_list = ('python I', 'python II', 'python III')

with open('class_info.json', 'w') as f:
    json.dump(class_list, f)

users = [{'user_name': 'smit',
          'user_pw': 'smit123',
          'user_highscore' :123}
         {'user_name': 'nyima',
         'user.pw': 'password123',
          'user_highscore' :400}]

with open('game_save.json' 'w') as f:
          json.dump(user, f)
