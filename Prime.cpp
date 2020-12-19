bool prime(long long a){
    if (a<2)
        return false;
    for (long long i=2;i*i<=a;i++)
        if (a%i==0)
            return false;
    return true;
}
