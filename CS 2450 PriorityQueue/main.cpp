//
//  main.cpp
//  CS 2450 PriorityQueue
//
//  Created by Dustin Hurst on 2/14/15.
//  Copyright (c) 2015 Dustin Hurst. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class PriorityQueue {
public:
    void getInput(){
        string input;
        vector<int> vec;
        
        cout << "Enter input: " << endl;
        while(getline(cin, input)){
            if(input.empty())
                break;
            cout << "Enter input: " << endl;
        }
    }
};

int main(int argc, const char * argv[]) {
    PriorityQueue pq;
    pq.getInput();
    return 0;
}
