class Fraction:

  def __init__(self, numerator: int, denominator: int) -> None:
    self.numerator = numerator
    self.denominator = denominator

  def __mul__(self, fraction) -> 'Fraction':
    c_numerator = self.numerator * fraction.numerator
    c_denominator = self.denominator * fraction.denominator

    return Fraction(c_numerator, c_denominator)

  def __truediv__(self, fraction) -> 'Fraction':
    c_numerator = self.numerator * fraction.denominator
    c_denominator = self.denominator * fraction.numerator

    return Fraction(c_numerator, c_denominator)


def main() -> None:
  a_numerator, a_denominator = map(int, input().split())
  b_numerator, b_denominator = map(int, input().split())

  fraction_a: 'Fraction' = Fraction(a_numerator, a_denominator)
  fraction_b: 'Fraction' = Fraction(b_numerator, b_denominator)

  op: str = input()

  if op == 'M':
    fraction_c: 'Fraction' = fraction_a * fraction_b
  else:
    fraction_c: 'Fraction' = fraction_a / fraction_b

  print(fraction_c.numerator, fraction_c.denominator)

if __name__ == "__main__":
  main()