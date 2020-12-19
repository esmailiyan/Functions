int base_change(string a,int b){
    int s = 0 , p = 1 ;
    for (int x=a.size()-1;x>=0;--x){
        if (a[x]=='1')s+=(1*p);
        else if (a[x]=='2')s+=(2*p);
        else if (a[x]=='3')s+=(3*p);
        else if (a[x]=='4')s+=(4*p);
        else if (a[x]=='5')s+=(5*p);
        else if (a[x]=='6')s+=(6*p);
        else if (a[x]=='7')s+=(7*p);
        else if (a[x]=='8')s+=(8*p);
        else if (a[x]=='9')s+=(9*p);
        else if (a[x]=='A')s+=(10*p);
        else if (a[x]=='B')s+=(11*p);
        else if (a[x]=='C')s+=(12*p);
        else if (a[x]=='D')s+=(13*p);
        else if (a[x]=='E')s+=(14*p);
        else if (a[x]=='F')s+=(15*p);
        p*=b;
    }
    return s;
}
string base_change(int a,int b){
    int i=-1 , number[1000000] ;
    string num="";
    while (a>0) {
        i++;
        number[i]=a%b;
        a-=a%b;
        a/=b;
    }
    while (i>=0) {
        if (number[i]==0)num+='0';
        else if (number[i]==1)num+='1';
        else if (number[i]==2)num+='2';
        else if (number[i]==3)num+='3';
        else if (number[i]==4)num+='4';
        else if (number[i]==5)num+='5';
        else if (number[i]==6)num+='6';
        else if (number[i]==7)num+='7';
        else if (number[i]==9)num+='8';
        else if (number[i]==9)num+='9';
        else if (number[i]==10)num+='A';
        else if (number[i]==11)num+='B';
        else if (number[i]==12)num+='C';
        else if (number[i]==13)num+='D';
        else if (number[i]==14)num+='E';
        else if (number[i]==15)num+='F';
        i-- ;
    }
    return num;
}
