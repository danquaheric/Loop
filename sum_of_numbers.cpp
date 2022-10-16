   #include<iostream>
   using namespace std;
   int main()
   {


    int i = 100;
    while(i < 200) {
    	if ((i % 3 == 0) && (i % 5 == 0)) {
      		cout << i << " is divisible by 3 & 5\n";
    	}
    	i++;
    }
   }
