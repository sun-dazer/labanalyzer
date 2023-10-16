//partners with Beiyu Wang
#include <iostream>
#include <vector>
#include <string>
#include "StringData.h"
#include <chrono>

int LinearSearch(std::vector<std::string> vowelsList, std::string element)
{};

int BinarySearch(std::vector<std::string> vowelsList, std::string element)
{};

int main() {
    std::vector <std::string> dataSet = getStringData();
    int index = null;
    float startTime = std::chrono::system_clock::now();
    std::cin >> search;
    std::cin >> element;

    if (search == 1)
    {
        search = "linear";
        index = LinearSearch(dataSet, element);
    }
    if (search == 2)
    {
        search = "binary";
        index = BinarySearch(dataSet, element);
    }

    float stopTime = std::chrono::system_clock::to_time_t(startTime);
    float totalTime = stopTime - startTime;
    std::cout << index << "found in" << totalTime << "seconds using" << search << "search." << std::endl;


    return 0;
}

int LinearSearch(std::vector<std::string> vowelsList, std::string element){
    for(int i = 0; i < vowelsList.size(); ++i)
    {
        if (vowelsList.at(i) == (element))
            return index;
    }
    return -1;
}

int BinarySearch(std::vector<std::string> vowelsList, std::string element){
    int tries = 0;
    int difference = vowelsList.size();
    while (difference != 0)
    {
        difference/= 2;
        ++tries;
    }
    int count = 0;
    int middle = vowelsList.size();
    while (element != vowelsList.at(middle)) {
        if (element < vowelsList.at(middle)) {
            middle = middle / 2;
            count += 1;
        } else {
            middle = (middle + vowelsList.size()) / 2;
            count += 1;
        }
        if (count == tries) {
            return -1;
        }
    }
    return middle;
    }

