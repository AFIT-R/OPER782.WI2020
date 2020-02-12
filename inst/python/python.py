import numpy as np
import seaborn as sb
import matplotlib.pyplot as plt
import statistics as st
import pandas as pd
import scipy as sp
from scipy.stats import norm
import random

def norm_converge(samp_siz, num_sims, exp = True, param = 0.3):
  
    mean_vec = np.empty([num_sims])
  
    for i in range(num_sims):
  
      if exp == True:
          samp = np.random.exponential(scale = param, size = samp_siz)
      else:
          samp = np.random.weibull(a = param, size = samp_siz)
      
      mean_vec[i] = st.mean(samp)
  
    return(mean_vec)

# Define function sampler

def sampler(df, colname,N, alpha, mu_0):

  rows = random.sample(range(df.shape[0]), N)
  samp = df.iloc[rows]
  
  col = samp[colname]
  
  my_mean = (1/len(col)) * sum(col)
  my_var = 1/(len(col) - 1) * np.sum((col - np.mean(col))**2)
  my_std = np.sqrt(my_var)
  
  # Find z value at alpha / 2
  z = norm.ppf(1-alpha / 2, loc = 0, scale = 1)
  
  mu_l, mu_h = my_mean - z * my_std / np.sqrt(len(col)), my_mean + z * my_std / np.sqrt(len(col))
  
  W = (my_mean - mu_0) / (my_std) / np.sqrt(len(col))
  
  Test = abs(W) <= z
  
  out = dict({"mean": my_mean, 
              "var": my_var,
              "std_dev":my_std,
              "mu_low": mu_l,
              "mu_high": mu_h,
              "Test stat": W,
              "Reject H_O": Test})

  return(out)
