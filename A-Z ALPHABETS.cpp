#include<iostream>
using namespace std;

int main()
{
    // A B C D E F G H I J

    for(int i=1; i<=5; i++)
    {
        // A
        for(int j=1; j<=5; j++)
        {
            if(i==1 || i==3 || j==1 || j==5)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // B
        for(int j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==3 || i==5 ||
               (j==5 && (i==2 || i==4)))
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // C
        for(int j=1; j<=5; j++)
        {
            if(i==1 || i==5 || j==1)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // D
        for(int j=1; j<=5; j++)
        {
            if(j==1 ||
               (i==1 && j<5) ||
               (i==5 && j<5) ||
               (j==5 && i>1 && i<5))
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // E
        for(int j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==3 || i==5)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // F
        for(int j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==3)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // G
        for(int j=1; j<=5; j++)
        {
            if(i==1 || i==5 || j==1 ||
               (i==3 && j>=3) ||
               (j==5 && i>=3))
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // H
        for(int j=1; j<=5; j++)
        {
            if(j==1 || j==5 || i==3)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // I
        for(int j=1; j<=5; j++)
        {
            if(i==1 || i==5 || j==3)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // J
        for(int j=1; j<=5; j++)
        {
            if(i==1 || j==3 ||
               (i==5 && j<=3) ||
               (i==4 && j==1))
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
    }


    cout<<endl;
    cout<<endl;


    // K L N O P T U V Y Z

    for(int i=1; i<=5; i++)
    {
        // K
        for(int j=1; j<=5; j++)
        {
            if(j==1 ||
               (i+j==6 && i<=3) ||
               (i==j && i>=3))
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // L
        for(int j=1; j<=5; j++)
        {
            if(j==1 || i==5)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // N
        for(int j=1; j<=5; j++)
        {
            if(j==1 || j==5 || i==j)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // O
        for(int j=1; j<=5; j++)
        {
            if(i==1 || i==5 || j==1 || j==5)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // P
        for(int j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==3 ||
               (j==5 && i<=3))
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // T
        for(int j=1; j<=5; j++)
        {
            if(i==1 || j==3)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // U
        for(int j=1; j<=5; j++)
        {
            if(j==1 || j==5 || i==5)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // V
        for(int j=1; j<=5; j++)
        {
            if((i<=3 && (j==1 || j==5)) ||
               (i==4 && (j==2 || j==4)) ||
               (i==5 && j==3))
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // Y
        for(int j=1; j<=5; j++)
        {
            if((i==1 && (j==1 || j==5)) ||
               (i==2 && (j==2 || j==4)) ||
               (i>=3 && j==3))
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<"   ";

        // Z
        for(int j=1; j<=5; j++)
        {
            if(i==1 || i==5 || i+j==6)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}