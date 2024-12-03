//Accès a un struct 

#include <iostream>
using namespace std;

struct Persona {
        string nom;
        int dni;
    };

int main() {
    Persona p1;
    p1.nom = "Toni";
    p1.dni = 11111111;
    //Modificació d'un atribut del struct
    p1.dni += 1;

    //Impressió del struct
    cout << p1.nom << ' ' << p1.dni << endl;
}
