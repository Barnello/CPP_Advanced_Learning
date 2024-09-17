#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){

    map<string, vector<int>> scores;

    scores["Luke"].push_back(100);
    scores["Luke"].push_back(73);
    scores["Josh"].push_back(60);
    scores["Luke"].push_back(40);
    scores["Josh"].push_back(53);
    scores["Josh"].push_back(20);

    for(map<string, vector<int>>::iterator it = scores.begin(); it != scores.end(); it++){
        string name = it->first;
        vector<int> values = it->second;

        cout << name << ":" << flush;
        for(int i = 0; i < values.size(); i++){
            cout << values[i] << " " << flush;
        }
        cout << '\n';
    }    

    return 0;
}