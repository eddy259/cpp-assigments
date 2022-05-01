#include<iostream>
#include<vector>

using namespace std;

int my_sum(int a, int b);

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

   int nums[] = {1, 2, 3, 4, 5}; 
   vector<int> num_vector;
   
   num_vector.push_back(1);
   num_vector.push_back(2);
   num_vector.push_back(3);

   int accumulated = sum(num_vector, my_sum, 0);
   cout << "my accumulated: " << accumulated << endl;


   return 0;
}





int my_sum(int a, int b) {

    return a + b;
}

