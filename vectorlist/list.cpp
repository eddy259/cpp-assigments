#include<iostream>
#include<list>
#include<random>


using namespace std;

int main() {

    int n = 20;

    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,10);

    int dice_roll = distribution(generator);  // generates number in the range 1..6 

    list<int> num_vec;
    for (int i = 0; i < n; i++) {
        // add an element to vector
        int rand = distribution(generator);
        num_vec.push_back(rand);
        sort(begin(num_vec), end(num_vec));
        
        // print out vector contents at each step
        for (int j = 0; j < i + 1; j++) {
            auto it = next(num_vec.begin(), j);
            cout << *it << " ";
        }

        cout << endl;
        

    }

    cout << "REMOVING ELEMENTS: \n";

    // remove elements
    for (int i = 0; i < n; i++) {
        int remaining_elems = n - i;
        uniform_int_distribution<int> index_dist(1, remaining_elems);
        int index_to_remove = index_dist(generator) - 1;
        cout << "index to remove: " << index_to_remove << endl;
        num_vec.erase(next(num_vec.begin(), index_to_remove));

        // print out vector contents at each step
        for (int j = 0; j < remaining_elems - 1; j++) {
            auto it = next(num_vec.begin(), j);
            cout << *it << " ";
        }

        cout << endl;
    }


    return 0;

}





