#include <iostream>
using namespace std;

int getPower(int baseNum, int powerNum){
   int result = 1;
    for (int i = 0; i < powerNum; i++){
        result = result * baseNum;
    };
    cout << result;
    return result;
}
int getHighestNum(int nums[]){
    int highest = 0;
    for ( int i = 0; i<2; i++) {
        if (nums[i] > nums[i+1]){
            highest = nums[i];
            cout << highest << endl;
            // cout<< "h"<< highest << endl;
        }
        else{
            highest = nums[i+1];
        }
    }
    cout << highest;
    return highest;
}

int main (){
int nums[] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++){
        cout << nums[i] << endl;
    }

    int nums[]={1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i<=9; i++){
        cout<< nums[i] << endl;
    }
    for (int i = 0; i>10; i++){
        cout<< nums[i] << endl;
    }
    int nums[] = {1,2,3};
    getPower(2,1);
    getHighestNum(nums);

    // 2 DIMENSIONAL ARRAY
    int dimenArray [3][2] = {
        {1,2},
        {3,4},
        {5,6}
    }; 

    cout << dimenArray[2][0] << endl;

    for (int i = 0; i<3; i++){
        for( int j = 0; j<2; j++){
            cout << dimenArray[i][j];
        }
        cout << endl;
    }

    return 0;
}