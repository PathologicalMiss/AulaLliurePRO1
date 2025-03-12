#include <iostream>
using namespace std;

// Pre:  a i b són nombres enters
// Post: retorna la suma de a i b
int suma(int a, int b) {
    return a + b;
}

// Pre:  a i b són nombres enters
// Post: intercanvia els valors de a i b
void intercanvi(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Pre:  n és un nombre natural (n >= 0)
// Post: retorna el factorial de n
int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; ++i) {
        f *= i;
    }
    return f;
}

// Pre: missatge és un missatge NO buit
// Post: el missatge està invertit i es retorna en número de caràcters sense comptabilitzar els espais
int invertirMissatge(string& missatge) {
    int n = missatge.size();
    int comptador = 0;
    for (int i = 0; i < n / 2; ++i) {
        swap(missatge[i], missatge[n - 1 - i]);
    }
    for (char c : missatge) {
        if (c != ' ') ++comptador;
    }
    return comptador;
}

int main() {
    int x = 5, y = 10;
    
    cout << "Suma de " << x << " i " << y << " = " << suma(x, y) << endl;
    
    cout << "Abans d'intercanviar: x = " << x << ", y = " << y << endl;
    intercanvi(x, y);
    cout << "Després d'intercanviar: x = " << x << ", y = " << y << endl;
    
    int n = 4;
    cout << "Factorial de " << n << " = " << factorial(n) << endl;
    
    string missatge = "Hola món";
    int num_caracters = invertirMissatge(missatge);
    cout << "Missatge invertit: " << missatge << endl;
    cout << "Nombre de caràcters sense espais: " << num_caracters << endl;
    
    return 0;
}
