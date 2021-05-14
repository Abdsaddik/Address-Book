# Address-Book
This library supports creating an address book which may be used for example in Phones.

The user APIs can be seen in AddressBook.hpp file. In main.cpp there are multiple exmples how to create 
an Address Book, create -, remove -, and search contacts. The user can add several numbers to a single 
contact.  
The current terminal output of this software is:
```
list of contacts:
1: Samer
01545153458 (private)
2: Raya
015754873198 (work)
015754444558 (private mobile)
000000000000 (example number)
raya.example@gmail.com (Email)
3: Suhail
1321513456 (mobile)
4: Salim
15513546564 (work)
5: Khalid
798461561 (fax)
updated address book:
removing contact Samer and the number 000000000000 from the contact Raya
list of contacts:
**********************************************************************************
1: Raya
015754873198 (work)
015754444558 (private mobile)
raya.example@gmail.com (Email)
2: Suhail
1321513456 (mobile)
3: Salim
15513546564 (work)
4: Khalid
798461561 (fax)
**********************************************************************************
the first contact is:
Raya
015754873198 (work)
015754444558 (private mobile)
raya.example@gmail.com (Email)
**********************************************************************************
the second contact is:
Suhail
1321513456 (mobile)
```

## Workflow
- Open the terminal and download the repogit 
```
git clone https://github.com/Abdsaddik/Address-Book.git
```  
- Compile the code and generate the binary file as follows:
```
g++ -std=c++11 -Wall *.cpp -o AddBook
```
- Run the code as follows:
```
./AddBook
```

