#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double degree){
    double rad = (degree * M_PI)/180 ;
    return rad ;
}

double rad2deg(double radian){
    double deg = (radian*180)/M_PI ;
    return deg ;
}

double findXComponent( double L1 , double L2 , double rad1 , double rad2){
    double MixXL = (L1*cos(rad1))+(L2*cos(rad2)) ;
    return MixXL ;
}

double findYComponent( double L1 , double L2 , double rad1 , double rad2){
    double MixYL = (L1*sin(rad1))+(L2*sin(rad2)) ;
    return MixYL ;
}

double pythagoras(double X , double Y){
    double C = sqrt(pow(X,2)+pow(Y,2)) ;
    return C ;
}

void showResult(double length,double direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" ;
    cout << "Length of the resultant vector = " << length <<"\n";
    cout << "Direction of the resultant vector (deg) = " << direction << "\n" ;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" ;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    

    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
