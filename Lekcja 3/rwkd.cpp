double TRownanieKwadratowe::Delta() const
{
 return b*b-4*a*c;
}

TRownanieKwadratowe::TRownanieKwadratowe(double a, double b, double c):TObject(),a(a),b(b),c(c)
{
}
double TRownanieKwadratowe::X1() const
{
return (-b-sqrt(Delta()))/(2*a);
}
double TRownanieKwadratowe::X2() const
{
return (-b+sqrt(Delta()))/(2*a);
}

