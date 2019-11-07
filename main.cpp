// This program was to show us a better way to Initializer list in C++
// Dr. T class 
// 2019-11-07
// source: GeekforGeeks 

#include<iostream>
#include<string>
#include <fstream>

using namespace std;


 


 

class Point {

private:

              int x;

              int y;

public:

              Point(int i = 0, int j = 0):x(i), y(j) {}
              //Point(int i = 0, int j = 0):x(i), y(j) {}

              /* The above use of Initializer list is optional as the

                             constructor can also be written as:

                             Point(int i = 0, int j = 0) {

                                           x = i;

                                           y = j;

                             }

              */         

             

              int getX() const {return x;}

              int getY() const {return y;}

void printPoint() // print to a text file. 
{
  ofstream file; // file is like cout for a file
  file.open("Point.txt",ios::trunc); // rewrite over the file with new code. 
  file << "X = " << getX() << endl;
  file << "Y= " << getY() << endl;
  file.close();
}
void printPointHTML()
{
ofstream html;
html.open("print.html");
html << "<html><head><title><Cool></title>";
html << "<body style=\"background-color:#FF0000; color #FF0000;\">";
html << "<p>X = "<< getX() << " Y= "<< getY() <<"</p>"; 
html << "<img src=\"GageMilton.png\"/><br /><hr />";
html << "<img src=\"castle.png\" width=\"150\" height=\"250\"/><br /> <hr />";
html << "</body></html>";
html.close();
}


};



int main() {

Point t1(10, 15);
cout<<"x = "<<t1.getX()<<", ";
cout<<"y = "<<t1.getY();
t1.printPoint(); // call that method
t1.printPointHTML();

// dr. t challenge add a printpoint() void 
//print the x and Y data to a text file called Point.txt 

return 0;
}

 

/* OUTPUT:

x = 10, y = 15

*/

