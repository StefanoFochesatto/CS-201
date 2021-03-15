/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "Lambdas.hpp"

int main() {

    // TODO: REQUIRED
    
    std::vector<std::pair<size_t, std::string>> enumerate;
    for (const auto& i : WIKIPEDIA_CPP){
        enumerate.push_back(std::make_pair(i.size(), i));
     }
        
    
    //       Create a vector<pair<size_t, string>> to enumerate
    //       each string in the WIKIPEDIA_CPP string vector.



    // TODO: REQUIRED
    std::cout << "Sorting Data set" << std::endl;
    std::sort (enumerate.begin(), enumerate.end(), [](std::pair <size_t, std::string> a, std::pair <size_t, std::string> b) { return a.first < b.first; });






    //       Use std::sort with a comparison lambda function that sorts
    //       the vector pairs with the first member in descending order.



    // TODO: REQUIRED
    //       Use printVectorPairs() to print the vector
    std::cout << printVectorPairs(enumerate.begin(),enumerate.end());


    // TODO: ADDITIONAL 1
    //       Use std::sort with a comparison lambda function that sorts
    //       the vector pairs with the second member in ascending order.



    // TODO: ADDITIONAL 1
    //       Use printVectorPairs() to print the vector



    // TODO: ADDITIONAL 2
    //       Use std::find_if with a comparison lambda function that prints
    //       the vector pairs where the pair's second.length() > 15.
    //       Print the vector as described in the lab.



    return 0;
}
