//Comparació 1

#include <iostream>
using namespace std;

struct Dni {
    int num;
    char lletra;
};

struct Persona {
        string nom;
        Dni dni;
    };

int main() {
    Persona p1;
    p1.nom = "Toni";
    p1.dni.num = 42698723;
    p1.dni.lletra = 'K';
    Persona p2;
    p2.nom = "Roger";
    p2.dni.num = 69696969;
    p2.dni.lletra = 'R';

    //Volem el nom de la persona amb el dni més gran
    if (p1.dni.num > p2.dni.num) cout << p1.nom << endl;
    else cout << p2.nom << endl;
}
