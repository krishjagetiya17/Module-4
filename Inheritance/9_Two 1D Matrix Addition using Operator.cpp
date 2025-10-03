/*9. Write a Program of Two 1D Matrix Addition using Operator
Overloading*/
#include<iostream>
using namespace std;

class Mat
{
    int m[3][3];
public:
    void accept();
    void display();
    Mat operator+(const Mat& x); // Signature correction
};

void Mat::accept()
{
    cout << "\n\t Enter Matrix Element (3 X 3) :\n ";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << " ";
            cin >> m[i][j];
        }
    }
}

void Mat::display()
{
    for(int i = 0; i < 3; i++)
    {
        cout << " ";
        for(int j = 0; j < 3; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
}

Mat Mat::operator+(const Mat& x)
{
    Mat result;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            result.m[i][j] = m[i][j] + x.m[i][j];
        }
    }
    return result;
}

int main()
{
    Mat m, n, o;
    m.accept();            
    n.accept();          
    cout << "\n First Matrix : \n";
    m.display();           
    cout << "\n Second Matrix : \n";
    n.display();         
    o = m + n;  // Use the Overloaded + Operator
    cout << "\n Addition of Matrix : \n";
    o.display();  // Display the Result Matrix
    
    return 0;
}

