x,y=gets.split.map &:to_i;M=10**9+7;I=[1,1];*F=I;*R=I;2.upto(x){|i|I<<z=(M-M/i)*I[M%i]%M;F<<i*F[-1]%M;R<<z*R[-1]%M};p F[x]*R[x-y]*R[y]%M