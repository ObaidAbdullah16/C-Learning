#include <iostream>

using namespace std;

int main(){
    
    cout << "Hello and welcome to Frank's carpet cleaning service!\n";
    
    int small_rooms {0};
    int large_rooms {0};
    
    cout << "\nNumber of small rooms to be cleaned : ";
    cin >> small_rooms;
    cout << "Number of large rooms to be cleaned : ";
    cin >> large_rooms;
    
    cout << "\nEstimate for carpet cleaning service : \n" << "Number of small rooms : " << small_rooms << "\nNumber of large rooms : " << large_rooms;
    
    const int price_small_room{25};
    const int price_large_room{35};
    const double tax_rate{0.06};
    const int valid_days{30};
    
    cout << "\n\nPrice per small room : $" << price_small_room << "\nPrice per large room : $" << price_large_room;
    cout << "\n\nCost : $" << (price_small_room*small_rooms)+(price_large_room*large_rooms) << endl;
    cout << "Tax : $" << ((price_small_room*small_rooms)+(price_large_room*large_rooms))*tax_rate << endl;
    cout << "==============================================================\n";
    cout << "Total Estimate : $" << (price_small_room*small_rooms)+(price_large_room*large_rooms)+((price_small_room*small_rooms)+(price_large_room*large_rooms))*tax_rate << endl;
    cout << "The estimate is valid for : " << valid_days << endl << endl;
    
    
}