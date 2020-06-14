import numpy as np
import matplotlib.pyplot as plt

N = 1000
RANGE = (10, 20)
FUNC = lambda x: np.sin(x)

def calc_func_vector(f, n, r):
  dx = (r[1]-r[0])/n
  x = np.arange(r[0], r[1], dx)
  y = np.array(list(map(f, x)))
  return x, y, dx

def calc_D(n):
  D = np.zeros(shape=(n, n)) # Start off blank
  for i in range(len(D) - 1):
    D[i][i] = -1
    D[i][i+1] = 1
  D[n-1][n-2] = -1
  D[n-1][n-1] = 1
  return D

x, v, dx = calc_func_vector(FUNC, N, RANGE)
D  = calc_D(N)
p  = D.dot(v) / dx

