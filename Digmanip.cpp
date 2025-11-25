#include <iostream>
#include "Digmanip.h"

using namespace std;

void print(vector<int> arr){
        for(int i = 0; i < arr.size(); i++){
                cout << arr[i] << endl;
        }
}

int length(int num){
        int count = 0;
        for(int i = num; i != 0; i /= 10){
                count += 1;
        }
        return count; // returns the length of the given number
}

vector<int> square_vector(vector<int> arr){
        for(int i = 0; i < arr.size(); i++){
                arr[i] *= arr[i];
        }
        return arr; // squares all the digits in a vector(array)
}

int extract_digit(int num){
        int len = length(num);
        int dig = num / pow(10, len - 1);
        return dig; // extracts a singular digit from a number
}

vector<int> extract_digits(vector<int> arr){
        vector<int> new_arr = {};
        for(int i = 0; i < arr.size(); i++){
                while(arr[i] > 0){
                        int dig = extract_digit(arr[i]);
                        new_arr.push_back(dig);
                        int len = length(arr[i]);
                        arr[i] -= dig * pow(10, len - 1);
                }
        }
        return new_arr; // Extracts all digits from all numbers in the given array, and places them in a new array
}

int square_digit(int num){
        vector<int> tmp = {num};
        vector<int> arr = extract_digits(square_vector(extract_digits(tmp)));
        int n = arr.size();
        int answer = 0;
        for(int i = 0; i < n; i++){
                answer += arr[i] * pow(10, n - (i + 1));
        }
        return answer; // Essentially works in lieu of string concatenation and conversion for int types.
}

int main(void){
        // testing
        cout << square_digit(765) << endl;
        cout << square_digit(3212) << endl;
        cout << square_digit(0) << endl;
        cout << square_digit(13579) << endl;
        return 0;

}
