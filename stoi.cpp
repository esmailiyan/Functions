int stoi(string c){
    int s=c.length()-1,pow=1,num=0;
    for(int i=s;i>=0;i--){
        num+=pow*(int(c[i])-48);
        pow*=10;
    }
    return num;
}
