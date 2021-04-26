using System;
using static System.Console;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                DateTime date_start = DateTime.Now;
                WriteLine(date_start);
                System.Threading.Thread.Sleep(10);
                Clear();
            }
        }
    }
}
#region 3월 29일 수업
/*       
             int? a = null;  //참조 형태로 변경 실시간 런타임 에러 제거
            a = 101;
            bool? b = null;
            //int? 를 int 로 할당
            Nullable<int> j = null;
            j = 10;
            int k = j.Value;

            const int a = 3;
            const double PI = 3.14;
            const string LOGO = "GoodFriend";
            //const는 필드 선언부에서 사용되거나 메서드내에서 사용 될 수있으며, 컴파일시 상수 값이 셜정된다
            //readonly는 필드 선언부나 클래스 생성자에서 그 값을 지정할 수 있고, 런타임시 값이 결정된다.

            //문자  ->숫자 해결책 : Parse(), Convert.Tolnt32() 
            //숫자 ->문자 해결책 : ToString();
 *       
 *                     double[] arr = new double[10];
            string[] arr1 = new string[3] {"aaa","bbb","ccc" };
            string[] arr2 = new string[] { "aaa", "bbb", "ccc" };
            string[] arr3 = { "aaa", "bbb", "ccc" };

            WriteLine(arr1[0]);
            WriteLine(arr1[1]);
            WriteLine(arr1[2]);

            WriteLine(arr2[0]);
            WriteLine(arr2[1]);
            WriteLine(arr2[2]);
            
            WriteLine(arr3[0]);
            WriteLine(arr3[1]);
            WriteLine(arr3[2]);

 *         오브젝트 사용
 *         object a = 1;
            object b = '가';
            object c = "나";
            object d = true;
            object e = 3.12312132f;

            WriteLine(a.GetType());
            WriteLine(b.GetType());
            WriteLine(c.GetType());
            WriteLine(d.GetType());
            WriteLine(e.GetType());

 *         int a = 1;
            WriteLine($"aljjdlas = {a}");   //$를 쓰면 $"{}"일때 {} 안에있는 변수가 나옴 +쓰기 귀찮아서 하는거
            WriteLine(@"slak//aslkdlask//"); //@를 쓰면 @""일때 공식 무시 Ex) // 주석 처리 X

 *              //시계
            while (true)
             {
                DateTime date_start = DateTime.Now;
                WriteLine(date_start);
                System.Threading.Thread.Sleep(10);
                Clear();
            }


            //// N: Number 타입
            //string.Format("{0:N2}", 1234.567); // 1,234.57

            //// D: Decimal 타입
            //string.Format("{0:D9}", 12345); // 000012345

            //// C: Currency 타입
            //string.Format("{0:C}", 12345); // $12,345.00
            //string.Format("{0:C0}", 12345); // $12,345

            //// X: 16진수
            //string.Format("{0:X}", 1000); // 3E8

            //// F: Fixed Point
            //string.Format("{0:F3}", 12345.6); // 12345.600

            //// E: Scientific
            //string.Format("{0:E}", 12345.6); // 1.23456E+004
1번
1-1 문장
1-2 키워드
1-3 식별자
1-4 주석
1-5 문자열
1-6 버그.예외
1-7 yes
1-8 비교 연산자
1-9 변수
1-10 string

2번
2-1 X
2-2 X
2-3 X
2-4 O
2-5 O
2-6 X
2-7 X
2-8 O

3번 1
4번 4
5번 3
6번 3
7번 2

8번
8-1 string
8-2 long
8-3 float
8-4 double
9번 =은 =앞에 수와 =뒤에 수가 같게 만드는 것이고 ==은 앞뒤가 같은지 확인 하는것이다.
10번 지역 변수로 사용,선언과 동시에 초기화
11번
            Write("inch를 입력해주세요 : ");
            string s1 = ReadLine();
            float d1 = float.Parse(s1);
            d1 *= 2.54f;
            WriteLine(d1);
12번
            Write("Kg를 입력해주세요 : ");
            string s1 = ReadLine();
            float d1 = float.Parse(s1);
            d1 *= 2.20462262f;
            WriteLine(d1);
13번
            Write("반지름을 입력해주세요 : ");
            string s2 = ReadLine();
            float d2 = float.Parse(s2);
            float a = 2f * 3.14f * d2;
            WriteLine("둘레 : "+ a.ToString());
            float b = 3.14f * d2 *d2;
            Write("넓이 : " + b.ToString());
 */
