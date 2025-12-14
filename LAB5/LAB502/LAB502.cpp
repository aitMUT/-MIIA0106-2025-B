#include <iostream>
#include <string>
using namespace std;

int maxmaxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
		return c;
}

int minvalueOfThree(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}



int main()
{
    int a, b, c;
    int maxvalue = 1000000;

	cout << "Enter a integers: ";   
    cin >> a;
	cout << "Enter b integers: ";   
	cin >> b;       
	cout << "Enter c integers: ";   
    cin >> c;       

	maxvalue = maxmaxOfThree(a, b, c);  
	cout << "The maximum value is: " << maxvalue << endl;    
	minvalue = minOfThree(a, b, c); 
	cout << "The minimum value is: " << minvalue << endl;   

    
    return 0;

}