#ifndef __PAR_H__
#define __PAR_H__
#include <iostream>
class Par
{
private:
    int Coeficiente;
    int Grado;
    Par *next;
public:
    Par(int,int);
    Par();
    ~Par();
    void setCoeficiente(int);
    void setNext(Par*);
    int getCoeficiente();
    int getGrado();
    Par* getNext();
    void setEliminar();
    void print();
};



Par::Par(){
    this->Coeficiente=0;
    this->Grado=0;return;
}

Par::Par(int C,int G)
{
    this->Coeficiente=C;
    this->Grado=G;return;
}
int Par::getCoeficiente(){return this->Coeficiente;}
int Par::getGrado(){return this->Grado;};
void Par::setCoeficiente(int NuevoCoeficiente){
    this->Coeficiente=NuevoCoeficiente;
    return;
}
void Par::setNext(Par* nodo){
    this->next=nodo;
    return;
}
Par* Par::getNext(){
    return this->next;
}

void Par::print(){
    std::cout<<"("<<this->Coeficiente<<","<<this->Grado<<")"; return;
}

void Par::setEliminar(){
    this->next=nullptr;
    return;
}
Par::~Par(){}



#endif