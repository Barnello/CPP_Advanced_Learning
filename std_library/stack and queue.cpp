#include <iostream>
#include <stack>
#include <queue>

using namespace std; 

class Test{
    private:
        string name;
    public:
        Test(string name) : name(name){

        }

        ~Test(){
            //cout << "Object Destroyed" << endl;
        }

        void print() {

            cout << name << endl;
        }
};

int main(){

    stack<Test> testStack;

    //unliek the insert functionality for lists and sets, stacks follow
    //last in first out where data is pushed and popped to and from the stack
    testStack.push(Test("Mike"));
    testStack.push(Test("Luke"));
    testStack.push(Test("John"));
    testStack.push(Test("Jedadiah"));
    
    // This is in valid code since the object is destroyed
    // Test &test2 = testStack.top();
    // testStack.pop
    // test2.print(); // Reference refers to destroyed object

    while(testStack.size() > 0){
        Test &testAllocation = testStack.top();
        testAllocation.print();
        testStack.pop();
    }

    /////////////////// START OF QUEUE CODE //////////////

    cout << "\nBegining of the queue testing code\n" << endl;
    
    queue<Test> testQueue;

    //FIFO
    testQueue.push(Test("Mike"));
    testQueue.push(Test("Luke"));
    testQueue.push(Test("John"));
    testQueue.push(Test("Jedadiah"));

    while(testQueue.size() > 0){
        Test testAllocationQ = testQueue.back();
        testAllocationQ.print();
        testStack.pop();
    }

    return 0;
}