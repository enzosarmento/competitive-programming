#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0)
#define endl '\n'
#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

class Project {
  public:
    int programmingRequirements;
    int designerRequirements;

};

class Employee {
  protected:
    int valuePerProject;
    int amountReceived;

  public:
    bool capacity(Project p) {
      return false;
    }

    void receiveReward() {
      this->amountReceived += valuePerProject;
    }

    int getAmoutReceived() {
      return this->amountReceived;
    }
};

class Developer : public Employee {
  int programmingSkills;

  public:
    Developer(int valuePerProject, int programmingSkills) {
      this->amountReceived = 0;
      this->valuePerProject = valuePerProject;
      this->programmingSkills = programmingSkills;
    }

    bool capacity(Project p) {
      return (this->programmingSkills >= p.programmingRequirements);
    }
};

class Designer : public Employee {
  int designSkills;

  public:
    Designer(int valuePerProject, int designSkills) {
      this->amountReceived = 0;
      this->valuePerProject = valuePerProject;
      this->designSkills = designSkills;
    }

    bool capacity(Project p) {
      return (this->designSkills >= p.designerRequirements);
    }
};

int main() { _;

  int valuePerProject, skill;

  cin >> valuePerProject >> skill;
  Developer developer = Developer(valuePerProject, skill);

  cin >> valuePerProject >> skill;
  Designer designer = Designer(valuePerProject, skill);

  int n; cin >> n;

  for(int i = 0; i < n; i++) {
    int p, d; cin >> p >> d;
    Project project;
    project.programmingRequirements = p;
    project.designerRequirements = d;

    if(developer.capacity(project) && designer.capacity(project)) {
      developer.receiveReward();
      designer.receiveReward();
    }

  }

  cout << "Programador: R$ " << developer.getAmoutReceived() << endl;
  cout << "Designer: R$ " << designer.getAmoutReceived() << endl;

  return 0;
}