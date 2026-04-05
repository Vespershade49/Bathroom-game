#include<iostream>
using namespace std;
int main()
{
    char y='y';
    cout<<"\n  Press y to play the game and n to quit the game:";
    cin>>y;
    while(y=='y')
    {
    cout<<"\n***************FIND THE UPSTARIS BATHROOM***************\n"<<endl;
     char a='a',d='d';
    cout<<"Enter the choice for a and d to find bathroom:"; 
    cin>>a;
     if(a=='a')
    {
       
        cout<<"\n        Turn left\n"<<endl; 
        char c='c';
        cout<<"Press c to move along the direction:";
        cin>>c;
        if(c!='c')
        {
            cout<<"\n    Wrong move\n"<<endl;
        }
        else
        {
        cout<<"\n        Move to the stairs\n"<<endl;
        char v='v',b='b';
        cout<<"Enter the choice left for v and right for b:";
        cin>>v;
        if(v=='v')
        {
            cout<<" \n    Congrats you found the upstairs bathroom!!    \n"<<endl;
        }
        else
        {
            cout<<"\n    Can't move further?\n"<<endl;
        }
    }
    }
    else{
        cout<<"\n           Turn right\n"<<endl;
        char x='x';
        cout<<"Press x to move along the direction:";
        cin>>x;
        if(x=='x')
        {
           cout<<"\n    Dead end \n"<<endl;
           }
           else{
            cout<<"\n   Invalid input \n "<<endl;
           }

    }
    cout<<"\nPress y to play the game and n to quit:";
    cin>>y;
}
cout<<" \nOk bye!!\n"<<endl;
return 0;

}
