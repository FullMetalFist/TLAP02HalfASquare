//
//  main.cpp
//  TLAP02HalfASquare
//
//  Created by Michael Vilabrera on 2/13/18.
//  Copyright © 2018 Michael Vilabrera. All rights reserved.
//

#include <iostream>
using std::cin;
using std::cout;

int main(int argc, const char * argv[]) {
    
    int i = 5;
    int j = 5;
    for (i = 5; i > 0; i--) {
        for (j = i; j > 0; j--) {
            cout << "#";
        }
        cout << "\n";
    }
    
    i = 7;
    j = 4;
    for (i = 7; i > 0; i--) {
        // solved with hint
        for (j = 4 - abs(4 - i); j > 0; j--) {
            cout << "#";
        }
        cout << "\n";
    }
    
    return 0;
}
