#include <iostream>
using namespace std;
int main(){
        int a = 4;
        int& b = a;
        int* c = &b;
	int **p= *c;
        std::cout<< &a <<std::endl;
        std::cout<<&b<<std::endl;
        std::cout<< c;
        std::cout<<a <<std::endl;
        std::cout<<b <<std::endl;
	std::cout<<c ;
	std::cout<<p<<std::endl  ;
        return 0;



     



	


}

