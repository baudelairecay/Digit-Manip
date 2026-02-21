#include "Digmanip.h"
using namespace std;

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
        vector<int> arr = extract_digits(square_vector(extract_digits(tmp)));
        int n = arr.size();
        int answer = 0;
        for(int i = n - 1; i >= 0; i--){
                answer += arr[i] * pow(10, i);
        }
        return answer; 
}

