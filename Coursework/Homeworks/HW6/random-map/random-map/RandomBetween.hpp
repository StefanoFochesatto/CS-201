//
//  RandomBetween.hpp
//  random-map
//
//  Created by Stefano Fochesatto on 11/10/19.
//  Copyright © 2019 Stefano Fochesatto. All rights reserved.
//

#ifndef RandomBetween_hpp
#define RandomBetween_hpp

#include <stdio.h>
int RandomBetweenU(int first, int last, std::mt19937& e2);

int RandomBetweenN(int first, int last, std::mt19937& e2);

int RandomBetween(int first, int last);

void PrintDistribution(const std::map<int,int>& numbers);
#endif /* RandomBetween_hpp */
