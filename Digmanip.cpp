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

int length(int num){
        int count = 0;
        while(num > 0){
                count += 1;
                num /= 10;
        }
        return count;
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
        vector<int> arr = square_vector(extract_digits(tmp));
        print(arr);
        int n = arr.size();
        int answer = 0;
        for(int i = n - 1; i >= 0; i--){
                answer += arr[i] * pow(10, i);
                cout << arr[i] << endl;
                cout << answer << endl;
        }
        return answer; 
}

int main(void){
        // testing
        cout << square_digit(765) << endl; // Returns 493625
        //cout << square_digit(3212) << endl; // returns 9414
        //cout << square_digit(0) << endl; // returns 0
        //cout << square_digit(13579) << endl; // returns 19254981
        return 0;

}