//int a = int.MinValue;
//WriteLine(a);

//string s1 = ReadLine();
//string s2 = ReadLine();
//double d1 = double.Parse(s1);
//double d2 = double.Parse(s2);
//WriteLine(d1 + d2);
//WriteLine(d1 - d2);
//WriteLine(d1 * d2);
//WriteLine((d1 / d2).ToString("0,00"));

//WriteLine(string.Format("{0:X}", 1000));
#endregion

#region 3월22일 수업
/*
             //계산기
              string a = Console.ReadLine();
            double n1 = double.Parse(a);

            string b = Console.ReadLine();
            double n2 = double.Parse(b);

            Console.WriteLine(n1 + n2);
            Console.WriteLine(n1 - n2);
            Console.WriteLine(n1 * n2);
            Console.WriteLine(n1 / n2);
            Console.WriteLine(int.Parse("52"));
            Console.WriteLine(long.Parse("273"));
            Console.WriteLine(float.Parse("52.273"));
            Console.WriteLine(float.Parse("103.32"));

           //강제 형 변환
            int a = 0;
            double b = a;

            double c = 0;
            int d = (int)c;
           var numberA = 100L; 
            var unmberB = 100.0;
            var unmberC = 100.0F;
 
            //변수를 선언 합니다.
             //int _int = 0;
            //long _long =0;
            //float _float = 0.11f;
            //double _double = 0.01;
            //char _char = '글';
            //string _string = "문자열";
            
            //출력
            //Console.WriteLine(_int.GetType());
            //Console.WriteLine(_long.GetType());
            //Console.WriteLine(_float.GetType());
            //Console.WriteLine(_double.GetType());
            //Console.WriteLine(_char.GetType());
            //Console.WriteLine(_string.GetType());

           //int a = 10;
            //Console.WriteLine(a++);
            //Console.WriteLine(++a);
            //Console.WriteLine(a--);
            //Console.WriteLine(--a);

           //string o = "Hello";
            //o = o + "World";
            //o = o+ "!";
            //Console.WriteLine(o);

            //int output = 0;
            //output = output + 52;
            //output = output + 273;
            //output = output + 103;
            //output += 52;
            //output += 273;
            //output += 103;
 
            //console.writeline(output);  //52+273+103
            Console.WriteLine("int: " + sizeof(int));
            Console.WriteLine("long: " + sizeof(long));
            Console.WriteLine("char: " + sizeof(char));
            Console.WriteLine("float: " + sizeof(float));
            Console.WriteLine("double: " + sizeof(double));
            Console.WriteLine("bool: " + sizeof(bool));
            int a = 3;
            Console.WriteLine(1 < a || a < 5);
       bool b1 = (1 <= 2);
       Console.WriteLine(b1);

       /*
       string s1 = "c#";
       string s2 = "Programming";
       //문자열 집합
       string s3 = s1 + " " + s2;
       //부분 문자열
       string s4 = s2.Substring(1, 3);
       //문자열 치환
       string s5 = s2.Replace("Pro", "PRO");
       //문자열 삭제
       s2.Remove(3);
       Console.WriteLine( "Hello      ".Trim());
       Console.WriteLine(s3);
       Console.WriteLine(s4);
       Console.WriteLine(s5);
       Console.WriteLine(s2.Remove(3));

       string s = "\"안녕하세요\""; //특수 코드 입력
       Console.WriteLine(s);

       Console.WriteLine("안녕하세요"[0]);  //첫번째 글자가 나온다.
       Console.WriteLine("안녕하세요"[1]);
       Console.WriteLine("안녕하세요"[2]);
       Console.WriteLine("안녕하세요"[3]);
       Console.WriteLine("안녕하세요"[4]);

       char c = 'ㄱ';
       char a = '힣';
       Console.WriteLine((int)c);
       Console.WriteLine((int)a);
       */
#endregion

