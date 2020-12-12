/*
Inheritance example: 
Base class Rectangle 
*/

#include <iostream>

using namespace std;

class Rectangle {  
    
public:

  /*
    Static data members have to be initialized when declared.
    Static data memebers are usually declared const (constant), 
    because the values should not be changed (Principle of Least Privilege)
  */
   static const int ZERO = 0;

//constructor
   Rectangle(double length2, double width2){ 
      setLength(length2);
      setWidth(width2);
   }
   //returns name of class
   char * name() const{
      return "Rectangle";
   }
   //set function
   void setLength(double length2){
   //error checking for negative numbers
      if(length2 < ZERO){
         length2 = -length2;
      }
      length = length2; 
   }
   //set function
   void setWidth(double width2){
   //error checking for negative numbers
      if(width2 < ZERO){
         width2 = -width2;
      }
      width = width2;
   }
   //get function
   double getLength() const{
      return length;
   }
   //get function
   double getWidth() const{
      return width;
   }
// Calculate area of Rectangle
   double area() const{ 
      return length * width; 
   }
   
  /*
    Function Definition for operator<< for output with cout<<
   */
   friend ostream &operator<<(ostream &output, const Rectangle & rect){
      output<<rect.name()<<" with length = "<<rect.length<<", width = "<<rect.width<<", area = "<<rect.area();
      return output;
   }

protected: //note this is "protected" and not "private"  
   double length;
   double width;
}; //end of class Rectangle

//driver function for class Rectangle 
int main(){
   Rectangle rect1(0, 0);
   cout<<rect1<<endl; 
   rect1.setLength(3);
   rect1.setWidth(4);
   cout<<rect1<<endl;
   
   return 0;
}

/*
Rectangle with length = 0, width = 0, area = 0
Rectangle with length = 3, width = 4, area = 12

*/