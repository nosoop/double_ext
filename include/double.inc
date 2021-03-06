#if defined _double_included
 #endinput
#endif
#define _double_included

methodmap Double < Handle
{
	public native Double();

	public static native Double FromString(char[] value);
	public static native Double FromInt(int value);
	public static native Double FromFloat(float value);

	public native void ToString(char[] buffer, int maxlen);
	public native int ToInt();
	public native float ToFloat();

	public static native bool GreaterThan(Double left, Double right);
	public static native bool LessThan(Double left, Double right);
	public static native bool EqualTo(Double left, Double right);

	public native Double Clone();

	public native Double AbsoluteRef();
	public static native Double Absolute(Double value);

	public native Double ModuloRef(Double denominator);
	public static native Double Modulo(Double number, Double denominator);

	public native Double AddRef(Double right);
	public static native Double Add(Double left, Double right);

	public native Double SubtractRef(Double right);
	public static native Double Subtract(Double left, Double right);
	
	public native Double MultiplyRef(Double right);
	public static native Double Multiply(Double left, Double right);

	public native Double DivideRef(Double right);
	public static native Double Divide(Double left, Double right);

	public native Double PowRef(Double right);
	public static native Double Pow(Double left, Double right);

	public native Double SquareRootRef();
	public static native Double SquareRoot(Double right);

	public native Double AtanRef();
	public static native Double Atan(Double right);
    
	public native Double Atan2Ref(Double right);
	public static native Double Atan2(Double left, Double right);

	public native Double SineRef();
	public static native Double Sine(Double angle);

	public native Double ArcSineRef();
	public static native Double ArcSine(Double angle);

	public native Double TangentRef();
	public static native Double Tangent(Double angle);

	public native Double CosineRef();
	public static native Double Cosine(Double angle);

	public native Double ArcCosineRef();
	public static native Double ArcCosine(Double angle);

	property bool IsNaN
    {
        public native get();
    }
}

stock bool operator==(Double left, Double right)
{
	return Double.EqualTo(left, right);
}

stock bool operator!=(Double left, Double right)
{
	return !Double.EqualTo(left, right);
}

stock bool operator>(Double left, Double right)
{
	return Double.GreaterThan(left, right);
}

stock bool operator>=(Double left, Double right)
{
	return (Double.GreaterThan(left, right) || Double.EqualTo(left, right));
}

stock bool operator<(Double left, Double right)
{
	return Double.LessThan(left, right);
}

stock bool operator<=(Double left, Double right)
{
	return (Double.LessThan(left, right) || Double.EqualTo(left, right));
}

stock bool operator!(Double value)
{
	return Double.ToInt();
}
