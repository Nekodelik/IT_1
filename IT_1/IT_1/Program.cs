using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IT_1
{
    class Price_counter
    {
        double u_electricity_value;
        const double electricity_price = 0.75;
        double Total_price = 0;


        public void Math_price()
        {

        }

        public void Math_price_over()
        {

        }

        public void Write_result()
        {

        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.ForegroundColor = ConsoleColor.Magenta;
            Console.WriteLine("Press Esc to exit or EnyKey to continuation");
            do
            {
                Console.ResetColor();
                Console.WriteLine("Hi!/n plese enter u meter:");
                Price_counter User_electricity_price = new Price_counter();
                double user_mater = 0;
                try
                {

                }
                catch (FormatException format)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine(format.Message);
                    Console.WriteLine("use only numbers and , as split" + "\n");
                }
                catch (Exception ex)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine("Error: " + ex.Message);
                }
            } while (Console.ReadKey().Key != ConsoleKey.Escape);
        }
    }
}
