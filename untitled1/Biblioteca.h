//
// Created by utec on 03/05/19.
//

#ifndef UNTITLED1_BIBLIOTECA_H
#define UNTITLED1_BIBLIOTECA_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Volumen{
protected:
    string Nombre;
    int n_volumen;
public:
    Volumen(int n_v, string nom):n_volumen{n_v}, Nombre{nom}{}
    virtual void Imprimir() = 0;
};

class Revista:public Volumen{
    int n_revista;
public:
    Revista(int n_v, string nom, int n_r ): Volumen{n_v,nom}, n_revista(n_r){}
    void Imprimir()override{cout<<"Volumen #"<<this->n_volumen<<": "<<"Revista #"<<n_revista<<" Título: "<<this->Nombre<<endl;}
};

class Libro:public Volumen{
    int n_libro;
public:
    Libro(int n_v, string nom, int n_l ): Volumen{n_v,nom}, n_libro(n_l){}
    void Imprimir()override{cout<<"Volumen #"<<this->n_volumen<<": "<<"Libro #"<<n_libro<<" Título: "<<this->Nombre<<endl;}
};

class Biblioteca {
int nLibros = 0;
int nRevistas = 0;
vector<Volumen*> lista;
public:
    void Insertar(char tipo, string nombre){
        if (tipo == 'l'){
            nLibros++;
            lista.push_back(new Libro(nLibros+nRevistas, nombre, nLibros ));
        }else{
            if(tipo == 'r'){
                nRevistas++;
                lista.push_back(new Revista(nLibros+nRevistas, nombre, nRevistas ));
            }
        }
    }

void ImprimirB(){
    for (int i = 0; i<nLibros+nRevistas; i++){
        lista[i]->Imprimir();
    }
}

int Tamano(){return lista.size();}
};



#endif //UNTITLED1_BIBLIOTECA_H
