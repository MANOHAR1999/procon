using System;using System.Linq;class x{static void Main(){int n;while((n=int.Parse(Console.ReadLine()))>0)Console.WriteLine((int)Enumerable.Range(1,n).Select(x=>int.Parse(Console.ReadLine())).OrderBy(x=>x).Skip(1).Take(n-2).Average());}}