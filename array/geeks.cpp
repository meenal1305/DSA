pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long ,long long> name;
      
 long long minimum =LLONG_MAX;
 long long maximum = -1;
 for(int i=0;i<n;i++)
 {
 if(a[i]<minimum)
 {
 minimum=a[i];
 }
 if(a[i]>maximum)
 {
 maximum=a[i];
}
}
name={minimum,maximum};
return name;

}
