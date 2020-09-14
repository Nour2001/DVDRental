#include <iostream>
#include <cstdio>
#include "DVD.hpp"
#include <fstream>
using namespace std;

  int main() {
      
      string name;
      string date;
    
      cout<< "Hello and welcome to Nour's DVD Rental Store!\n"<<"Here are the available DVDs"<<endl;
      cout<<'\n';
      string DVDrent[6];
      
      string line;
      
      ifstream rental_dvd; // using the fstream library to access the text file
       rental_dvd.open("rental_dvd.txt");
    
      DVD available[10];
     
      for(int i=0; i<10; i++ ){
         
          for( int j=0; j<6; j++){
             
              getline(rental_dvd, line);

              DVDrent[j]=line;
          }
          
          cout<<endl;
          getline(rental_dvd, line);
 
          available[i] =  DVD(DVDrent[0], DVDrent[1], DVDrent[2], DVDrent[3], DVDrent[4], DVDrent[5]);
        
          available[i].print();
          
      }
     
      cout<<endl;
      cout<< "Please pick your favourite DVD and rent it today!"<<endl;
      cout<<endl;
      cout<<"Please type the title of your favourit DVD and the date of your checkout"<<endl;
      cout<< "Title: ";
      cin>> name;
      cout<<"Date: ";
      cin>> date;
      cout<<endl;
      cout<<"You have rented the DVD: "<< name << ". Thank you for renting at Nour's DVD Rental Store!"<<endl;

      
     
      rental_dvd.close();
      
    return 0;
}
