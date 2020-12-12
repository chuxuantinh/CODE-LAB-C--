#include <iostream>
#include <iomanip>
#include <cmath>

   using namespace std;

   class Rectangle {
     //friend functions
     friend ostream & operator<<(ostream & output, const Rectangle &r){
       output<<"width="<<r.width<<" height="<<r.height;
       return output;
     }
     
   public:									
     //member functions
     Rectangle(int w, int h){
       width = w;
       height = h;
     }   
     void setWidth(int w){
       width=w;
     }
     void setHeight(int h){
       height=h;
     }
     int getWidth() const{
       return width;
     }
     int getHeight() const{
       return height;
     }
     int area() const{
       int areaOfRectangle = width * height;
       return areaOfRectangle;
     }
     
   private:
     //data members
     int width;
     int height;
   };


//driver function for Rectangle class                                                            
int main(){
  Rectangle r1(2,3);
  cout<<"Rectangle r1: "<<r1<<endl;
  cout<<"area of r1 = "<<r1.area()<<endl;
  return 0;
}
