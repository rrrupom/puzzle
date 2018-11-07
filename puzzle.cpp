#include<iostream>
using namespace std;
int main()
{
    cout<<"\n\n\n\t\t   PUZZLE\n";
    cout<<"\t\tversion 1.0\n\n\n";

    int i,j,n=1,t,p,m,x,y;
    int ara[3][3]={8,2,6,5,3,4,1,7,0};
    for(i=0;i<3;i++){
            cout<<"\t";
        for(j=0;j<3;j++){
                cout<<ara[i][j]<<"  ";
                if(ara[i][j]==0){
                    x=i;
                    y=j;
                }
        }
        cout<<endl;
    }
    cout<<endl;

    while(true){

        //cout<<x<<' '<<y;
        cout<<"\tinput number for replace : ";
        cin>>p;
        m=0;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(p==ara[i][j]){
                        if(ara[i][j+1]==0 || ara[i][j-1]==0 || ara[i+1][j]==0 || ara[i-1][j]==0){
                            ara[x][y]=p;
                            ara[i][j]=0;
                            x=i;
                            y=j;
                            m=1;
                            break;
                        }
                        else{
                            m=1;
                            cout<<"\n\n\tInvalid Move!!!\n\n";
                            break;
                        }
                }
            }
            if(m==1) break;
        }
         for(i=0;i<3;i++){
                cout<<"\t";
            for(j=0;j<3;j++){
                 cout<<ara[i][j]<<"  ";
                    }
                cout<<endl;
            }

    }

}
