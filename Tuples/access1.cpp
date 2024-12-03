//Accès a un struct

#include <iostream>
using namespace std;

struct Persona {
        string nom;
        int dni;
    };

int main() {
    Persona p1; //Declarem una persona p1
    //Assignació
    p1.nom = "Toni";
    p1.dni = 11111111;

    //Ara p1 té com a nom "Toni" i dni 11111111
}
