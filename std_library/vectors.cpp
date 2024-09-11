#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums;

    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(7);

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << endl;
    }

    for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
        cout << *it << endl;
    }

    cout << "Capacity is " << nums.capacity() << endl;
    cout << "Back is " << nums.back() << endl;
    cout << "Data is " << nums.data() << endl;
    cout << "Max Size is " << nums.max_size() << endl;
    
    // nums.clear();
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
        if(nums.size() == 0){
            cout << "Vector has been cleared" << endl;
        }
        else{
            cout << *it << endl;
        }
    }

    cout << "Test line" << endl;
    
    return 0;
}