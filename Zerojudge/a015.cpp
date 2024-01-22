#include <iostream>
using namespace std;

int main()
{
    int r, c;
    int AT[100][100];
    while(cin >> r >> c){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin >> AT[j][i];
            }
        }
        for(int i=0; i<c; i++){
            for(int j=0; j<r; j++){
                cout << AT[i][j] << " ";
            }
            cout << endl;
        }
    }
}