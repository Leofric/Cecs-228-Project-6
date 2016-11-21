//
//  main.cpp
//  Project 6
//
//  Created by Alex Berthon on 11/16/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include <iostream>
#include <map>
#include <iomanip>

int main(int argc, const char * argv[]) {
    //initialize
    std::map <int,int> values;
    srand((unsigned)time(0));
    int rng;
    int sum;
    
    //generate 10000 random integers / store
    for(int i = 0; i<10000; i++){
        rng = (rand()%100 + 1);
        sum += rng;
        if(values.find(rng) == values.end()){
            values[rng] = 1;
        }
        else {
            values[rng]++;
        }
    }
    
    //print all 10,000
    for(int i = 1, newLine = 0; i<101; i++){
        for(int j = 0; j<values[i]; j++){
            std::cout<<std::setw(3)<<std::left<<i<<" ";
            newLine++;
            if(newLine == 100){
                newLine = 0;
                std::cout<<std::endl;
            }
        }
    }
    std::cout<<std::endl;
    
    //sum
    std::cout<<"Sum of all numbers = "<<sum<<std::endl;
    std::cout<<"--Press the enter key to continue--"<<std::endl;
    std::cin.get();
    
    //average
    std::cout<<"Average = "<<sum/10000<<std::endl;
    
    //frequency
    std::cout<<"Printing frequency of all numbers.."<<std::endl;
    for(int i = 1; i<101; i++){
        std::cout<<i<<" : "<<values[i]<<std::endl;
    }
}
