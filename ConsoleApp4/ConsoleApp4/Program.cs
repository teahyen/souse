//20308 김태현
using System;
using System.Collections.Generic;
//이해가 안돼서 
//인터넷보면서 전부 주석처리하면서 공부하겠습니다
namespace ConsoleApp4
{
    class project
    {
        static void Main(string[] args)
        {
            int real =10;
            int front =0;
            Queue<int> q = new Queue<int>();

            for (int i = front; i < real; i++)
            {
                int a = int.Parse(Console.ReadLine());
                q.Enqueue(a);
                if(i == real -1)
                {
                    Console.Write("다시 설정할려면 1을 누르세요 : ");
                    int c = int.Parse(Console.ReadLine());
                    if (c == 1)
                    {
                        foreach (int item in q)
                        {
                            q.Dequeue();
                        }
                        i = front;
                    }
                }
            }
            foreach (int item in q)
            {
                Console.WriteLine(item);
            }
        }
    }
}
