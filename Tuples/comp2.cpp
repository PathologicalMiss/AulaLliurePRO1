//Comparació 2

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Dni {
    int num;
    char lletra;
};

struct Persona {
        string nom;
        Dni dni;
    };

bool comp(Persona p1, Persona p2) {
    if (p1.dni.num == p2.dni.num) return p1.dni.lletra < p2.dni.lletra;
    return p1.dni.num < p2.dni.num;
}

int main() {
    Persona p1;
    p1.nom = "Toni";
    p1.dni.num = 1;
    p1.dni.lletra = 'K';
    Persona p2;
    p2.nom = "Roger";
    p2.dni.num = 2;
    p2.dni.lletra = 'R';
    Persona p3;
    p3.nom = "Elphaba";
    p3.dni.num = 2;
    p3.dni.lletra = 'L';
    Persona p4;
    p4.nom = "Glinda";
    p4.dni.num = 4;
    p4.dni.lletra = 'A';

    vector<Persona> p;
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);

    //Volem ordenar el vector p de Persones per dni (si num igual, per lletra)
    sort(p.begin(), p.end(), comp);

    for (int i = 0; i < p.size(); ++i) cout << p[i].nom << endl;
}
