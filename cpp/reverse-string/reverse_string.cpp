#include "reverse_string.h"
#include <algorithm>
using namespace std;

namespace reverse_string {
    string reverse_string(string s) {
        reverse(s.begin(), s.end());
        return s;
    }
}  // namespace reverse_string
