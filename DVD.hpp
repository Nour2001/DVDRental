#ifndef DVD_hpp
#define DVD_hpp

#include <stdio.h>
using namespace std;


class DVD{

public:
  
  
   
    DVD();
   
    DVD(string Title, string Author, string Length, string rating, string genre, string content);
    
    ~DVD();    //destructor
   
    // geters functions to access the private data memberes
    
    string getTitle()const;
    string getAuthor()const;
    string getLength()const;
    string getcontent()const;
    string getrating() const;
    string getgenre()const;
    void print();

  
private:
    string Author;
    string Length;
    string Title;
    string content;
    string rating;
    string genre;
   
};

#endif

