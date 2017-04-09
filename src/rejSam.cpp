 
#include <iostream>
#include <Rcpp.h>
#include <Rmath.h>
#include <cmath>
#include <math.h>
//#include <RcppArmadillo.h>

 using namespace Rcpp;   




// [[Rcpp::export]]
 NumericVector RejSam(int n, double m)
{
 //N is sample size, M is scaling constant
  int N   = n;
  double M = m;

  int i,j;
  NumericVector res(N);

  RNGScope scope;         // Initialize Random number generator

 
  double x=0, u=0;

 for(i=0;i<N;)
{
  
  x= ::Rf_rnorm(0,4);
  u=::Rf_runif(0,1);
   if(u<((R::dnorm(x,3,2, 0)+R::dnorm(x,-5,1, 0))/(M*R::dnorm(x,0,4, 0))))
  {
   res(i)=x; 
   i++;
  }


}

return res;             // Return to R

}
