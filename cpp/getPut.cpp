nclude<iostream>

using namespace std;

class books

{

char tit1e [30];

float price ;

public:

void getdata ();

void putdata ();

} ;

void books :: getdata ()

{

cout<<"Title:”;

Cin>>title;

cout<<"Price:”;

cin>>price;

 

}

void books :: putdata ()

{

cout<<"Title:"<<title<< "\n";

cout<<"Price:"<<price<< "\n”;

const int size=3 ;

int main ()

{

books book[size] ;

for(int i=0;i<size;i++)

{

cout<<"Enter details o£ book "<<(i+1)<<"\n";

book[i].getdata();

}

for(int i=0;i<size;i++)

{

cout<<"\nBook "<<(i+l)<<"\n";

book[i].putdata() ;

}

return 0;

}


