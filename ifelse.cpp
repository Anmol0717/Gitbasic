/*#include<iostream>
using namespace std;

int main(){*/

/*#ifndef ONLINE_JUDGE 
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif*/


//...............if else...................
/*int savings;
cin>>savings;

if(savings>5000){
    cout<<"neha\n";
}else{
    cout<<"disha\n";
}
return 0;
}*/




//..................if else if..............
/*int savings;
cin>>savings;

if(savings>5000){
    cout<<"neha\n";
}else if(savings>2000){
    cout<<"disha\n";
   } else{
        cout<<"friends\n";
    }

return 0;
}*/






//.....................NESTED ifelse.................


/*int savings;
cin>>savings;

if(savings>5000){
    if(savings>10000)
{
    cout<<"roadrip with neha";
}else{
cout<<"shopping with neha";
}

}else if(savings>2000){
    cout<<"disha\n";
   } else{
        cout<<"friends\n";
    }

    return 0;
}*/



//........... QUSTION :- Find biggest number among 3 numbers................
/*
#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;
if(a>b){
    if (a>c)
    {
        cout<<"biggest number is : "<<a<<endl;
    }
    else{
    cout<<"biggest number is : "<<c<<endl;
    }
}
else{
    if(b>c){
    cout<<"biggest number is : "<<b<<endl;
}
else{
    cout<<"biggest number is : "<<c<<endl;
}
}
    return 0;
}
*/



//...................QUESTION :- Find number is odd or even..................

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%2==0){
        cout<<"number is even"<<endl;
    }
        else{
cout<<"number is odd "<<endl;
        }
    return 0;
}