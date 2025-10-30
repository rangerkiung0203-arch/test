//2. pre-loop
// #include <iostream>
// using namespace std;

// int main() {
//     double total_weight=0;
//     double weight;
//     int num=0;
//     int counter=0;
//     cout<<"Enter weights counter:";
//     cin>>counter;
//     while(counter>num){
//         cout<<"Enter weight "<<num+1<<": ";
//         cin>>weight;
//         total_weight+=weight;
//         num++;
//     }
//     double average_weight=total_weight/counter;
//     cout<<"Average weight: "<<average_weight<<endl;
//     cout<<"Total weight: "<<total_weight<<endl;
//     return 0;
// }


//for loop
#include <iostream>
using namespace std;

int main() {
    double total_weight=0;
    double weight;
    int counter;
    cout<<"Enter weights counter:";
    cin>>counter;
    for(int num=0; num<counter; num++){
        cout<<"Enter weight "<<num+1<<": ";
        cin>>weight;
        total_weight+=weight;
    }
    double average_weight=total_weight/counter;
    cout<<"Average weight: "<<average_weight<<endl;
    cout<<"Total weight: "<<total_weight<<endl;
    return 0;
}