template<class F>
void Swap(F* x, F* y)
{
	F z(*x);
	*x = *y;
	*y = z;
}