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
        return count;
}

vector<int> square_vector(vector<int> arr){
        for(int i = 0; i < arr.size(); i++){
                arr[i] *= arr[i];
        }
        return arr;
}

int extract_digit(int num){
        int len = length(num);
        int dig = num / pow(10, len - 1);
        return dig;
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
        return new_arr;
}

int main(void){
        vector<int> arr = {765, 123};
        print(extract_digits(square_vector(extract_digits({765, 123}))));
        return 0;

}
