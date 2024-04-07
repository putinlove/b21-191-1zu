#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include <sstream>
#include <cmath>
#include <stdio.h>
#include "functions.h"

#define INPUT_FILE  "input.txt"
#define OUTPUT_FILE "output.txt"
using namespace std;

int main() {
    std::vector<int> arr = {10, 14, 15, 20, 21, 25, 30};
    std::pair<int, int> result = countAndSum(arr);
    std::cout << "Number of elements that are divisible by 5 and not divisible by 7: " << result.first << std::endl;
    std::cout << "Sum: " << result.second << std::endl;
    return 0;
}