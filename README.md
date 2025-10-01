# BOJ

## Online Judge STL/IO Setting
```
#include <bits/stdc++.h>
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

## 모듈러 공식
$$ (A + B) \pmod{M} = \left( (A \pmod{M}) + (B \pmod{M}) \right) \pmod{M} $$
$$ (A \times B) \pmod{M} = \left( (A \pmod{M}) \times (B \pmod{M}) \right) \pmod{M} $$

## 조합 공식
$$ C(M, N) = \frac{M \times (M-1) \times \dots \times (M-N+1)}{1 \times 2 \times \dots \times N} $$

## 유클리드 호제법
$$ GCD(a, b) = \begin{cases} a & \text{if } b = 0 \\ GCD(b, \ a \pmod b) & \text{if } b \neq 0 \end{cases} $$
