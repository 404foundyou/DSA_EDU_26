#include <iostream>
using namespace std;

// void square_pattern(int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// void number_pattern_1(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = 0; j < n; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// void number_pattern_2(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// void number_pattern_3(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = n; j >= 1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// void number_pattern_4(int n){
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             cout<<j*j<<" ";
//         }
//         cout<<endl;
//     }
// }

// void alphabet_1(int n){
//     for(int i = 1; i <= n; i++){
//         int x = 96+i;
//         for(int j = 1; j <= n; j++){
//             cout<<(char)x<<" ";
//         }
//         cout<<endl;
//     }
// }

// void abcde(){
//     for(char i = 'a' ; i <= 'e' ; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// void alphabet_2(int n){

//     for(int i = 1; i <= n; i++){   
//         abcde();
//     }
// }

// void number_pattern_5(int n){
//     int sum = 0;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             sum += 1;
//             cout<<sum<<"  ";
//         }
//         cout<<endl;
//     }
// }


void pattern_1(int n){
    for(int i = 1;i <= n; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern_2(int n){
    for(int i = 1;i <= n; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern_3(int n){
    for(int i = 1;i <= n; i++){
        for(int j = i ; j >= 1 ; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern_4(int n){
    for(char i = 'a';i <= 'e'; i++){
        for(char j = 'a' ; j <= i ; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern_5(int n){
    for(int i = 1;i <= n; i++){
        for(int j = i ; j <= 5 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern_6(int n){
    for(int i = 1;i <= n; i++){
        for(int j = i ; j < 5 ; j++){
            cout<<" ";
        }
        for(int j = 1 ; j <=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}







int main(){
    // square_pattern(5);
    // cout<<endl;
    // number_pattern_1(5);
    // cout<<endl;
    // number_pattern_2(5);
    // cout<<endl;
    // number_pattern_3(5);
    // cout<<endl;
    // number_pattern_4(5);
    // cout<<endl;
    // alphabet_1(5);
    // cout<<endl;
    // alphabet_2(5);
    // cout<<endl;
    // number_pattern_5(5);



    // pattern_1(5);
    // pattern_2(5);
    // pattern_3(5);
    // pattern_4(5);
    // pattern_5(5);
    pattern_6(5);


}