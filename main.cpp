#include <iostream>
#include <cmath>
using namespace std;

// void sayHi(){
//     cout<< "Hiiii";
// }
int getMax(int num1, int num2){
    int result;
    if (num1 > num2){
        result = num1;  
         }
        else if(
            num2>num1
        ){
            result = num2;

        }
        else if(num1 == num2){
            result = num1;
        }
        return result;
}

string dayOfTheWeek(int dayNum){
    string dayName;
    switch(dayNum){
        case 0 :
        dayName = "Sunday";
        break;
        case 1 : 
        dayName = "Monday";
        break;
        case 2:
        dayName = "Tuesday";
        break;
        case 3:
        dayName = "Wednesday";
        break;
        case 4:
        dayName = "Thursday";
        break;
        case 5:
        dayName = "Friday";
        break;
        case 6 :
        dayName = "Saturday";
        break;
        default:
        dayName : "INVALID DAY NUMBER";
        return dayName;
    }

}

int main(){

// BASIC DATA TYPES

    // char grade = 'A';
    // string phrase = "Tonight is gonna be Legendary";
    // bool isGood = true;
    // int age = 50;
    // double price = 50.49;

    // cout << phrase.substr(3,2);

    // double pri = 5.98;
    
    // int age;
    // string name;
    
    // cout<< "Whhat is yyyour age?" << endl;
    // cin>>age;

    // cout<< "You are " << age << " years old" <<endl;

    // getline(cin, name);

    // cout<< name;

    // int num1, num2;

    // cout<< "Enter num 1: ";
    // cin>> num1;
    // cout << "Enter num 2: ";
    // cin >> num2;

    // int num = num1 + num2;
    // cout<<num<<endl;

    // string celeb;
    // // cout<< "enter a color : ";
    // // cin>>color;
    // // cout<< "enter a noun: ";
    // // cin>> noun;

    // cout<<"enter a celeb: ";
    // getline(cin, celeb);

    // // cout<< "Roses are " << color<< endl;
    // // cout<< noun <<" are blue" << endl;
    // cout<< "I love " << celeb << endl;
    
    // ARRAYS

    // int luckyNums[] = {1,2,3,4,5};

    // cout<< luckyNums[0]<<endl;
    // luckyNums[4] = 67;
    // cout<< luckyNums;

    // FUNCTIONS

    // sayHi();

    //BOOLEANS

    // bool isMale =true;
    // bool isTall = false;

    // if(isMale && isTall){
    //     cout<< "Yup";
    // }
    //  else if(
    //     isMale && !isTall
    // ){
    //     cout<< "MiT";
    // }
    // else{
    //     cout<< "Nope";
    // }
    // cout << getMax(4,8);
    // cout << dayOfTheWeek(2);

    // LOOPS

    // string attempt;
    // string answer = "Barney";
    // int guessCount = 5;
    // cout << "Who wrote the broCode?" << endl;
    // cin >> attempt;
    // while(attempt != answer){
    //     guessCount--;
    //     cout << "Try again" << endl; 
    //     cin >> attempt;
    //     if(guessCount == 0){
    //         cout << "Max Count reached";
    //         break;
    //     }
    // }
    int nums[] = {1,2,3,4,5};

    for (int i = 0; i < 6 ; i++){
        cout << nums[i] << endl;
    }


    return 0;

}