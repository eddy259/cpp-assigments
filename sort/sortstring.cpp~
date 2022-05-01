#include <iostream>
#include <random>


using namespace std;

int main() 
{

    // random
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,36);
    uniform_int_distribution<int> str_len_distribution(4,32);

    int dice_roll = distribution(generator);  // generates number in the range 1..6 

    int dice_roll_2 = distribution(generator);  // generates number in the range 1..6 

    char alphanumeric[] = "qwertyuiopasdfghjklzxcvbnm1234567890";

    // get index of a char, we do -1 because indices will be from 0 to 35
    int char_index = distribution(generator) - 1; 

    
    cout << "ten strings: " << endl;
    string str_arr[10];

    // loop ten times
    for (int j = 0; j < 10; j++) {

//        cout << "in loop" << endl;
//        cout << "loop: " << j << endl;
   
        // generate a random string
        string rand_str;
        int str_len = str_len_distribution(generator);
        for (int i = 0; i < str_len; i++) {

//            cout << i << endl;

            int char_index = distribution(generator) - 1; 
 //           rand_str.push_back(alphanumeric[char_index]);
            rand_str += alphanumeric[char_index];
        }
        cout << rand_str << endl;

        str_arr[j] = rand_str;
    }


    // sort string array
    sort(begin(str_arr), end(str_arr));

    cout << "sorted ascending: \n";
    for(auto str: str_arr){
         cout << str << endl;
    }

    sort(begin(str_arr), end(str_arr), greater<string>());
    cout << "sorted descending: \n";
    for(auto str: str_arr) {
        cout << str << endl;
    }



// C STYLE STRINGS ------------------------------------------


    cout << "C STYLE STRINGS: \n";
    char *c_str_arr[10];

    // loop ten times
    for (int j = 0; j < 10; j++) {

        // generate a random string
        int str_len = str_len_distribution(generator);
        char rand_str[str_len + 1];
        for (int i = 0; i < str_len; i++) {

            int char_index = distribution(generator) - 1; 
            rand_str[i] = alphanumeric[char_index];
        }
        
        rand_str[str_len] = '\0';

        cout << rand_str << endl;

        c_str_arr[j] = rand_str;
    }


    // sort string array
    sort(begin(c_str_arr), end(c_str_arr));

    cout << "sorted ascending: \n";
    for(auto str: c_str_arr){
         cout << str << endl;
    }

    sort(begin(c_str_arr), end(c_str_arr), greater<string>());
    cout << "sorted descending: \n";
    for(auto str: c_str_arr) {
        cout << str << endl;
    }




    cout << "Hello, World! and a dice roll: " << char_index  << " " << dice_roll_2 << " " << alphanumeric[char_index] << endl;
    // cout << "rand string: " << &rand_str << endl;

    return 0;
}
