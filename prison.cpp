#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<functional>
using namespace std;

const int MAX = 102;
const int INF = 987654321;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int test_case;

    cin >> test_case;

    for(int t = 0; t < test_case; t++){
        int h, w;
        cin >> h >> w;

        string room[MAX];

        for(int i = 0; i <= w + 1; i++){
            room[0].push_back('.');
            room[h + 1].push_back('.');
        }

        vector<pair<int, int>> prisoner;
        prisoner.push_back({0, 0});

        for(int i = 1; i <= h; i++){
            cin >> room[i];

            room[i] = '.' + room[i];
            for(int j = 1; j <= w; j++){
                if(room[i][j] == '$')
                    prisoner.push_back({i, j});
            }
            room[i].push_back('.');
        }

        int distance[3][MAX][MAX];
        for(int i = 0; i < 3; i++){
            priority_queue<pair<int, pair<int, int>>, 
                vector<pair<int, pair<int, int>>>, 
                greater<pair<int, pair<int, int>>>> pq;

            for(int j = 0; j <= h + 1; j++){
                for(int k = 0; k <= w + 1; k++){
                    distance[i][j][k] = INF;
                }
            }

            pq.push({0, {prisoner[i]}});
            distance[i][prisoner[i].first][prisoner[i].second] = 0;

            bool visited[MAX][MAX] = {false, };
            while (!pq.empty()){
                int y = pq.top().second.first;
                int x = pq.top().second.second;
                pq.pop();

                for(int j = 0; j < 4; j++){
                    int next_y = y + dy[i];
                    int next_x = x + dx[i];

                    if(0 <= next_y && next_y <= h + 1 &&
                         0 <= next_x && next_x <= w + 1){
                        
                        if(visited[next_y][next_x] ||
                            room[next_y][next_x] == '*'){
                            continue;
                        }

                        int nextDistance = distance[i][y][x];
                        if(room[next_y][next_x] == '#'){
                            nextDistance++;
                        }

                        if(distance[i][next_y][next_x] > nextDistance){
                            distance[i][next_y][next_x] = nextDistance;
                            visited[next_y][next_x] = true;
                            pq.push({nextDistance, {next_y, next_x}});
                        }
                    }
                }
            }
            
        }

        long long result = INF;
        for(int i = 1; i <= h; i++){
            for(int j = 1; j <= w; j++){
                if(room[i][j] != '*'){
                    long long total = 0;
                    for(int k = 0; k < 3; k++){
                        total += distance[k][i][j];
                    }

                    total -= 2 * (room[i][j] == '#');
                    result = min(result, total);
                }
            }
        }

        cout << result << "\n";
    }

    return 0;
}

//https://jaimemin.tistory.com/1243