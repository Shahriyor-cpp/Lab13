#include <iostream>
using namespace std;

//#1

// int main() {
//     int arr[5]={1,2,3,4,5};
//     int* p=arr;
//     for(int i=0;i<5;i++) {
//         cout<<*(p+i)<<endl;
//     }
// }

//#2

// int main() {
//     int arr[9]={1,2,3,4,5,6,7,8,9};
//     int* p=arr;
//     for(int i=0;i<9;i++) {
//         *(p+i)=*(p+i)*3;
//         cout<<*(p+i)<<endl;
//     }
// }

//#3
//
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *p = arr;
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << endl;
//         cout << *(p+i) << endl;
//     }
// }

//#4

// void Reverse(int arr[],int size) {
//     int *pstart = arr;
//     int *pend = arr + size-1;
//     while (pstart < pend) {
//         int temp = *pstart;
//         *pstart = *pend;
//         *pend = temp;
//         pstart++;
//         pend--;
//     }
//     cout << endl;
// }
// int main() {
//     int size;
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     Reverse(arr, size);
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

//#5
//
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int* ptr = arr;
//     cout << *(ptr+2) << endl;
// }

//#6

// int main() {
//     int arr[4]={1,2,3,4};
//     int* p=arr;
//     for(int i=0;i<4;i++) {
//         cout<<"Value: "<<*(p+i)<<" ";
//         cout<<"Address: "<<p<<endl;
//     }
// }

//#7
// int main() {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int* p = arr;
//     for (int i = 0; i < 6; i++) {
//         if (arr[i] % 2 == 0) {
//             cout << arr[i] << endl;
//         }
//     }
// }

//#8

// int main() {
//     int arr[2][3]={
//         {1,2,3},
//         {4,5,6}
//     };
//     int*parr=&arr[0][0];
//     for(int j=0;j<6;j++) {
//         cout<<*(parr+j)<<endl;
//     }
// }

//#9

// int main() {
//     int a=1,b=2,c=3;
//     int arr[3]={a,b,c};
//     int*p[3]={&a,&b,&c};
//     for(int i=0;i<3;i++) {
//         cout<<*p[i]<<" ";
//         cout<<p[i]<<endl;
//     }
// }

//#10

// int main() {
//     int arr[5] = {5,3,8,2,7};
//     int *ptr1=arr;
//     for (int i=0; i < 4; i++) {
//         for (int j=i+1; j < 5; j++) {
//             if (*(ptr1+i) > *(ptr1+j)){
//                 int temp = *(ptr1+i);
//                 *(ptr1+i) = *(ptr1+j);
//                 *(ptr1+j) = temp;
//             }
//         }
//     }
//     for (ptr1 ; ptr1 < arr+5; ptr1++) {
//         cout << *ptr1 << " ";
//     }
// }

//#11
// int main() {
    // string suit[4] ={"hearts","spades","diamonds","clubs"};
    // string* p=suit;
    // for(int i=0;i<4;i++) {
    //     cout<<*(p+i)<<endl;
    // }
// }

//#13
int main() {
    int arr[4][13] = {0};
    arr[0][0] = 1;
    arr[3][1] = 1;
    const char* a[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char* b[13] = {"Ace", "2", "3", "4", "5", "6", "7","8", "9", "10", "Jack", "Queen", "King"};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (*(*(deck + i) + j) == 1) {
                cout << *(b + j) << " of " << *(a + i) << endl;
            }
        }
    }

    return 0;
}
//14 is done by using random and I didnt copy from ai
//15
void greet() {
    cout << "Hello from greet()" << endl;
}

void bye() {
    cout << "Goodbye from bye()" << endl;
}

int main() {
    void (*fptr)();
    fptr = greet; 
    fptr(); 
    fptr = bye;  
    fptr();      
}

//16
int add(int a, int b) {
    return a+b;
}

int multiply(int a, int b) {
    return a*b;
}
int divide(int a, int b) {
    return a/b;
}
int main() {
    int (*fptr)(int, int);
    int x, y;
    char action;
    cin>>x>>y;
    cin>>action;
    if (action=='a') {
        fptr=add;
        cout << "Add: "<<fptr(x, y)<<endl;
    } else if (action=='m') {
        fptr=multiply;
        cout << "Multiply: " << fptr(x, y) << endl;
    }else if(action=='d'){
        fptr=divide;
        cout << "Divide: " << fptr(x, y) << endl
    }( else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
