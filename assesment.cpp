#include <iostream>
using namespace std;
class project
{
public:
    void Fibonacci_Series()
    {
    int n1=0,n2=1,n3,i,number;
       cout<<"Enter the number of elements: ";
       cin>>number;
       cout<<n1<<" "<<n2<<" "; //printing 0 and 1
       for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed
      {
        n3=n1+n2;
     cout<<n3<<" ";
        n1=n2;
        n2=n3;
      }
   return 0;
    }
    void prime_number()
    {
        int n, i, m=0, flag=0;
  cout << "Enter the Number to check Prime: ";
  cin >> n;
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          cout<<"Number is not Prime."<<endl;
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "Number is Prime."<<endl;
  return 0;
    }
    void Palindrome()
    {
         int n,r,sum=0,temp;
  cout<<"Enter the Number=";
  cin>>n;
 temp=n;
 while(n>0)
{
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
}
if(temp==sum)
cout<<"Number is Palindrome.";
else
cout<<"Number is not Palindrome.";
  return 0;
    }
    void factorial()
    {
   int i,fact=1,number;
  cout<<"Enter any Number: ";
 cin>>number;
  for(i=1;i<=number;i++){
      fact=fact*i;
  }
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
  return 0;
    }
    void Armstrong_Number()
    {
    int n,r,sum=0,temp;
    cout<<"Enter the Number=  ";
    cin>>n;
       temp=n;
    while(n>0)
   {
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
    }
    if(temp==sum)
    cout<<"Armstrong Number."<<endl;
else
    cout<<"Not Armstrong Number."<<endl;
    return 0;
}
void sum_of_digits()
{
int n,sum=0,m;
cout<<"Enter a number: ";
cin>>n;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
cout<<"Sum is= "<<sum<<endl;
return 0;
}
void Reversed_Number()
{
int n, reverse=0, rem;
cout<<"Enter a number: ";
cin>>n;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
 cout<<"Reversed Number: "<<reverse<<endl;
return 0;
}
void swapp_numbers()
{
int a=5, b=10;
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;
a=a*b; //a=50 (5*10)
b=a/b; //b=5 (50/10)
a=a/b; //a=10 (50/5)
cout<<"After swap a= "<<a<<" b= "<<b<<endl;
return 0;
}
void matrix_multiplication()
 {
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
cout<<"enter the number of row=";
cin>>r;
cout<<"enter the number of column=";
cin>>c;
cout<<"enter the first matrix element=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
cout<<"enter the second matrix element=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>b[i][j];
}
}
cout<<"multiply of the matrix=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<mul[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
void convert_numtochar()
{
    long int n,sum=0,r;
cout<<"Enter the Number= ";
cin>>n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
n=sum;
while(n>0)
{
r=n%10;
switch(r)
{
case 1:
cout<<"one ";
break;
case 2:
cout<<"two ";
break;
case 3:
cout<<"three ";
break;
case 4:
cout<<"four ";
break;
case 5:
cout<<"five ";
break;
case 6:
cout<<"six ";
break;
case 7:
cout<<"seven ";
break;
case 8:
cout<<"eight ";
break;
case 9:
cout<<"nine ";
break;
case 0:
cout<<"zero ";
break;
default:
cout<<"tttt ";
break;
}
n=n/10;
}
}
void alphabet_triangle()
    {
 char ch='A';
    int i, j, k, m;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<ch++;
            ch--;
        for(m=1;m<i;m++)
            cout<<--ch;
        cout<<"\n";
        ch='A';
    }
return 0;
}
void number_triangle()
{
int i,j,k,l,n;
cout<<"Enter the Range=";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<k;
}
for(l=i-1;l>=1;l--)
{
cout<<l;
}
cout<<"\n";
}
return 0;
}
void fibonacci triangle()
{
  int a=0,b=1,i,c,n,j;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        a=0;
        b=1;
        cout<<b<<"\t";
        for(j=1; j<i; j++)
        {
            c=a+b;
          cout<<c<<"\t";
            a=b;
            b=c;
        }
        cout<<"\n";
    }
return 0;
}
void calculator()
{
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
void check_evenorodd()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";

    return 0;
}
void find_quotientandremainder()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
void check_vowelorconsonent()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}
void leap_year()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
void sumof_naturalnum()
    {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}
void multiplication_table()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
void Lcm()
{
    int n1, n2, max;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);

    return 0;
}
void hcf()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "HCF = " << n1;
    return 0;
}
void reverse_anumber()
{
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}
  void powerofnum()
  {
    int exponent;
    float base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    cout << result;

    return 0;
}
void ASCIIvalue()
{
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
 return 0;
}
void product()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    cout << "Enter two numbers: ";

    // Stores two floating point numbers in variable firstNumber and secondNumber respectively
    cin >> firstNumber >> secondNumber;

    // Performs multiplication and stores the result in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber;

    cout << "Product = " << productOfTwoNumbers;

    return 0;
}
void pyramid_usingstar()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
void largest_element()
{
    int i, n;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;

    // Store number entered by the user
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];

    return 0;
}
void transposeofmatrix()
{
    int a[10][10], trans[10][10], r, c, i, j;

    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    // Storing element of matrix entered by user in array a[][].
    cout << endl << "Enter elements of matrix: " << endl;
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        cout << "Enter elements a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
    }

    // Displaying the matrix a[][]
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << " " << a[i][j];
            if(j == c - 1)
                cout << endl << endl;
        }

    // Finding transpose of matrix a[][] and storing it in array trans[][].
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            trans[j][i]=a[i][j];
        }

    // Displaying the transpose,i.e, Displaying array trans[][].
    cout << endl << "Transpose of Matrix: " << endl;
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j)
        {
            cout << " " << trans[i][j];
            if(j == r - 1)
                cout << endl << endl;
        }

    return 0;
}

};


