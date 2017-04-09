# Rejection sampling Implementation 

This repository consists of the implementation of the rejection sampling algorithm.

## Prerequisites

The Rcpp and inline packages have to be installed in R before we can proceed.


## Setup

Open RStudio and run the setup.R script to get started.

Here we will be sampling from a probablity distribution function f(x):
X ~ N(3,2) + N(-5,1)
where N(mu, sigma) is a normal distribution with mean mu and standard deviation sigma.

The proposal function q(x) is:
X ~ N(0,4)


In order to sample we use the RejSam(N, M) where N is the required numer of samples and M is the scaling constant. Here we have already determined an optimal value c for the scaling constant.

The sampling function can be run as follows:
```
RejSam(10000, c)
```

## Authors

* **Divyam Malay Shah**  - [divyam96](https://github.com/divyam96)


## Acknowledgments

https://theclevermachine.wordpress.com/2012/09/10/rejection-sampling/
https://people.eecs.berkeley.edu/~jordan/courses/260-spring10/lectures/lecture17.pdf


