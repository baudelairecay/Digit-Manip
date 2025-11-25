#include <vector>
#include <cmath>

void print(std::vector <int> arr); // Mainly for testing
int length(int num);  // returns the length of the given number
int extract_digit(int num); // squares all the digits in a vector(array)
std::vector<int> square_vector(std::vector<int> arr); // extracts a singular digit from a number
std::vector<int> extract_digits(std::vector<int> arr); // Extracts all digits from all numbers in the given array, and places them in a new array
int square_digit(int num); // Essentially works in lieu of string concatenation and conversion for int types.
