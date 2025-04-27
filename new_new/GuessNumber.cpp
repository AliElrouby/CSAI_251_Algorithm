// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include <ctime>
// using namespace std;


// vector<int> numbers;
// void generator(){
//     srand(time(0));

//     int lower_bound = 10;
//     int upper_bound = 1000;

//     for (int i = 0; i < 3; i++) {
//         int random_number = lower_bound + rand() % (upper_bound - lower_bound + 1);
//         numbers.push_back(random_number);
//         cout <<i<< " --> "<<  random_number << endl;
//     }
//     cout<<endl;
//     for (int i = 0; i < 3; i++) {
//         cout<<numbers[i]<<" ";
//     }
// }

// void Guess(int X){
//     for (int i = 0; i < 3;i++) {
//         if (X <= numbers[i]) {
//             cout <<" < "<< endl;
//         } 
//         else{
//             cout <<" > "<< endl;
//         }

//     }
// }




// int main() {
//     // generator();
//     int num;
//     cin>>num;
//     Guess(num);

// }

#include <iostream>
using namespace std;

int main() {
    int low = 1;
    int high = 1e9;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        cout << mid << endl;
        cout.flush();
        string response;
        cin >> response;

        if (response == "=") {
            cout << "! " << mid << endl;
            break;
        } else if (response == "<") {
            high = mid - 1;
        } else if (response == ">") {
            low = mid + 1;
        }
    }

    return 0;
}
