using System;
using System.Collections.Generic;

namespace ConsoleApp2
{
    class HiHi
    {
        public int Hihi(int a,int i)
        {
            if (a == 0)
                return 0;
                return a = a * i;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            HiHi huhu = new HiHi();
            Console.Write("무엇을 곱할까요? : ");
            int a = int.Parse(Console.ReadLine());

            Console.Write("여기에 몇번 곱할까요? : ");
            int b = int.Parse(Console.ReadLine());

            for (int i = 1; i <= b; i++)
            {
                Console.WriteLine(huhu.Hihi(a, i));
            }
        }
    }
}
