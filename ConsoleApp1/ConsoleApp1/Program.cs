using System;
using System.Collections.Generic;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack<int> s = new Stack<int>();

            for (int i = 0; i <= 2; i++)
            {
                int re = int.Parse(Console.ReadLine());
                s.Push(re);
            }
            for (int i = 2; i >= 0; i--)
            {
                Console.WriteLine(s.Pop());
            }
        }
    }
}
