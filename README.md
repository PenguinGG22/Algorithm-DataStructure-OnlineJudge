# BOJ

## Algorithm Drills
바킹독의 실전 알고리즘 문제집 Cpp  
백준 단계별로 풀어보기 Cpp  

## Online Judge STL/IO Setting
```
#include <bits/stdc++.h>
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

## 모듈러 공식
$$ (A+B) \pmod M = ((A \pmod M) + (B \pmod M)) \pmod M $$
$$ (A \times B) \pmod M = ((A \pmod M) \times (B \pmod M)) \pmod M $$

## 조합 공식
$$ C(M, N) = \frac{M \times (M-1) \times \cdots \times (M-N+1)}{1 \times 2 \times \cdots \times N} $$

## 유클리드 호제법
$$
GCD(a, b) = \begin{cases} 
a & \text{if } b = 0 \\ 
GCD(b, a \pmod b) & \text{if } b \neq 0 
\end{cases}
$$
$$
LCM(a, b) = \frac{a \times b}{GCD(a, b)}
$$

## Celing
$$ \frac{A + B - 1}{B} $$
