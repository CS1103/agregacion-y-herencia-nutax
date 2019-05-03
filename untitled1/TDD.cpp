//
// Created by utec on 03/05/19.
//

#include <iostream>
#include <string>
#include "Biblioteca.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;

SCENARIO("Manipulación de la clase Biblioteca"){
    Biblioteca a;
    GIVEN("Objeto de clase Biblioteca llamado a"){
        WHEN("Se añade 3 libros y 2 revistas más"){
            a.Insertar('r', "Hola");
            a.Insertar('l', "Holasdads");
            a.Insertar('l', "Holasdads");
            a.Insertar('r', "Hola");
            a.Insertar('r', "Hola");
            THEN("La cantidad total de volúmenes es 5"){
                REQUIRE(a.Tamano()==5);
            }
        }
    }
}
