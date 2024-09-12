#include <iostream>
#include <map>

using namespace std;

int main(){

    multimap<int, string> lookup;

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(40, "Michael"));
    lookup.insert(make_pair(20, "Mikey"));
    lookup.insert(make_pair(20, "Josh"));

    for(multimap<int, string>::iterator it=lookup.begin(); it!=lookup.end(); it++){
        cout << it->first <<": " << it->second << endl;  
    }

    cout << endl;

    for(multimap<int, string>::iterator it=lookup.find(30); it!=lookup.end(); it++){
        cout << it->first <<": " << it->second << endl;  
    }

    cout << endl;

    auto its = lookup.equal_range(20);

    for(multimap<int, string>::iterator it=its.first; it!=its.second; it++){
        cout << it->first <<": " << it->second << endl;  
    }

    return 0;
}