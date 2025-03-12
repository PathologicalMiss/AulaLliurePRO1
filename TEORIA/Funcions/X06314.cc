//X06314 Similar sequences(2)
#include <iostream>
using namespace std;

// Pre: Reads a sequence of strictly positive natural numbers terminated by 0.
// Post: Computes the sum of the elements and the last element before 0.
void info_sequence(int& sum, int& last) {
    sum = 0;
    last = 0;
    int n;
    while (cin >> n and n != 0) {
        sum += n;
        last = n;
    }
}

int main() {
    int first_sum, first_last;
    if (!(cin >> first_sum) || first_sum == 0) return 0;
    int temp = first_sum;
    first_last = first_sum;
    while (cin >> temp && temp != 0) {
        first_sum += temp;
        first_last = temp;
    }
    
    int count = 1;
    int sum, last;
    while (cin >> sum && sum != 0) {
        int temp_sum = sum, temp_last = sum;
        while (cin >> temp && temp != 0) {
            temp_sum += temp;
            temp_last = temp;
        }
        if (temp_sum == first_sum && temp_last == first_last) ++count;
    }
    
    cout << count << endl;
    return 0;
}
