
#import "treeofcodes.h"
#import "StreetOfCrocodiles.h"
#include <ofstream> //ofstream lets you read and write to files

string listOfWords =eyes$shadows$anger$silence$naked;//list of words to be considered poetic
Public{
    string poeticWords[1000] = new array[1000]; //this creates a corpus of applicable words and stores them in a list
    for (int i=0; i < poeticWords.length; i++){}//goes through the words in the listOfWords
        string tempWord = listOfWords.getLineBefore($);//gets the word before the '$' delimiter
        tempWord = poeticWords[i];//adds the word to the array of poeticWords
        delete listOfWords.getLineBefore($);//deletes the word from the string
    }
    ifstream in("StreetofCrocodiles.h"); //Reads in the text file
    While (inFile){//while the file isn't over
    String line=br.readLine();
    string streetOfCrocodilesLines[1000000] = new array[100000];//stores the whole street of crocodiles text line by line
    if (line=="street of crocodiles" or line=="Street of Crocodiles"){
      line="tree of codes"; //changes "street of crocodiles" to "tree of codes whenever it finds it"
    }
    if (line=="Bruno Schulz"){
      line="Jonathan Safran Foer"
          }//changes the author's name whenever it comes across it
  }
  
  for (int i=0; i<streetOfCrocodilesLines.length; i++){//goes through entire story
      for (int x=0; x<poeticWords.length; x++){//goes through the list of poetic words 
      if (streetOfCrocodilesLines[i].contains(poeticWords[x])){//if the line contains the poeticword
          myfile.open("treeofcodes.h"); //opens treeofcodes.h so we can write to it
          myfile<<poeticWords[x]; //writes poetic words to treeofcodes.h
      }
      
      }
      myfile.close(); //closes the treeofcodes.h file we were writing to
  }
      
}