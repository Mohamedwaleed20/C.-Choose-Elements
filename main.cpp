#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
   long long n , k ;
   cin >> n >> k ;
  long long arr1[n] ;
   for(long long i = 0 ; i < n ; i++)
   {
       cin >> arr1[i] ;
   }
   long long sum = 0 ;
   sort(arr1 , arr1 + n);
   reverse(arr1 , arr1 + n);
   for(long long i = 0 ; i < k ; i++)
   {
      if(arr1[i]<0)
      {
          break;
      }
       sum = sum + arr1[i];
   }
   cout << sum << endl ;

    return 0;
}
