
 // @file: invoice.cc
 //* @author: Mason Gill
 //*   @date: 02/02/2023
 //*  @brief: Generates an invoice depending on user inputs.
 

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    string tvType;
    int chosenTVprice;
    int tvCount;
    string ohio;
    string ohioAnswer;
    string tvName;
    int subTotal;
    double total;
    double discount = 0;
    double tax;
    const double discountRate = .05;
    const double taxRate = .07;
    const int sPrice = 190;
    const int vprice = 170;

    cout << "Enter <s> for Samsung or <v> for ViewSonic"<< endl;
    cin >> tvType;
    cout << "Enter number of monitors"<< endl;
    cin >> tvCount;
    cout << "Are you from Ohio <y/n>"<< endl;
    cin >> ohio;

    if (tvType == "s")
    {
        subTotal = sPrice * tvCount;
        tvName = "Samsung";
        chosenTVprice = sPrice;
    }
    else
    {
        subTotal = vprice * tvCount;
        tvName = "Viewsonic";
        chosenTVprice = vprice;
    }
    
    if (tvCount >= 3)
    {
        discount = subTotal * discountRate;
    }

    if (ohio == "y")
    {
        tax = (subTotal - discount) * taxRate;
        ohioAnswer = "Yes";
    }
    else
    {
        ohioAnswer = "No";
        tax = 0;
    }
    
    total = subTotal - discount + tax;

    
   cout << fixed << setprecision(2) << "------------------------------ "<< endl;
   cout <<"    Monitor brand: " << tvName << endl;
    cout << "      Quantity:" << tvCount << endl;
    cout << "         Price: $" << chosenTVprice << endl;
    cout << " Ohio Resident: " << ohioAnswer << endl;
    cout << "   Total price: $" << subTotal << endl;
    cout << "------------------------------ "<< endl;
    cout << "      Discount: $" << discount << endl;
    cout << "      Subtotal: $" << subTotal - discount << endl;
    cout << "         Taxes: $" << tax << endl;
    cout << "============================== "<< endl;
    cout << "         Total: $" << total << endl;
    cout << "============================== "<< endl;

    
    
   return 0;
} /// main
