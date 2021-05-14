#include"addressBook.hpp"

using namespace std;



int main(){
    // init an object of address book with one contact
    AddressBook a(Item{"Samer", "01545153458", "private"});
    // add a second contact to the address book
    a.addItem("Raya", "015754873198", "mobile");
    a.addItem("Suhail", "1321513456", "mobile");
    a.addItem("Salim", "15513546564", "work");
    a.addItem("Khalid", "798461561", "fax");
    // now the contact Raya has two numbers
    a.extendNum("Raya", "015754444558", "private mobile");
    // now the contact Raya has three numbers
    a.extendNum("Raya", "000000000000");

    // add an email address to the contact Raya
    a.extendNum("Raya", "raya.example@gmail.com", "Email");
    // change the number 015754873198 from "private" to "work"
    a.changeAttr("Raya", "015754873198", "work");
    // change the number 000000000000 from "private" to "work"
    a.changeAttr("Raya", "000000000000", "example number");

    // print the whole address book
    cout << "list of contacts:\n";
    cout << a;

    // remove the number "000000000000" from the contact Raya
    a.remNum("Raya", "000000000000");

    // remove the whole contact Samer from the address book
    a.remItem("Samer");

    // updated address book
    cout << "updated address book:\nremoving contact Samer and the number 000000000000 from the contact Raya\n";
    cout << "list of contacts:\n";
    cout << "**********************************************************************************\n";
    cout << a;

    // print data of contact with index 0 
    cout << "**********************************************************************************\n"
            "the first contact is:\n";
    cout << a[0];

    cout << "**********************************************************************************\n"
            "the second contact is:\n";
    cout << a[1];

    return 0;
}