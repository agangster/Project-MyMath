#include <iostream>
#include "mymath.h"


using namespace std;




int main()
{

double x1, x2, y1, y2, a, b, c, d;
double xA, xB, yA, yB, e, f;


cout << "Write the coordinates of the first vector: ";
cin >> x1 >> y1;
cout << "Write the coordinates of the secodn vector: ";
cin >> x2 >> y2;
a = addX(x1, x2);
b = addX(y1, y2);
c = substractX(x1, x2);
d = substractX(y1, y2);
cout.precision(2);
cout << fixed << "Length of the first vector equals: " << lengthOfvector(x1, y1) << endl;
cout << fixed << "Length of the second vector equals: " << lengthOfvector(x2, y2) << endl;
cout << fixed << "Result of addition of vectors is: [" << a << ", " << b << "]" << endl;
cout << fixed <<"Result of substriction of vectors is: [" << c << ", " << d << "]" << endl;
cout << fixed << "Scalar product equals: " << scalarProduct(x1, y1, x2, y2) << endl;

    cout << "Write the coordinates of first endpoint of line segment: ";
    cin >> xA >> yA;
    cout << "Write the coordinates of second endpoint of line segment: ";
    cin >> xB >> yB;
    e = midpointsXvalue(xA, xB);
    f = midpointsYvalue(yA, yB);


    cout.precision(2);
    cout << fixed << "Length of line segment equals: " << lengthOfsegment(xA, yA, xB, yB) << endl;
    cout.precision(2);
    cout << fixed << "Coordinates of line segment midpoint: [" << e << "," << f << "]" << endl;


    return 0;


}
