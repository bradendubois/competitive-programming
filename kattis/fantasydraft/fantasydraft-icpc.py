from sys import stdin

class Team(object):
    def __init__(self):
        self.preference_list = []
        self.has = []
        self.size = 0

    def next_preferred(self):
        if len(self.preference_list) > 0:
            return self.preference_list.pop(0)
        else:
            return None

available = []

first_line = stdin.readline().rstrip().split(" ")
num_teams = int(first_line[0])

team_list = []
for i in range(num_teams):
    team_list.append(Team())

max_allowed = int(first_line[1])
for i in range(num_teams):
    teamline = stdin.readline().rstrip().split(" ")
    for j in range(int(teamline[0])):
        team_list[i].preference_list.append(teamline[j + 1])

num_players = int(stdin.readline().rstrip().split(" ")[0])
for num in range(num_players):
    available.append(stdin.readline().rstrip().split(" ")[0])

modify_list = team_list.copy()

working_length = len(modify_list)

available_set = set(available)

while working_length > 0:

    removes = []

    for i in range(working_length):
        current_team = modify_list[i]
        found = False

        while not found:
            next_player = current_team.next_preferred()
            if next_player is None:
                selected = available.pop(0)
                if selected in available_set:
                    current_team.has.append(selected)
                    available_set.remove(selected)
                    current_team.size += 1
                    found = True
            else:
                if next_player in available_set:
                    current_team.has.append(next_player)
                    current_team.size += 1
                    available_set.remove(next_player)
                    found = True


        if current_team.size == max_allowed:
            removes.append(current_team)
    for i in removes:
        modify_list.remove(i)
        working_length -= 1

for team in team_list:

    msg = ""
    for player in team.has:
        msg += player + " "
    print(msg)