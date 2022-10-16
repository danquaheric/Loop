#include<iostream>

using namespace std;
int main()

{

    int factorial;

    long long val = 1;

    cout<<"Enter a number" ;
    cin >> factorial;

    cout << endl;

    for (int i = 2; i <= factorial; i++)

        val = val * i;

    cout << "The factorial of " << factorial << " is " << val << endl;



    return 0;

}
