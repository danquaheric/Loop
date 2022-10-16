    #include<iostream>

    using namespace std;

    int main ()

    {

        int num, res, rem, sum = 0;

        cout << "Enter number to be checked : ";

        cin >> num;

        res = num;

        while (res != 0)

        {

            rem = res % 10;

            sum = sum + rem*rem*rem;

            res = res / 10;

        }

        if (sum == num)

            cout<< num << " is an Armstrong number.";

        else

            cout<< num << " is not an Armstrong number.";

        return 0;

    }
