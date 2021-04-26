using System;

namespace FastWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("성별을 입력하시오 M/W(대문자로 해야 합니다.) :");
            string Gen = Console.ReadLine();
            if(Gen =="M")
            {
                Console.Write("키를 입력하시오:");
                int a = Console.Read();
                Man M = new Man();
                if (a <= 168)
                {
                    Console.WriteLine(M.NO);
                }
                else if (a >= 180)
                {
                    Console.WriteLine(M.Up);
                }
                else
                    Console.WriteLine(M.Yes);
            }
           else if(Gen == "W")
            {
                Console.Write("키를 입력하시오:");
                int a = Console.Read();
                Woman W = new Woman();
                if (a <= 154)
                {
                    Console.WriteLine(W.No);
                }
                else if (a >= 175)
                {
                    Console.WriteLine(W.Up);
                }
                else
                    Console.WriteLine(W.Yes);
            }
            else
            {
                Console.WriteLine("너 외계인이지!!");
            }
        }
    }
    class Man
    {
        public string NO = "어떻게 사람키가...";
        public string Yes = "나쁘지 않네요";
        public string Up = "오 대박";
    }
    class Woman
    {
        public string No = "ㅋㅋ 그거 본인키 맞죠?";
        public string Yes = "나름..음!";
        public string Up = "오....이건좀 귀하군요...";
    }
}
