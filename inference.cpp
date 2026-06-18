#include <iostream>
#include <vector>

using namespace std;

void main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int num : numbers) {
        sum += num;
    }
    //update output
    cout << "The sum of the numbers is: " << sum << endl;
}
