namespace lab
{
    public class Figure
    {
        private float x1, y1, x2, y2;

        public float Length()
        {
            return (float) Math.Sqrt((float) Math.Pow(x2 - x1, 2) + (float) Math.Pow(y2 - y1, 2));
        }

        public Figure()
        {
            x1 = y1 = x2 = y2 = 0;
        }

        public Figure(Figure a)
        {
            x1 = a.x1; x2 = a.x2;
            y1 = a.y1; y2 = a.y2;
        }

        public Figure(float x1, float y1, float x2, float y2)
        {
            this.x1 = x1; this.x2 = x2;
            this.y1 = y1; this.y2 = y2;
        }
    }

    public class Rhombus
    {
        private Figure p, q;

        public float Perimeter()
        {
            float halfP = p.Length() / 2.0f;
            float halfQ = q.Length() / 2.0f;
            
            float sideLength = (float) Math.Sqrt((halfP * halfP) + (halfQ * halfQ));
            
            return sideLength * 4.0f;
        }

        public float Area()
        {
            return p.Length() * q.Length() / 2.0f;
        }

        public Rhombus()
        {
            p = q = new Figure();
        }

        public Rhombus(Rhombus a)
        {
            p = a.p;
            q = a.q;
        }

        public Rhombus(Figure f1, Figure f2)
        {
            p = f1;
            q = f2;
        }
    }
}
