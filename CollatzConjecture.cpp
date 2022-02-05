#include <iostream>

int main();

int main () {

    int n{};
    std::cout<<"Enter a positive integer value (n): "<<std::endl;
    std::cin>>n;

    int x{n};
    int y{1};

    if (x>=1){
        std::cout<<n<<", ";
        while (n!=1) {
            ++y;
            if ((n%2) == 0){
                n/=2;
                if (n!=1){
                    std::cout<<n<<", ";
                }
                else{
                    break;
                }
            }
            else {
                n = (3*n + 1);
                std::cout<<n<<", ";
            }
        }

        std::cout<<"1."<<std::endl;
        std::cout<<"The Collatz Conjecture is valid for the value "<<x<<". The number 1 was reached within "<<y<<" iterations."<<std::endl;
    }

    else{
        std::cout<<"That value is not valid. Please try again."<<std::endl;
    }

    return 0;
}