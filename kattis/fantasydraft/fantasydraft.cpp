#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    // Read the number of teams, and 
    // number of players *per* team
    int num_teams, per_team_limit;
    cin >> num_teams >> per_team_limit;

    /*
     * Initalize the teams as a 3D vector,  
     *
     * First Dimension - teams[i] = team i
     * Second Dimension - teams[i][j]: j = {0, 1},
     *      0 : the list of desired players, ordered by preference
     *      1 : the list of currently held players, in order acquired
     * Third Dimension -  team[i][j][k] = player k on the list of players
     *      (either held or desired) by team i
    */
    vector<vector<vector<string>>> teams(num_teams, vector<vector<string>>(2, vector<string>()));

    // Read in all the desired players for all the teams
    for (int i = 0; i < num_teams; i++) {
        
        int per_team_desired;
        cin >> per_team_desired;

        // Read in the players desired for the respective team
        for (int j = 0; j < per_team_desired; j++) {
            string player;
            cin >> player;
            teams[i][0].push_back(player);
        }

        // pop-back() is easy, so reverse the list so the more preferred
        // are at the back
        reverse(teams[i][0].begin(), teams[i][0].end());
    }

    // The number of players that follow (ranked)
    int ranked_players;
    cin >> ranked_players;

    // Maps for faster availability lookups
    map<string, int> to_rank_pos;
    map<int, string> available;

    // Read in all the players
    for (int i = 0; i < ranked_players; i++) {
        string player;
        cin >> player;

        available[i] = player;
        to_rank_pos[player] = i;
    }

    // Assign all the players to the teams
    for (int i = 0; i < per_team_limit; i++) {

        // Check each team in a round-robin style
        for (int j = 0; j < num_teams; j++) {

            // Add a player if there is room for this team
            if (teams[j][1].size() < per_team_limit) {

                bool found = false;

                while (!found && teams[j][0].size() > 0 ) {
                                    
                    // Get the next preferred player from the team's ranking
                    string next_preferred_player = teams[j][0].back(); 
                    teams[j][0].pop_back();
                    int rankPos = to_rank_pos[next_preferred_player];

                    if (available.count(rankPos) > 0) {
                        teams[j][1].push_back(next_preferred_player);
                        available.erase(rankPos);
                        found = true;
                        break;
                    }
                } 
                
                // No preferred player was found - get the best default-ranked player
                if (!found) {
                    string alt = available.begin()->second;
                    teams[j][1].push_back(alt);
                    available.erase(to_rank_pos[alt]);
                }
            }
        } 
    }

    // All assigned - output the players
    for (int i = 0; i < num_teams; i++) {
        for (int j = 0; j < teams[i][1].size(); j++) {
            cout << teams[i][1][j] << " ";
        }

        cout << endl;
    }

    return 0;
}