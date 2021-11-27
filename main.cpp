#include <iostream>
#include <cmath>


int main()
{
    std::string liczba = "5000000";
    int suma = 0;
    
    for(int i = 1; i < liczba.size()+1; i++){
        if(int(liczba[i-1] - '0') > 0){
            suma += int(liczba[i-1] - '0')*pow(10,(liczba.size()-i));
        }
    }
    
    std::cout << suma;
    return 0;
}