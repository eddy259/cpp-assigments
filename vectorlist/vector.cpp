#include<iostream>
#include<vector>
#include<random>

#include<chrono>

using namespace std;
using namespace std::chrono;


int main() {

    int n = 3000;

    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,10);

    int dice_roll = distribution(generator);  // generates number in the range 1..6 

    auto t1 = high_resolution_clock::now();

    vector<int> num_vec;
    for (int i = 0; i < n; i++) {
        // add an element to vector
        int rand = distribution(generator);
        num_vec.push_back(rand);
        sort(begin(num_vec), end(num_vec));
        
        // print out vector contents at each step
        for (int j = 0; j < i + 1; j++) {
            cout << num_vec[j] << " ";
        }

        cout << endl;
        

    }

    auto t2 = high_resolution_clock::now();
    auto t_diff_add = duration_cast<milliseconds>(t2 - t1).count();

    auto t11 = high_resolution_clock::now();
    cout << "REMOVING ELEMENTS: \n";

    // remove elements
    for (int i = 0; i < n; i++) {
        int remaining_elems = n - i;
        uniform_int_distribution<int> index_dist(1, remaining_elems);
        int index_to_remove = index_dist(generator) - 1;
        cout << "index to remove: " << index_to_remove << endl;
        num_vec.erase(num_vec.begin() + index_to_remove);

        // print out vector contents at each step
        for (int j = 0; j < remaining_elems - 1; j++) {
            cout << num_vec[j] << " ";
        }

        cout << endl;
    }

    auto t22 = high_resolution_clock::now();
    auto t_diff_remove = duration_cast<milliseconds>(t2 - t1).count();

    cout << "milliseconds passed to add elements: " << t_diff_add << endl;
    cout << "milliseconds passed to remove elements: " << t_diff_remove << endl; 

    cout << "milliseconds passed to add and remove elements: " << t_diff_remove+t_diff_add << endl; 
    
    
    return 0;

}





