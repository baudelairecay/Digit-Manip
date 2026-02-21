#include <iostream>
#include "Digmanip.h"
#include "Digmanip.cpp"

using namespace std;

// Notes:

/* length function fails for numbers that start with a leading 0
    however for my current use case this implementation should suffice
    I will find a more elegant solution after I have brute forced my way
    through this proejct.
*/
void print(vector<int> arr){
        cout << "[";
        for(int i = 0; i < arr.size(); i++){
                if(i != arr.size() - 1){
                        cout << arr[i] << ", ";
                }else{
                         cout << arr[i];
                }
        }
        cout << "]" << endl;
}

int main(void){
        // "testing"
        cout << square_digit(765) << endl; // Returns 493625
        cout << square_digit(3212) << endl; // returns 9414
        cout << square_digit(0) << endl; // returns 0
        cout << square_digit(13579) << endl; // returns 19254981
        cout << square_digit(24680) << endl; // returns 41636640
        return 0;

}