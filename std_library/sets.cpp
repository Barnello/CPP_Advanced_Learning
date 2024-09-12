#include <iostream>
#include <set>

using namespace std;

class Test{
    int id;
    string name;
public:

    Test(int id, string name): id(id), name(name){

    }

    void print(){
        cout << id << ": " << name << endl; 
    }
};

int main(){

    set<int> nums;

    nums.insert(2);
    nums.insert(3);
    nums.insert(5);   
    nums.insert(14);

    for(set<int>::iterator it = nums.begin(); it != nums.end(); it++){
        cout << *it << endl;
    }

    set<int>::iterator itFind = nums.find(2);

    if(itFind != nums.end()){
        cout << "Found: " << *itFind << endl;
    }

    if(nums.count(30)){
        cout << "Numbers found." << endl;
    }

    set<Test> tests;

    tests.insert(Test(10, "somethign2"));
    tests.insert(Test(20, "somethign1"));
    tests.insert(Test(30, "somethign3"));

    return 0;
}