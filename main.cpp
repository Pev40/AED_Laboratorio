#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList polinomios;

    polinomios.insert(1,2);
        polinomios.insert(1,3);
            polinomios.insert(4,5);
            polinomios.add(1,1);
            polinomios.add(5,0);
            polinomios.add(3,6);
            polinomios.add(-4,5);
            
                polinomios.print();
    return 0;

}