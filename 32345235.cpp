
#include <iostream>
#include <cmath>

double vec_len(double* a, double* b, int dim)
{
    double sum = 0;
    for (int i = 0; i < dim; i++)
    {
        a[i] -= b[i];
        sum += a[i] * a[i];
    }

    return sqrt(sum);
}

int main()
{
    double a2[2] = { -2,7 };
    double b2[2] = { 25,5 };


    std::cout << "\nvector len = " << vec_len(a2, b2, 2);

    system("pause");
    return(0);	
}






	

