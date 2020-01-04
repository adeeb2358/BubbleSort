//
//  main.cpp
//  BubbleSort
//
//  Created by adeeb mohammed on 04/01/20.
//  Copyright © 2020 adeeb mohammed. All rights reserved.
//

// bubble sort algorithm

#include <iostream>
#include <vector>
// time complexity is o(n2) worst case and best case o(n)
//space complexity is o(1)
std::vector<int> bubbleSort(std::vector<int> array) {
    bool swapDone       = false;
    int  arrayBoundary  = (int)array.size();
    int  numOne         = 0;
    int  numTwo         = 0;
    do{
        swapDone   = false;
        for(int i = 0; i < (arrayBoundary - 1); i++){
            numOne = array.at(i);
            numTwo = array.at(i+1);
            if(numOne > numTwo){
                array.at(i)   = numTwo;
                array.at(i+1) = numOne;
                swapDone      = true;
            }
        }
        arrayBoundary--;
    }while(swapDone == true);
    return array;
}
int main(int argc, const char * argv[]) {
    std::cout << "Program for bubble sort" << std::endl;
    auto array = {3,9,2,1,10,15,-1};
    auto result = bubbleSort(array);
    for(auto it = result.begin(); it != result.end(); ++it){
        std::cout << *it << " ";
    }
    return 0;
}
