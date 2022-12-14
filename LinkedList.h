#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include "Par.h"
class LinkedList
{
private:
    Par *head=new Par();
public:
    LinkedList();
    void add(int Coef,int Grado);
    void print();
    void insert(int,int);
    void deleteCoe(int);
    ~LinkedList();
};

LinkedList::LinkedList(){}

LinkedList::~LinkedList(){}

void LinkedList::insert(int Coef,int Grado){
    Par* parNuevo = new Par(Coef,Grado);
    parNuevo->setNext(head);
    head=parNuevo;
    return;
}

void LinkedList::deleteCoe(int Grado){
    Par* nodoAux=this->head;
    while (nodoAux->getNext()!=nullptr)
    {
        if(nodoAux->getNext()->getGrado()==Grado){
            break;
        }
        nodoAux = nodoAux->getNext();
    }
    Par* nodoSalida = nodoAux;
    nodoSalida=nodoSalida->getNext();
    nodoAux->setNext(nodoAux->getNext()->getNext());
    nodoSalida->setEliminar();
    
 return;
    
}

void LinkedList::add(int Coef,int Grado){
    Par* nodoAux=head;
    //std::cout<<"bienvenido";
    while (nodoAux->getNext()!=nullptr)
    {
        if(nodoAux->getGrado()==Grado){
            Coef = Coef+nodoAux->getCoeficiente();
            if(Coef ==0){
                deleteCoe(Grado);
            }
            nodoAux->setCoeficiente(Coef);
        
        //    std::cout<<"Aqui1";
            break;
        }
        if (nodoAux->getGrado()>Grado)
        {
            if(nodoAux->getNext()->getGrado()<Grado){
          //      std::cout<<"Aqui2";
                Par* parNuevo = new Par(Coef,Grado);
                parNuevo->setNext(nodoAux->getNext());
                nodoAux->setNext(parNuevo);break;
                              
            }
            else{
            //    std::cout<<"siguiente";
                nodoAux=nodoAux->getNext();
            }
        }
        if(nodoAux->getGrado()<Grado)
        {
            insert(Coef,Grado);
            return;
        }
    }
    if(nodoAux->getNext()==nullptr){
        //std::cout<<"Aqui4";
        Par* parNuevo = new Par(Coef,Grado);
        nodoAux->setNext(parNuevo);
    }
    return; 
}

void LinkedList::print(){
    Par* nodoAux=head;
//    std::cout<<"Aqui";
    while (nodoAux->getCoeficiente()>=0){
        nodoAux->print();
        if(nodoAux->getNext()==nullptr){
            return;
        }else{
            nodoAux = nodoAux->getNext();
        }
        
    }
    return;
}



#endif