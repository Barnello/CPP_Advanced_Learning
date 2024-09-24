#include <iostream>
#include <string>
#include <vector>

using namespace std; 

bool match(string s){
    return s.size() == 3;
}

int count_if(vector<string> &v, bool (*matchPtr)(string s)){
    int ct = 0;
    for(int i = 0; i < v.size(); i++){
        if(match(v[i]) == 1){
            ct++;
        }    
    }
    return ct;
}

int main(){
    
    vector<string> strings;
    strings.push_back("one");
    strings.push_back("one");
    strings.push_back("four");
    strings.push_back("five");
    strings.push_back("one");
    strings.push_back("two");

    cout << match(strings[1]) << endl;

    cout << count_if(strings, match) << endl;
    

    return 0;
}