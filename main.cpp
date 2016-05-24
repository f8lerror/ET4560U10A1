/*
 * Programming Challenge 2
 */
/*
 *
#include <iostream>

using namespace std;

int print_month(int p_month);

bool leapyear(int lpyr) {
    return ((lpyr % 4 == 0 && lpyr % 100 != 0) || lpyr % 400 == 0);
}


int main()
{
    int month;
    int days;
    int year;
    int monthDays;
    int lastDayDec;

    cout << "Enter a date in the form of month-day-year: ";
    cin >> month >> days >> year;

    if ( month < 1 || month > 12 ){
        cout << "INVALID MONTH: Please try again." << endl;
    }

    if ( days < 1 || days > 31 ){
        cout << "INVALID DAY: Please try again." << endl;
    }

    if ( leapyear(year) ){
        cout << year << " is a leap year." << endl;
    }

    cout << "You entered: " << month << "-" << days << "-" << year << endl;
    monthDays = print_month(month);
    cout << "The month & day is " << monthDays << endl;

}

int print_month(int p_month)
{
    int p_days;
    p_days = 0;
    p_month = p_month - 1;

    switch (p_month){
        case 12 :
            p_days = p_days + 31;
        case 11 :
            p_days = p_days + 30;
        case 10 :
            p_days = p_days + 31;
        case 9 :
            p_days = p_days + 30;
        case 8 :
            p_days = p_days + 31;
        case 7 :
            p_days = p_days + 31;
        case 6 :
            p_days = p_days + 30;
        case 5 :
            p_days = p_days + 31;
        case 4 :
            p_days = p_days + 30;
        case 3 :
            p_days = p_days + 31;
        case 2 :
            p_days = p_days + 28;
        case 1 :
            p_days = p_days + 31;
        default :
            cout << "Invalid Value!\n";
    }
    return p_days;
}
*/


/*
 * Programming Challenge 6
 */
#include <iostream>

using namespace std;

void Encrypt(string&);

string Decrypt(string strTarget);

int main() {
    string strTarget;
    cout << "Enter a string to encrypt: ";
    getline(cin,strTarget);
    string temp(strTarget);
    Encrypt(strTarget);

    cout << "Encrypted: " << strTarget << endl;
    cout << "Decrypted: " << Decrypt(strTarget) << endl;

    return 0;
}

void Encrypt(string &strTarget)
{
    int len = strTarget.length();
    char a;
    string strFinal(strTarget);

    for (int i = 0; i <= (len-1); i++)
    {
        a = strTarget.at(i);
        int b = (int)a;                     //get the ASCII value of 'a'
        b += 1;                             //Add 1 to the ASCII value
        if (b > 254) { b = 254; }
        a = (char)b;                        //Set the new ASCII value back into the char
        strFinal.insert(i , 1, a);          //Insert the new Character back into the string
    }
    string strEncrypted(strFinal, 0, len);
    strTarget = strEncrypted;
}

string Decrypt(string strTarget)
{
    int len = strTarget.length();
    char a;
    string strFinal(strTarget);

    for (int i = 0; i <= (len-1); i++)
    {
        a = strTarget.at(i);
        int b = (int)a;
        b -= 1;

        a = (char)b;
        strFinal.insert(i, 1, a);
    }
    string strDecrypted(strFinal, 0, len);
    return strDecrypted;
}

/*
 * Programming Challenge 2
 */

/*
#include<iostream>

using namespace std;

void quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[abs((left + right) / 2)];
    cout << "pivot is " << pivot << endl;

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            cout << "i and j are " << i << " " << j << " and corresponding array value is " << arr[i] << " " << arr[j] << endl;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
            cout << "Entering big while loop " << endl;
            for(int i=0;i<7;i++)
                cout << arr[i] << " " << endl ;
        }
    }
    cout << "This is where recursion happens " << endl;

    if (left < j)
        quickSort(arr, left, j);

    if (i< right)
        quickSort(arr, i, right);
}

int main()
    {
    int arr[7]= {2,3,8,7,4,9,1};

    for(int i=0;i<7;i++)
        cout << arr[i] << " " ;

    quickSort(arr,0,6);

    cout << endl;

    for(int i=0;i<7;i++)
        cout << arr[i] << " " ;

    int wait;

    cin >> wait;

    return 0;
}*/
