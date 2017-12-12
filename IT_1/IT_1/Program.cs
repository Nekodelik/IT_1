using System;

namespace IT_1
{
    class Price_counter
    {
        double u_electricity_value;
        const double electricity_price = 0.75;
        double Total_price = 0;

        public static double Electricity_price => electricity_price;

        public double U_electricity_value { get => u_electricity_value; set => u_electricity_value = value; }

        public void Math_price()
        {
            Total_price += U_electricity_value * Electricity_price;
        }

        public void Math_price_over()
        {
            Total_price += 2 * U_electricity_value * Electricity_price;
        }

        public void Write_result()
        {
            Console.WriteLine("Your electricity price 0,75. Price over 100 is 2 times more");
            Console.WriteLine("Your total prise =>>" + Total_price + "\n");
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
                    user_mater = Convert.ToDouble(Console.ReadLine());
                    if (user_mater < 0)
                    {
                        Console.ForegroundColor = ConsoleColor.Red;
                        throw new Exception("Mater cannot be lower than 0" + "\n");
                        break;
                    }
                    Console.WriteLine("u_mater ==>" + user_mater.ToString());
                    if (user_mater > 100)
                    {
                        //electricity before 100
                        User_electricity_price.U_electricity_value = 100;
                        User_electricity_price.Math_price();
                        //electricity over 100
                        User_electricity_price.U_electricity_value = user_mater - 100;
                        User_electricity_price.Math_price_over();
                    }
                    else
                    {
                        User_electricity_price.U_electricity_value = user_mater;
                        User_electricity_price.Math_price();
                    }
                    User_electricity_price.Write_result();
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
