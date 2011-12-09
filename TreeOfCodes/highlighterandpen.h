#import "treeofcodes.h"
#import "StreetOfCrocodiles.h"
#include <ofstream> //ofstream lets you read and write to files
Public{
    string usesPoeticLicense(string){//a function that allows the editor to use poetic words
            string wellKnownPoeticWords[10000] = new array[1000]//words nonspecific to tree of codes/SOC that contain poetic value
            string SocPoeticWords[10000] = new array[10000]; //words specific to tree of codes/SOC with poetic value
            string listOfWords =eyes$shadows$anger$silence$naked;//list of words to be considered poetic from SOC
            for (int i=0; i < SocPoeticWords.length; i++)//goes through the words in the listOfWords
                string tempWord = listOfWords.getLineBefore($);//gets the word before the '$' delimiter
                tempWord = SocPoeticWords[i];//adds the word to the array of SocPoeticWords
                delete listOfWords.getLineBefore($);//deletes the word from the string
             }//end for loop
            
            for (int i=0; i<streetOfCrocodilesLines.length; i++){//goes through entire story
                for (int x=0; x<SocpoeticWords.length; x++){//goes through the list of poetic words 
                   if (streetOfCrocodilesLines[i].contains(SocPoeticWords[x])){//if the line contains the poeticword
                        myfile.open("treeofcodes.h"); //opens treeofcodes.h so we can write to it
                        myfile<<SocPoeticWords[x]; //writes poetic words to treeofcodes.h
                    }//end if
                  if (streetOfCrocodilesLines[i].contains(wellKnownPoeticWords[x])){//if the line contains the poetic word
                        myfile.open("treeofcodes.h");
                        myfile<<wellKnownPoeticWords[x];
                  }//end if
                }//end for
             myfile.close(); //closes the treeofcodes.h file we were writing to
         }//end for
    }//end usesPeoticLicense
    string convertsStreetToTree(string){//function that converts Street Of Crocodiles to Tree of Codes 
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
  
    }
  

      
}