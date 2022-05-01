#include <iostream>
#include <random>


using namespace std;

bool cstr_cmp(const char* &a, const char* &b);

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
//    sort(begin(str_arr), end(str_arr));

    cout << "sorted ascending: \n";
    for(auto str: str_arr){
        sort(begin(str), end(str));

        cout << str << endl;
    }

//    sort(begin(str_arr), end(str_arr), greater<string>());
    cout << "sorted descending: \n";
    for(auto str: str_arr) {
        sort(begin(str), end(str), greater<char>());
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
        
        rand_str[str_len] = 0;

        cout << rand_str << endl;

        c_str_arr[j] = rand_str;

        // test sorting here
//        sort(rand_str[0], rand_str[strlen(rand_str) - 1], cstr_cmp);
        int size = sizeof(rand_str) / sizeof(rand_str[0]);
        sort(rand_str, rand_str + size, cstr_cmp);
        cout << rand_str << endl;

        
//        cout << c_str_arr[j] << endl;
    }


    // sort string array
//    sort(begin(c_str_arr), end(c_str_arr));

    cout << "sorted ascending: \n";
    for(int i = 0; i < 10; i++){

        char *str = c_str_arr[i];
//        int size = sizeof(str) / sizeof(str[0]);
        int size = strlen(str);
        cout << "size of str: " << size << endl;
//        sort(str, str + size, cstr_cmp);
//        cout << str << endl;
        printf("%s\n", str);
        cout << c_str_arr[0] << endl;
    }

//    sort(begin(c_str_arr), end(c_str_arr), greater<string>());
    cout << "sorted descending: \n";
    for(auto str: c_str_arr) {
//        sort(str[0], str[3]);
//        sort(begin(str), end(str), greater<char>());
        cout << str << endl;
    }




    cout << "Hello, World! and a dice roll: " << char_index  << " " << dice_roll_2 << " " << alphanumeric[char_index] << endl;
    // cout << "rand string: " << &rand_str << endl;

    return 0;
}


// comparator function for c-style strings
bool cstr_cmp(const char* &a, const char* &b) {
    return strcmp(a, b) < 0;

}









