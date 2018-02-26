//
//  main.cpp
//  234 Tree
//
//  Created by dali on 2/23/18.
//  Copyright © 2018 dali. All rights reserved.
//
#include "TwoFiveTree.h"
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    TwoFiveTree TFTREE;
    for(int i=1; i<=20; i++){
        TFTREE.insert(i);
    }
    TFTREE.remove(15);
    TFTREE.remove(13);
    TFTREE.remove(16);
    TFTREE.remove(17);
    TFTREE.remove(15);
    TFTREE.remove(100);
    TFTREE.remove(5);
    TFTREE.remove(7);
    TFTREE.remove(8);
    TFTREE.remove(5);
    TFTREE.remove(2);
    TFTREE.remove(6);
    TFTREE.remove(1);









    
    
    TFTREE.Traversal(TFTREE.root);

    



    
   
    //cout<< TFTREE.search(5) <<endl;
    
    
    cout<<"fuck!"<<endl;
}
