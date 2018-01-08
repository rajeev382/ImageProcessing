#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	string s[3]={"C = F + G -H","A = B + C + D + E","B = I + J * K / L"};
	 

	int n[3]={sizeof(s[0])-1,sizeof(s[1])-1,sizeof(s[2])-1}; 
	
	vector<vector<int> > vs;
        vector <int> newcol;
        vector <vector <int> > matr;
//for
//{
vector <int> newColumn;
//matr.push_back(newColumn);
//matr.at(rowNumber).push_back(intValue);
        for(int j=0;j<3;j++){

        for(int i=0;i<n[j];i++)
           {if(s[j][i]>64 && s[j][i]<91)
   newColumn.push_back(s[j][i]-65);
           }
           vs.push_back(newColumn);
           newColumn.clear();
}
           for(int k=0;k<3;k++)
           {cout<<" -- "<<vs[k].size()<<" -- "<<endl;
           for(int q=0;q<vs[k].size();q++)
             {
                 cout<<vs[k][q]<<" ";}
                 cout<<endl;
           }

return 0;
}
