// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    
    int ch = '1' ;
    int num = 2 ;
    
    
    // nested switch 
    
    
    switch(ch){ //switch means matching
        
        case 1: cout<<"First"<<endl;
                break; //break nhi lgya nhi to next bhi execute ho jayega 
        
        case '1': switch(num){
              case 2 : cout<<"character one " <<num << endl;
                break;//break is not mandatory 
        }
             break;
             
        default: cout<<"It is default case" <<endl; //default case is not mandatory .
    }
    
    return 0;
}

//while(1) is infinite loop