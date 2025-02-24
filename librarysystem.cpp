#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book{
    private:
        string title;
        string author;
        string date;
        string genre;
    
    public:
    
    //Constructor
        Book(string title, string author, string date, string genre){
            this->title = title;
            this->author = author;
            this->date = date;
            this->genre = genre;
    }

    //Destructor
        ~Book(){}

    void display(){
        cout<<"Book Details:"<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Release Date: "<<date<<endl;
        cout<<"Genre: "<<genre<<endl;
    }

    
    

};

   
int main(){

vector<Book> books;
string title, author, date, genre;

int menuchoice;
int condition = 0;
int condition2 = 0;

while(condition = 0){
    cout<<"Menu"<<endl;
    cout<<"1 - Add Book"<<endl;
    cout<<"2 - Display Books"<<endl;
    cout<<"3 - Exit"<<endl;
    cin>>menuchoice;

switch(menuchoice){
    case 1:
        while(condition2 = 0){
            char addanother = 'y';
            cout<<"Enter Title: ";
            getline(cin, title);

            cout<<"Enter Author: ";
            getline(cin, author);

            cout<<"Enter Release Date: ";
            getline(cin, date);

            cout<<"Enter Genre: ";
            getline(cin, genre);

            books.push_back(Book(title, author, date, genre));

            cout<<"Would you like to add another book? (y/n)";
            cin>>addanother;

            if(addanother == 'n' || 'N'){
                condition2 = 1;
            }
        }
        break;

    case 2:
        for(int i = 0; i < books.size(); i++){
            books[i].display();
        }
        break;

    case 3:
        condition = 1;
        break;
}   

    


   
}
return 0;
}