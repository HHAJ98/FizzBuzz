#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, start, end;
    if(argc < 2){
        cout << "No arguments for divisors, setting defaults (3, 5)" << endl;
        cout << "No arguments for starting and ending indicies, setting defaults (1, 100)" << endl;
        a = 3;
        b = 5;
        start = 1;
        end = 100; 
    } else if (argc < 4) {
        cout << "No arguments for divisors, setting defaults (3, 5)" << endl;
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        start = 1;
        end = 100;
    } else {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        start = atoi(argv[3]);
        end = atoi(argv[4]);
    }
    
    
    for(int i = start; i <= end; i++){
        if(i % a == 0) cout << "Fizz ";
        if(i % b == 0) cout << "Buzz";
        if(i % a != 0 && i % b != 0) cout << i;
        cout << endl;
    }
    return 0;
}
