#include "../UnitTest.h"
#include "../../content/geometry/insidePolygon.h"
#include <fstream>
#include <sstream>

const int tweaks = 5;

class test_insidePolygon :
	public UnitTest
{
public:
	vector<vector<Point<double> > > polys;
	vector<string> strings;
	vector<Point<double> > points;
	vector<int> answers;

	test_insidePolygon() : UnitTest("test_insidePolygon") {
		ifstream in("insidePolygon.in");
		int n;
		while (in >> n) {
			vector<Point<double> > poly(n);
			stringstream ss;
			rep(i,0,n) {
				in >> poly[i];
				ss << poly[i] << " ";
			}
			int q;
			in >> q;
			Point<double> p;
			rep(i,0,q) {
				in >> p;
				polys.push_back(poly);
				strings.push_back(ss.str());
				points.push_back(p);
			}
		}
		in.close();

		ifstream out("insidePolygon.out");
		answers.resize(points.size());
		rep(i,0,answers.size()) {
			out >> answers[i];
		}
	}

	virtual ~test_insidePolygon()
	{
	}

	virtual void run(int c)
	{
		if (c < points.size()) {
			bool a = insidePolygon(polys[c].begin(),
					polys[c].end(),points[c],false,1e-10);
			check(a, (bool)answers[c], strings[c]);
		} else { 
			vector<Point<double> > poly(2+rand()%20);
			trav(i,poly) *i = Point<double>(rand()%10,rand()%10);
			Point<double> p(rand()%10,rand()%10);
			bool a = insidePolygon(poly.begin(),poly.end(),p,true,1e-10);
			for (int i = 0; i < 10; ++i) {
				double alpha = rand()%1000/1000.0;
				Point<double> D(rand()%10,rand()%10);
				trav(i,poly) *i = i->rotate(alpha)+D;
				p = p.rotate(alpha)+D;
				check(insidePolygon(poly.begin(),poly.end(),p,true,1e-10),a);
			}
		}
	}

	virtual int getCount() const
	{
		return points.size() + 20;
	}
};

KACTL_AUTOREGISTER_TEST(test_insidePolygon);
