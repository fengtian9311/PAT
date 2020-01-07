#include <bits/stdc++.h>
using namespace std;
int gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
struct Fraction {
    bool vaild = 1;
    long long int up, dowm, num;
    string print_f() {
        string out;
        if (!vaild) {
            out = "Inf";
            return out;
        }
        int g = abs(gcd(up, dowm));
        up /= g;
        dowm /= g;
        num = up / dowm;
        up %= dowm;
        if (num == 0) {
            if (up < 0)
                out = "(" + to_string(up) + "/" + to_string(dowm) + ")";
            if (up == 0)
                out = "0";
            if (up > 0)
                out = to_string(up) + "/" + to_string(dowm);
        } else {
            if (up == 0 && num > 0)
                out = to_string(num);
            if (up == 0 && num < 0)
                out = "(" + to_string(num) + ")";
            if (up != 0 && num > 0)
                out = to_string(num) + " " + to_string(up) + "/" +
                      to_string(dowm);
            if (up != 0 && num < 0)
                out = "(" + to_string(num) + " " + to_string(-up) + "/" +
                      to_string(dowm) + ")";
        }
        return out;
    }
} f1, f2, f_add, f_sub, f_mult, f_div;
struct Fraction add(struct Fraction a, struct Fraction b, bool is_add) {
    struct Fraction out;
    if (!is_add)
        b.up = -b.up;
    out.dowm = a.dowm * b.dowm;
    out.up = a.up * b.dowm + b.up * a.dowm;
    return out;
}
struct Fraction mult(struct Fraction a, struct Fraction b, bool is_mult) {
    struct Fraction out;
    if (!is_mult) {
        swap(b.up, b.dowm);
        if (b.up * b.dowm < 0) {
            b.up = -b.up;
            b.dowm = -b.dowm;
        }
    }
    if (b.dowm == 0)
        out.vaild = 0;
    out.dowm = a.dowm * b.dowm;
    out.up = a.up * b.up;
    return out;
}

int main() {
    scanf("%lld/%lld %lld/%lld", &f1.up, &f1.dowm, &f2.up, &f2.dowm);
    f_add = add(f1, f2, 1);
    f_sub = add(f1, f2, 0);
    f_mult = mult(f1, f2, 1);
    f_div = mult(f1, f2, 0);
    string f1_s = f1.print_f();
    string f2_s = f2.print_f();
    cout << f1_s << " + " << f2_s << " = " << f_add.print_f() << endl;
    cout << f1_s << " - " << f2_s << " = " << f_sub.print_f() << endl;
    cout << f1_s << " * " << f2_s << " = " << f_mult.print_f() << endl;
    cout << f1_s << " / " << f2_s << " = " << f_div.print_f();
    return 0;
}