#include <iostream>
#include <vector>
#include <algorithm>
class Book {
    public:
        Book(std::string t, std::string a, int y): title{t}, author{a},year{y}{}
        std::string GetTitle(){return title;}
        std::string GetAuthor(){return author;}
        int GetYear(){return year;}
        void displayInfo(){
            std::cout<<"Title: ["<<title<<"], "<<"Author: ["<<author<<"], "<<"Year: ["<<year<<"]"<<std::endl;
        }
    private:
        std::string title;
        std::string author;
        int year;
};

class LibraryCatalog{
    public:
        // LibraryCatalog(std::vector<Book> bs) : books{bs} {}
        void addBook(std::string t, std::string a, int y)
        {   
            Book b1{t,a,y};
            books.push_back(b1);
        }
        void SearchByAuthor (std::string name)
        {
            auto it = std::find_if( books.begin(), books.end(),
                        [&]( Book &c ) { return ( c.GetAuthor() == name ); } );
            if(it != books.end())
            {
                std::cout<<"Book is found"<<std::endl;
            }
            else
            {
                std::cout<<"Book is not found"<<std::endl;
            }

        }
        
        void Display()
        {
            for(auto book : books)
            {   
                std::cout<<"Title: ["<<book.GetTitle()<<"], "<<"Author: ["<<book.GetAuthor()<<"], "<<"Year: ["<<book.GetYear()<<"]"<<std::endl;
            }
        }
    private:
        std::vector<Book> books;
};

int main()
{
    Book b1{"meoh","nen",10};
    Book b2{"no","foo",29};

    LibraryCatalog lib;
    lib.addBook("mohsen","nen",29);

    lib.SearchByAuthor("nen");

    lib.Display();
}