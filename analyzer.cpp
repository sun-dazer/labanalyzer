// Partner: Kristen Mohammed
// Beiyu Wang

#include <iostream>
#include <vector>
#include <chrono>
#include <string>
#include "StringData.h"

int linearSearch(std::vector<std::string> container, std::string element){
    int ind;
    for (ind=0; ind<container.size(); ind++) {
        if (container[ind] == element) {
            return ind;
        }
    }
    return -1;
}

int binarySearch(std::vector<std::string> container, std::string element){
    int low = 0;
    int high = container.size();
    int mid;
    while (low <= high){
        mid = (low + high)/2;
        if (container[mid] > element){
            high = mid - 1;
        }
        else if (container[mid] < element){
            low = mid + 1;
        }
        else if (container[mid] == element){
            return mid;
        }
    }
    return -1;

}

int main() {
    std::vector<std::string> dataset = getStringData();
    auto start = std::chrono::system_clock::now();
    std::time_t end = std::chrono::system_clock::to_time_t(start);
    std::cout << "Beginning time: " << std::ctime(&end);
    start = std::chrono::system_clock::now();
    std::cout << "Linear search index for 'not_here': " << linearSearch(dataset, "not_here") << std::endl;
    end = std::chrono::system_clock::to_time_t(start);
    std::cout << "Linear search for 'not_here': " << std::ctime(&end) << std::endl;
    start = std::chrono::system_clock::now();
    std::cout << "Binary search index for 'not_here': " << binarySearch(dataset, "not_here") << std::endl;
    end = std::chrono::system_clock::to_time_t(start);
    std::cout << "Binary search for 'not_here': " << std::ctime(&end) << std::endl;
    start = std::chrono::system_clock::now();
    std::cout << "Linear search index for 'mzzzz'" << linearSearch(dataset, "mzzzz") << std::endl;
    end = std::chrono::system_clock::to_time_t(start);
    std::cout << "Linear search for 'mzzzz': " << std::ctime(&end) << std::endl;
    start = std::chrono::system_clock::now();
    std::cout << "Binary search index for 'mzzzz': " << binarySearch(dataset, "mzzzz") << std::endl;
    end = std::chrono::system_clock::to_time_t(start);
    std::cout << "Binary search for 'mzzzz': " << std::ctime(&end) << std::endl;
    start = std::chrono::system_clock::now();
    std::cout << "Linear search index for 'aaaaa'" << linearSearch(dataset, "aaaaa") << std::endl;
    end = std::chrono::system_clock::to_time_t(start);
    std::cout << "Linear search for 'aaaaa': " << std::ctime(&end) << std::endl;
    start = std::chrono::system_clock::now();
    std::cout << "Binary search index for 'aaaaa': " << binarySearch(dataset, "aaaaa") << std::endl;
    end = std::chrono::system_clock::to_time_t(start);
    std::cout << "Binary search for 'aaaaa': " << std::ctime(&end) << std::endl;
}
