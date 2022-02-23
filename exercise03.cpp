#include <iostream>


int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

struct box{
  int height ;
  int width ;
  int length ;
} ;

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;

  struct box box1 , box2 ;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    std::cout << "Enter Box 1 Height : ";
    std::cin >> box1.height ;
    std::cout << "Enter Box 1 Width : ";
    std::cin >> box1.width ;
    std::cout << "Enter Box 1 Length : ";
    std::cin >> box1.length ;
    
    std::cout << "Enter Box 2 Height : ";
    std::cin >> box2.height;
    std::cout << "Enter Box 2 Width : ";
    std::cin >> box2.width ;
    std::cout << "Enter Box 2 Length : ";
    std::cin >> box2.length ;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( box1.height, box1.width , box1.length )
             + volume( box2.height , box2.width , box2.length );
    
    std::cout << "Volume of Box is " << totalVolume <<std:: endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  int volume ;
  
  volume = height * width * length ;
  
  return volume ;
}