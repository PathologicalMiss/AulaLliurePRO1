//Accès a un struct 

#include <iostream>
#include <vector>
using namespace std;

struct Dni {
    int num;
    char lletra;
};

struct Persona {
        string nom;
        Dni dni;
        //notes del alumne
        vector<int> notes;
    };

//Pas per paràmetre MOOOLT costós...
void print_persona(Persona &p) {
    //Impressió del struct
    cout << p.nom << ' ' << p.dni.num << p.dni.lletra << endl;
    for (int i = 0; i < 100; ++i) cout << p.notes[i] << endl;
}

int main() {
    Persona p1; //Declarem una persona p1
    cin >> p1.nom;
    cin >> p1.dni.num;
    cin >> p1.dni.lletra;

    for (int i = 0; i < 100; ++i) {
        p1.notes.push_back(i);
    }
    //Ara p1 té com a nom "Toni" i dni 1111111K (lectura de la terminal)
    print_persona(p1);
}
