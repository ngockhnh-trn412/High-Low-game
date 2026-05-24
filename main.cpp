#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
signed main(){
    srand(static_cast<unsigned int>(time(0)));
    int secret=rand()%100+1;
    int usernum=0;
    int cnt=1;
    cout<<"Welcome to the game!!!"<<endl;
    cout<<"I have chosen a number from 1 to 100, can you guess the chosen number?"<<endl;
    while(usernum!=secret){
        cout<<"Guess a number:"<<' ';
        cin>>usernum;
        if(usernum<secret){
            cout<<"Bigger! Please try again"<<' ';
            cnt++;
        }
        else if(usernum>secret){
            cout<<"Smaller! Please try again"<<' ';
            cnt++;
        }
        else{
            cout<<"Hooray! You got it in "<<cnt<<" tries!";
        }
    }
 return 0;
}
