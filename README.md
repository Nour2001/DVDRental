# DVDRental
A program that allows you to Rent DVDs from the Nour's Rental Store!!
/*
 Title:DVDRental
 Description: manages a rental store DVD
 Date: July 8, 2020
 Author: Nour Elgawish
 Copyright: 2020 Nour Elgawish
*/

/*
 DOCUMENTATION
 
 Program Purpose:
     This program uses the fstream library to open a text file and read it. While reading the text file, the program utilizes the DVD class to rent and manage a rental store named Nour's DVD Rental Store. Thus users can view avalible DVDs and rent them

 Classes: DVD calss
 Variables declared in the DVD class under private:
 
 Author - string - holds the name of the DVD's author
 Length - string - holds the length of the DVD
 Title - string - holds the title of the DVD
 content - string - holds the content of the DVD
 rating - string - holds the rating of the DVD
 genre - string - holds the genre of the DVD
 
 Variables declared in main:
     name - string - used to allow the user to enter the name of the DVD
     date - string - used to allow the user to enter the date of the renting the DVD
     line - string- used to read the lines presented in the text file
    avalible - DVD - to run through all the 10 DVDs
    DVDrent - string - to run through all the 6 characteristics for each DVD
  
*/

/*
 TEST PLAN
 
 The following cases are utilizing the TMA2Question1DVD.cpp, TMA2Question1DVD.hpp  and rental_DVD.txt. If the Text file is not found or cannot be acessed the program will not output desireble data.

 Normal case:
     > The text file is written in the format of Title, Author, length, content included, rating, genre
     >The program will read the text file and output all the information presented there in terms of the variables in the private section in the class.
     >The user enters valid DVD Name and Date and the program excutes correctly

 Bad Data case  (The text file has a diffrent order than Title, Author, length, content included, rating, genre then an empty line then repeat)
     >The program will excutes but will have a messed up format.
     >The user will become very confused on how to rent the DVDs
 

 Abnormal data (The Text file is empty)
     >If the text file is empty it will not have any DVDs to display
 
 Limits of the program (The name of the text file changes)
 >If the name of the text file chaneges, it should be changed in the program to
 >If name is not changed in the program, the program will not run and output an error message.
    
 Discussion:
     The program will output correct values if the text file is ordered correctly.
     Having a diffrent order in the text file is going to confuse the user
 
*/
