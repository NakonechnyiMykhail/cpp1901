#include <iostream>
//#include <unistd.h>
using namespace std;
int main(){
    int x = 0;
    int y = 0;
    int answ2;

    int pixel[256];
    int answ = 0;
    cout << "1 - display data array, 2 - edit array," << endl;

    cin >> answ;
    if(answ==1){
        cout << "----------------------------------------------" << endl;
        for(int i = 1; i<257; i++){
            pixel[i] = 0;
        }
        for(int i = 1; i<257; i++){
            if(i % 16 == 0)
            {
            cout << pixel[i] << "  " << endl;
            }
        else
        {
            cout << pixel[i]<< "  ";
        }

    }
    cout << "----------------------------------------------" << endl;
    cout << "Do you want to change any elements of array? 1-yes 2-no,end" << endl;
    cin >> answ;
    if(answ==1){
      for(int i = 0; i<1;){

        cout << "enter the x and y of the elenent that you need to change from 0 to 16" << endl;
        cout << "x = ";
        cin >> x;
        cout << endl;
        cout << "y = ";
        cin >> y;
        for(;;){
             cout << "What value do you want to set for the selected cell?" << endl;
             cin >> answ2;
             if((answ2 > 16) or (answ2 < 0)){
                 cout << "Error, try again!" << endl;
             }else{
                 break;
             }
        }



        for(int i = 1; i<257; i++){
            int ycord = 0;
            if(i % 16 == 0)
            {
             ycord = ycord + 1;
            }
            if(i==x and ycord==y){
                pixel[i] = answ2;
            }
        }
        for(int i = 1; i<257; i++){
            if(i % 16 == 0)
            {
            cout << pixel[i] << "  " << endl;
            }
        else
        {
            cout << pixel[i]<< "  ";
        }

    }
    }
    }





    }else{
    //     for(int i = 0; i<1;){

    // cout << "enter the x and y of the elenent that you need to change from 0 to 16" << endl;
    // cout << "x = " << endl;
    // cin >> x;
    // cout << "y = " << endl;
    // cin >> y;

    // }
    }





}

