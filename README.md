## Baekjoon

### Algorithm Drills
백준 단계별로 풀어보기 (Ch.1 ~ Ch.50) Cpp  
백준 sovled.ac Class (Class.1 ~ Class.6) Cpp  
백준 sovled.ac Weekly Marathon Cpp  

## Online Judge STL/IO Setting
```
#include <bits/stdc++.h>
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

## Math Formula
```
// Modular 
(A+B)%C = (A%C+B%C)%C
(AxB)%C = (A%CxB%C)%C

// Combinations  
C(M,N) = (M×(M−1)×...×(M−N+1))/(1x2x...xN)

// Euclidean algorithm
GCD(a,b) = a (if b=0), GCD(b,a%b)
LCM(a,b) = a x b / GCD(a,b)
```

## Syntax
```
// two-dimensional array
vector<vector<bool>> A(N, vector<bool>(N));
```