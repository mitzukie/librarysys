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

    cout<<"Enter Title: ";
    getline(cin, title);

    cout<<"Enter Author: ";
    getline(cin, author);

    cout<<"Enter Release Date: ";
    getline(cin, date);

    cout<<"Enter Genre: ";
    getline(cin, genre);

    books.push_back(Book(title, author, date, genre));

    books[0].display();

return 0;
}