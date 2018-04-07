double addX(double x1, double x2) //adding coordinates
{
    return x1 + x2;

}

double substractX(double x1, double x2) //substracting coordinates
{
    return x1 - x2;

}

double scalarProduct(double x1, double y1, double x2, double y2)
{
    return (x1*x2) + (y1*y2);

}
double sqrt( int n )
{
    double a = (double) n;
    double x = 1;
    for( int i = 0; i < n; i++)
    {
        x = 0.5 * ( x+a / x );
    }
    return x;
}
double lengthOfvector(double x, double y) // coordinates of endpoint
{
    return sqrt((x*x)+(y*y));
}
double lengthOfsegment(double xA, double yA,  double xB, double yB) // coordinates of endpoints
{
    double result1 = (xB - xA)*(xB-xA);
    double result2 = (yB - yA)*(yB-yA);
    return sqrt((result1 + result2));

}
double midpointsXvalue(double xA, double xB)
{
    return (xA+xB)/2;
}
double midpointsYvalue(double yA, double yB)
{
    return (yA+yB)/2;
}
