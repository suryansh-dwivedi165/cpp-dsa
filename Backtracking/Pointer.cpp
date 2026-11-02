#include <iostream>
using namespace std;
int main()
{
    int *ptr[2][2] = {{0, 0}, {0, 0}};


    // for (int i = 0; i < 2; i++){
    //     for (int j = 0; j < 2; j++){
    //         cin >> *(ptr[i][j]);
    //     }
    // }

cout << (*(ptr + 1) + 1);
    // for (int i = 0; i < 2; i++){
    //     for (int j = 0; j < 2; j++){
    //         cout << ptr[i][j] << " ";
    //     }
    // }
    return 0;
}
