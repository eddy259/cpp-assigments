#include<iostream>
#include<vector>

using namespace std;

int my_sum(int a, int b);
int my_mult(int a, int b);  
bool bool_and(bool a, bool b);

//Accumulator sum(Container c, Operation op, Accumulator acc);

template<typename Container, typename Operation, typename Accumulator>

Accumulator sum(Container c, Operation op, Accumulator acc)

{

//              Compute the “sum” of all elements in c in acc and return it.

//              Adding is done by op(acc,element)

    for (auto x : c) {
        acc = op(acc, x);

    }

    return acc;


}



int main() {

    // integer addition
    int nums[] = {1, 2, 3, 4, 5}; 
    vector<int> num_vector;

    num_vector.push_back(1);
    num_vector.push_back(2);
    num_vector.push_back(3);
    num_vector.push_back(4);
    num_vector.push_back(5);

    int accumulated = sum(num_vector, my_sum, 0);
    cout << "my accumulated: " << accumulated << endl;

    // integer multiplication
    int mult_accumulated = sum(num_vector, my_mult, 1);
    cout << "my accumulated: " << mult_accumulated << endl;

    // bool and
    vector<bool> bool_vec;
    bool_vec.push_back(true);
    bool_vec.push_back(false);
    bool_vec.push_back(true);

    bool and_accumulated = sum(bool_vec, bool_and, true);
    cout << "and accumulated: " << and_accumulated << endl;

    return 0;
}



int my_mult(int a, int b) {
    return a * b;
}


int my_sum(int a, int b) {

    return a + b;
}

bool bool_and(bool a, bool b) {
    return a * b;
}
