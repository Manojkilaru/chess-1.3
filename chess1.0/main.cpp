//
//  main.cpp
//  chess1.0
//
//  Created by Manoj kilaru on 01/06/15.
//  Copyright (c) 2015 Manoj kilaru. All rights reserved.
//

#include <iostream>
#include "start_game.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    bool wanttoplay;
    while (true) {
        startGame();
        cout<<"do you want to play once more"<<endl;
        cin>>wanttoplay;
        if (!wanttoplay) {
            break;
        }
        
    }
    
    return 0;
}
