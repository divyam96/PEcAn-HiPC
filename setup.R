library(inline)
library(Rcpp)

## distribution to be sampled
f <- function(x) dnorm(x, 3, 2) + dnorm(x, -5, 1) 
## proposal distribution
q <- function(x) dnorm(x, 0, 4)  
## function that will be used to determine the scaling constant for the envelope
t <- function(x) f(x)/q(x)  

sourceCpp("src/rejSam.cpp")

c <- optimize(t, interval=c(-10, 10), maximum=TRUE) ## max value of t will be the scaling constant

##scaling constant
c <- c$objective

