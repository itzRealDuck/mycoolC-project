#include <iostream> 

double areaofasquare(double sidelength); 
double areaofarectangle(double length, double width); 
double volumeofacube(double edgelength); 
double volumeofacuboid(double length, double height, double width); 

int main(){ 
double length; 
double edgelength; 
double sidelength; 
double height; 
double width;   

char op; 

  


std::cout << "Hello There enter S if you want the area of a square or R for area of rectangle or F for volume of the cube or C for volume of the cuboid : \n";
std::cin >> op; 
 
if(op == 'S'){ 
      double AreaofSq = areaofasquare(sidelength);  
    std::cout << AreaofSq; 



}

else if (op == 'R'){  

    double AreaOfRec = areaofarectangle(length,width); 
    std::cout << AreaOfRec;
   


}   
else if(op == 'F'){ 
    double Vofcube = volumeofacube(edgelength);
std::cout << Vofcube;


}  
else if(op == 'C'){ 
    double VofCuboid = volumeofacuboid(length,height,width);
std::cout << VofCuboid;

}

}

double areaofasquare(double sidelength){ 

    std::cout << "great you entered that now enter the sidelength"; 

    std::cin >> sidelength; 

    return sidelength * sidelength; 


} 
double areaofarectangle(double length, double width){ 

std::cout << "great now you entered that enter the length"; 
std::cin >> length;  

std::cout << "ok now enter the width"; 
std::cin >> width; 

return length * width; 

}  
double volumeofacube(double edgelength){ 

std::cout << "ok enter the edge length"; 
std::cin >> edgelength; 

return edgelength * edgelength * edgelength;

}
double volumeofacuboid(double length, double height, double width){ 

std::cout << "ok now you enter that enter the length first :";
 std::cin >> length; 

 std::cout << "ok now enter the height"; 
 std::cin >> height; 

 std::cout << "ok now enter the width"; 
 std::cin >> width; 

 return length * height * width;

} 
