Using system;

class HeartShape
{
	static void Main()
	{
	DrawHeart(5, 5);
	}
static void DrawHeart(double x, double y)
	{
	const double R = 50;
	const double delta = Math.PI / 4;
	for (double angle = 0; angle < 2 * Math.PI;angle += delta)
		{
			double xPos = x + R * Math.Cos(angle);
			double yPos = y + R * Math.Sin(angle);
			Console.Write($"{xPos}, {yPos}");
		}
	}

}
