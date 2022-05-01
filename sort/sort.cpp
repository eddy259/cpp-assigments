#include <iostream>
#include <random>


using namespace std;

int main() 
{


    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,6);
    int dice_roll = distribution(generator);  // generates number in the range 1..6 

    int dice_roll_2 = distribution(generator);  // generates number in the range 1..6 

    cout << "Hello, World! and a dice roll: " << dice_roll << " " << dice_roll_2 << endl;
    return 0;
}
