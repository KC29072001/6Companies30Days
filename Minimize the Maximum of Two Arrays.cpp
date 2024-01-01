#define ll long long
class Solution {
private:
    int gcd(int a, int b) {
        if (!b) return a;
        return gcd(b, a % b);
    }
    int lcm(ll a, ll b) {
        ll t = (a / gcd(a, b)) * b;
        return t > INT_MAX ? INT_MAX : t;
    }
public:
    int minimizeSet(int d1, int d2, int uc1, int uc2) {
        //def low, high
        int l = 1, r = INT_MAX, LCM = lcm(d1, d2);
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int a = mid / d1, b = mid / d2;
            if (uc1 <= mid - a && uc2 <= mid - b && uc1 + uc2 <= (mid - (mid / LCM))) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};