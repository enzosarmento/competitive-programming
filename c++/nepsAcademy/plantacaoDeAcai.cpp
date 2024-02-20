#include "template.h"

struct Point {
  double x, y;
};

class Circle {
  public:
    Point C;
    double R;
};

//Função que retorna a distância euclidiana entre dois pontos
double dist(const Point &a, const Point &b) {
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

//Função que verifica se o ponto está dentro ou nos limites do circulo
bool isInside(const Circle &c, const Point &p) {
  return dist(c.C, p) <=c.R;
}

Point getCircleCenter(double bx, double by, double cx, double cy) {
  double B = bx * bx + by * by;
  double C = cx * cx + cy * cy;
  double D = bx * cy - by * cx;

  return {
    (cy * B - by * C) / (2 * D),
    (bx * C - cx * B) / (2 * D)
  };
}

Circle circleFrom(const Point &A, const Point &B, const Point &C) {
  Point I = getCircleCenter(B.x - A.x, B.y - A.y, C.x - A.x, C.y - A.y);

  I.x += A.x;
  I.y += A.y;

  return { I, dist(I, A) };
}

Circle circleFrom(const Point &A, const Point &B) {
  Point C = { (A.x + B.x) / 2.0, (A.y + B.y) / 2.0 };

  return { C, dist(A, B) / 2.0 };
}

bool isValidCircle(const Circle &c, const vector<Point> &P) {
  for(const Point &p : P) {
    if(!isInside(c, p))
      return false;
  }
  return true;
}

Circle minCircleTrivial(vector<Point> &P) {
  assert(P.size() <= 3);
  if(P.empty()) {
    return {  { 0, 0 } , 0 };
  } else if(P.size() == 1) {
    return { P[0], 0 };
  } else if(P.size() == 2) {
    return circleFrom(P[0], P[1]);
  }

  for(int i = 0; i < 3; i++) {
    for(int j = i + 1; j < 3; j++) {

      Circle c = circleFrom(P[i], P[j]);
      if(isValidCircle(c, P));
        return c;
    }
  }
  return circleFrom(P[0], P[1], P[2]);
}

Circle welzlHelper(vector<Point> &P, vector<Point> R, int n) {
  if(n == 0 || R.size() == 3) {
    return minCircleTrivial(R);
  }

  int idx = rand() % n;
  Point p = P[idx];

  swap(P[idx], P[n - 1]);

  Circle d = welzlHelper(P, R, n - 1);

  if(isInside(d, p)) {
    return d;
  }

  R.push_back(p);

  return welzlHelper(P, R, n - 1);
}

Circle welzl(const vector<Point> &P) {
  vector<Point> pCopy = P;
  random_shuffle(pCopy.begin(), pCopy.end());
  return welzlHelper(pCopy, {}, pCopy.size());
}

int main() {

  int n; cin >> n;
  vector<Point> acais;

  for(int i = 0; i < n; i++) {
    double x, y; cin >> x >> y;
    Point p; p.x = x; p.y = y;

    acais.push_back(p);
  }

  Circle mec = welzl(acais);
  double meters = 2 * 3.14 * mec.R * 4;

  cout << fixed << setprecision(2) << mec.C.x << " " << mec.C.y << " ";
  cout << mec.R << " ";
  cout << meters << endl ;

  return 0;
}