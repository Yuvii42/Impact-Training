// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double branding, travel, food, logistics;
    cin >> branding >> travel >> food >> logistics;
    double total_Expense = branding+travel+food+logistics;
    
    cout << "Total expenses :Rs." <<fixed << setprecision(2)<< total_Expense<<endl;
    cout << "Branding expenses percentage : "<<fixed << setprecision(2)<< (branding/total_Expense)*100<< "%" <<endl;
    cout << "Travel expenses percentage : " <<fixed<<setprecision(2)<< (travel/total_Expense)*100<< "%" <<endl;
    cout << "Food expenses percentage : "<< fixed<< setprecision(2)<< (food/total_Expense)*100<< "%" <<endl;
    cout << "Logistics expenses percentage : "<< fixed<<setprecision(2)<< (logistics/total_Expense)*100<< "%" <<endl;
    
    return 0;
    
}