//---------------------------------------------------------------------------
// File name:   Shopping Cart.cpp
// Assign ID:   xxxxxxx 
// Due Date:    02/27/2022
//
// Purpose:     Create a C++ program to allow the user to purchase an item by entering the desired SKU and quantity
//
// Author:      Nick St Fleurant
//---------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //------------------------------------------------------------------------
    //  Declare variables, ONE PER LINE, format:
    //
    //       data_type variable_name;  // intended use of variable.
    //------------------------------------------------------------------------
    string customerName, userName, psswrd, Address, itemName, memberLev, SKU;
    float itemPrice, updatedBalance, finalPrice, priceTax;
    int accountNum, itemQuan, itemUnit, itemBought;
    const float salesTax = 0.06;
    const float storeCredit = 3000;
    

    //-|----------------------------------------------------------------------
    //-| Display the copyright notice declaring authorship.
    //-|----------------------------------------------------------------------
    cout << endl << "(c) 2022, Nick st Fleurant" << endl << endl; 


    //-|----------------------------------------------------------------------
    //-| 1. FirstName algorithm step ... 
    //-|    1.1 [optional] sub-step, as needed.
    //-|    1.2 [optional] sub-step, as needed.
    //-|----------------------------------------------------------------------
    cout << fixed << setprecision(2) << showpoint;
    memberLev = "Gold";
    Address = "100 W New Haven Ave, Melbourne, FL 32901";
    accountNum = 123456789;
    customerName = "Jane Smith";
    
    cout << "Welcome to the hardware store" << endl;
    cout << "Enter in your username: " << endl;
    cin >> userName;
    if (userName != "jsmith" || userName != "Jsmith"){
        cout << "Invalid Username" << endl;
    }
    
    cout << "Enter in your password: " << endl;
    cin >> psswrd;
    if (psswrd != "blue123" || psswrd != "blue123"){
        cout << "Invalid Password" << endl;
    }
    
    cout << "Welcome back " << customerName << endl;
    cout << "Please enter in the Item SKU: ";
    cin >> SKU;
    
    cout << endl;
    
    if(SKU == "HF-342" || SKU == "hf-342"){
        itemName = "Bolts";
        itemUnit = 50;
        itemPrice = 20;
        itemQuan = 200; 
        
        cout << "1/2 in Bolts" << endl;
        cout << "Please Enter in quanity to buy: ";
        cin >> itemBought;
            if(itemBought <= itemQuan && updatedBalance <= storeCredit){
                priceTax = itemPrice * (salesTax / 100);
                finalPrice = itemBought * (itemPrice + priceTax);
                updatedBalance = storeCredit - finalPrice;
                cout << "________________________________________" << endl;
                cout << "Customer Name: " << customerName << endl;
                cout << "Account Number: " << accountNum << endl;
                cout << "Billing Address: " << Address << endl;
                cout << "Member Level: " << memberLev << endl;
                cout << "SKU: " << SKU << endl;
                cout << "Item Name: " << itemName << endl;
                cout << "Item quanity bought: " << itemBought << endl;
                cout << "Final Price: $" << finalPrice << endl;
                cout << "Updated Balance: $" << updatedBalance << endl;
                cout << "________________________________________" << endl;
            }
            else {
                cout << "Invaid Amount to buy." << endl;
            }
    }
    else if(SKU == "LK-322" || SKU == "lk-322"){
        itemName = "1/4 in Nails";
        itemUnit = 25;
        itemPrice = 5.75;
        itemQuan = 76; 
        
        cout << "1/4 in Nails" << endl;
        cout << "Please Enter in quanity to buy: ";
        cin >> itemBought;
        cout << endl;
             if(itemBought <= itemQuan && updatedBalance <= storeCredit){
                priceTax = itemPrice * (salesTax / 100);
                finalPrice = itemBought * (itemPrice + priceTax);
                updatedBalance = storeCredit - finalPrice;
                cout << "________________________________________" << endl;
                cout << "Customer Name: " << customerName << endl;
                cout << "Account Number: " << accountNum << endl;
                cout << "Billing Address: " << Address << endl;
                cout << "Member Level: " << memberLev << endl;
                cout << "SKU: " << SKU << endl;
                cout << "Item Name: " << itemName << endl;
                cout << "Item quanity bought: " << itemBought << endl;
                cout << "Final Price: $" << finalPrice << endl;
                cout << "Updated Balance: $" << updatedBalance << endl;
                cout << "________________________________________" << endl;
            }
            else {
                cout << "Invaid Amount to buy." << endl;
            }
    }
    else if(SKU == "KF-231" || SKU == "kf-231"){
        itemName = "Hammer";
        itemUnit = 1;
        itemPrice = 15.23;
        itemQuan = 100; 
        
        cout << "Hammer" << endl;
        cout << "Please Enter in quanity to buy: ";
        cin >> itemBought;
        cout << endl;
             if(itemBought <= itemQuan && updatedBalance <= storeCredit){
                priceTax = itemPrice * (salesTax / 100);
                finalPrice = itemBought * (itemPrice + priceTax);
                updatedBalance = storeCredit - finalPrice;
                cout << "________________________________________" << endl;
                cout << "Customer Name: " << customerName << endl;
                cout << "Account Number: " << accountNum << endl;
                cout << "Billing Address: " << Address << endl;
                cout << "Member Level: " << memberLev << endl;
                cout << "SKU: " << SKU << endl;
                cout << "Item Name: " << itemName << endl;
                cout << "Item quanity bought: " << itemBought << endl;
                cout << "Final Price: $" << finalPrice << endl;
                cout << "Updated Balance: $" << updatedBalance << endl;
                cout << "________________________________________" << endl;
            }
            else {
                cout << "Invaid Amount to buy." << endl;
            }
    }
    else {
        cout << "Invalid Item." << endl;
    }





    //-|----------------------------------------------------------------------
    //-| 2. Second algorithm step.
    //-|    2.1 [optional] sub-step, as needed.
    //-|----------------------------------------------------------------------
  


 
    //-|----------------------------------------------------------------------
    //-| #. LastName algorithm step.
    //-|    ##.1 [optional] sub-step, as needed.
    //-|----------------------------------------------------------------------




    //-|----------------------------------------------------------------------
    //-| Display the copyright notice declaring authorship again.
    //-|----------------------------------------------------------------------
    cout << endl << endl << "(c) 2018, cislogin FirstName LastName" << endl; 


    return 0;

}//main
