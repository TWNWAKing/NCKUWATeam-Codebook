# Really fast arthimetic calculations
from decimal import Decimal, getcontext
getcontext().prec = 1000000000
getcontext().Emax = 9999999999
# X = Decimal(X)