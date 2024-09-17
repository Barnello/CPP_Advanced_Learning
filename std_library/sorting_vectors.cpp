#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

class Test{
    std::string name;
    int id;

    public:
        // Constructor
        Test(int id, std::string name) : id(id), name(name){}
        
        void print(){
            std::cout << id << " : " << name << std::endl;
        }

        // bool operator<(const Test& other) const{
        //     return name < other.name;
        // }
        friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b){
    return a.name < b.name;
}

int main(){
    vector<Test> tests;

    tests.push_back(Test(3, "Judith"));
    tests.push_back(Test(1, "Mike"));
    tests.push_back(Test(2, "Zack"));
    tests.push_back(Test(4, "Nick"));

    sort(tests.begin(), tests.end(), comp);

    for(int i = 0; i < tests.size(); i++){
        tests[i].print();
    }

    return 0;
}