#include <iostream>
#include "Digmanip.h"

using namespace std;
//int digit_sum(int num){
   // int sum = 0;
   // while(num > 0){
     //   sum += (num % 10);
       // num /= 10;
    //}
    //return sum;
//}
void print(vector<int> arr){
        for(int i = 0; i < arr.size(); i++){
                cout << arr[i] << endl;
        }
}


vector<int> square_vector(vector<int> arr){
        for(int i = 0; i < arr.size(); i++){
                arr[i] *= arr[i];
        }
        return arr; 
}

int extract_digit(int num){
        int dig = num % 10;
        return dig; 
}

vector<int> extract_digits(vector<int> arr){
        vector<int> new_arr = {};
        for(int i = 0; i < arr.size(); i++){
                while(arr[i] > 0){
                        int dig = extract_digit(arr[i]);
                        new_arr.push_back(dig);
                        arr[i] /= 10;
                }
        }
        return new_arr; 
}

int square_digit(int num){
        vector<int> tmp = {num};
        vector<int> arr = extract_digits(square_vector(extract_digits(tmp)));
        int n = arr.size();
        int answer = 0;
        for(int i = 0; i < n; i++){
                answer += arr[i] * pow(10, n - (i + 1));
        }
        return answer; 
}

int main(void){
        // testing
       // cout << square_digit(765) << endl; // Returns 493625
        //cout << square_digit(3212) << endl; // returns 9414
        //cout << square_digit(0) << endl; // returns 0
        //cout << square_digit(13579) << endl; // returns 19254981
        print(square_vector(extract_digits({47, 51})));
        return 0;

}
