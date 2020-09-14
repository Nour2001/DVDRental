#include <iostream>
#include <string>
#include "DVD.hpp"

using namespace std;

DVD::DVD(){};

DVD::DVD(string Title, string Author, string Length, string rating, string genre, string content){
    
    this  ->  Title    = Title;
    this  ->  Author   = Author;
    this  ->  Length   = Length;
    this  ->  content  = content;
    this  ->  rating   = rating;
    this  ->  genre    = genre;
     

}

DVD::~DVD(){}

    
string DVD::getTitle() const {
    return Title;
    
}
  
string DVD::getAuthor() const {
    return Author;
    
}
 
string DVD::getLength() const {
       return Length;
    
}

string DVD::getcontent() const {
       return content;
    
}

string DVD::getrating() const {
       return rating;
    
}


string DVD::getgenre() const {
       return genre;
    
}

void DVD::print() {
   
    cout<< "Title: "            <<getTitle()      <<endl;
    cout<< "Author: "           <<getAuthor()     <<endl;
    cout<< "Length: "           <<getLength()     <<endl;
    cout<< "Content included: " <<getcontent()    <<endl;
    cout<< "Rating: "           <<getrating()     <<endl;
    cout<< "Genre: "            <<getgenre()      <<endl;
  
}
