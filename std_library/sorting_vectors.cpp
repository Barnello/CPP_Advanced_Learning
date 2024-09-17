#include <iostream>
#include <vector>

using namespace std;

class Test{
    private: 
        std::string name;
        int id;
    public:
        Test(int id, std::string name) : id(id), name(name){}
        void print(){
            std::cout << id << " : " << name << std::endl;
        }
};

int main(){
    vector<Test> tests;

    tests.push_back(Test(1, "Judith"));
    tests.push_back(Test(2, "Mike"));
    tests.push_back(Test(3, "Jess"));
    tests.push_back(Test(4, "Nick"));

    sort(tests.begin(), tests.end());

    for(int i = 0; i < tests.size(); i++){
        tests[i].print();
    }

    return 0;
}