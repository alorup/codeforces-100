from pathlib import Path

root = Path("/workspaces/codeforces-100")
(root / "c").mkdir(exist_ok=True)
(root / "cpp").mkdir(exist_ok=True)
(root / "python").mkdir(exist_ok=True)

files = {
    "c/91_t_primes_230B.c": """#include <stdio.h>
#include <stdlib.h>

static int is_prime(int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

static unsigned long long isqrt_ull(unsigned long long x) {
    unsigned long long lo = 0, hi = 1000000ULL;
    while (lo < hi) {
        unsigned long long mid = (lo + hi + 1) / 2;
        if (mid * mid <= x) lo = mid;
        else hi = mid - 1;
    }
    return lo;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; ++i) {
        unsigned long long x;
        scanf("%llu", &x);
        unsigned long long r = isqrt_ull(x);
        if (r * r != x || r < 2) {
            printf("NO\\n");
        } else {
            printf("%s\\n", is_prime((int)r) ? "YES" : "NO");
        }
    }
    return 0;
}
""",
    "cpp/91_t_primes_230B.cpp": """#include <bits/stdc++.h>
using namespace std;

static bool is_prime(long long x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

static long long isqrt_ll(long long x) {
    long long lo = 0, hi = 1000000LL;
    while (lo < hi) {
        long long mid = (lo + hi + 1) / 2;
        if (mid * mid <= x) lo = mid;
        else hi = mid - 1;
    }
    return lo;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        long long r = isqrt_ll(x);
        if (r * r != x || r < 2) {
            cout << "NO\\n";
        } else {
            cout << (is_prime(r) ? "YES" : "NO") << '\\n';
        }
    }
    return 0;
}
""",
    "python/91_t_primes_230B.py": """import math
import sys

n = int(sys.stdin.buffer.readline())
values = list(map(int, sys.stdin.buffer.readline().split()))

limit = 10**6
is_prime = [True] * (limit + 1)
is_prime[0] = is_prime[1] = False
for i in range(2, int(math.isqrt(limit)) + 1):
    if is_prime[i]:
        for j in range(i * i, limit + 1, i):
            is_prime[j] = False

for x in values:
    r = math.isqrt(x)
    if r * r != x or r < 2:
        print('NO')
    else:
        print('YES' if is_prime[r] else 'NO')
""",
    "c/92_sereja_and_suffixes_368B.c": """#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;
    int *a = (int *)malloc(sizeof(int) * (n + 1));
    int *ans = (int *)malloc(sizeof(int) * (n + 2));
    int *seen = (int *)calloc(100001, sizeof(int));
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    int distinct = 0;
    for (int i = n; i >= 1; --i) {
        if (!seen[a[i]]) {
            seen[a[i]] = 1;
            ++distinct;
        }
        ans[i] = distinct;
    }
    for (int i = 0; i < m; ++i) {
        int l;
        scanf("%d", &l);
        printf("%d\\n", ans[l]);
    }
    free(a);
    free(ans);
    free(seen);
    return 0;
}
""",
    "cpp/92_sereja_and_suffixes_368B.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), ans(n + 2);
    vector<int> seen(100001, 0);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    int distinct = 0;
    for (int i = n; i >= 1; --i) {
        if (!seen[a[i]]) {
            seen[a[i]] = 1;
            ++distinct;
        }
        ans[i] = distinct;
    }
    while (m--) {
        int l;
        cin >> l;
        cout << ans[l] << '\\n';
    }
    return 0;
}
""",
    "python/92_sereja_and_suffixes_368B.py": """import sys

input = sys.stdin.readline
n, m = map(int, input().split())
a = [0] + list(map(int, input().split()))
ans = [0] * (n + 2)
seen = set()
distinct = 0
for i in range(n, 0, -1):
    if a[i] not in seen:
        seen.add(a[i])
        distinct += 1
    ans[i] = distinct
for _ in range(m):
    l = int(input())
    print(ans[l])
""",
    "c/93_flipping_game_327A.c": """#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int total_ones = 0;
    int best = -1000000;
    int cur = -1000000;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        total_ones += x;
        int val = (x == 0) ? 1 : -1;
        if (cur < 0) cur = val;
        else cur += val;
        if (cur > best) best = cur;
    }
    printf("%d\\n", total_ones + best);
    return 0;
}
""",
    "cpp/93_flipping_game_327A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int total_ones = 0;
    int best = -1000000;
    int cur = -1000000;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        total_ones += x;
        int val = (x == 0) ? 1 : -1;
        cur = max(val, cur + val);
        best = max(best, cur);
    }
    cout << total_ones + best << '\\n';
    return 0;
}
""",
    "python/93_flipping_game_327A.py": """n = int(input())
a = list(map(int, input().split()))

total_ones = sum(a)
best = cur = -10**9
for x in a:
    val = 1 if x == 0 else -1
    cur = max(val, cur + val)
    best = max(best, cur)
print(total_ones + best)
""",
    "c/94_free_cash_237A.c": """#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int freq[1440] = {0};
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        int h, m;
        scanf("%d %d", &h, &m);
        int t = h * 60 + m;
        ++freq[t];
        if (freq[t] > ans) ans = freq[t];
    }
    printf("%d\\n", ans);
    return 0;
}
""",
    "cpp/94_free_cash_237A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> freq(24 * 60, 0);
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        int h, m;
        cin >> h >> m;
        int t = h * 60 + m;
        ++freq[t];
        ans = max(ans, freq[t]);
    }
    cout << ans << '\\n';
    return 0;
}
""",
    "python/94_free_cash_237A.py": """n = int(input())
freq = [0] * (24 * 60)
ans = 1
for _ in range(n):
    h, m = map(int, input().split())
    t = h * 60 + m
    freq[t] += 1
    ans = max(ans, freq[t])
print(ans)
""",
    "c/95_polo_the_penguin_and_matrix_289B.c": """#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n, m, d;
    if (scanf("%d %d %d", &n, &m, &d) != 3) return 0;
    int total = n * m;
    int *a = (int *)malloc(sizeof(int) * total);
    for (int i = 0; i < total; ++i) scanf("%d", &a[i]);
    int base = a[0] % d;
    for (int i = 1; i < total; ++i) {
        if (a[i] % d != base) {
            printf("-1\\n");
            free(a);
            return 0;
        }
    }
    qsort(a, total, sizeof(int), cmp);
    int target = a[total / 2];
    long long ans = 0;
    for (int i = 0; i < total; ++i) ans += llabs((long long)a[i] - target) / d;
    printf("%lld\\n", ans);
    free(a);
    return 0;
}
""",
    "cpp/95_polo_the_penguin_and_matrix_289B.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(n * m);
    for (int i = 0; i < n * m; ++i) cin >> a[i];
    int base = a[0] % d;
    for (int x : a) {
        if (x % d != base) {
            cout << -1 << '\\n';
            return 0;
        }
    }
    sort(a.begin(), a.end());
    int target = a[a.size() / 2];
    long long ans = 0;
    for (int x : a) ans += llabs((long long)x - target) / d;
    cout << ans << '\\n';
    return 0;
}
""",
    "python/95_polo_the_penguin_and_matrix_289B.py": """import sys

data = list(map(int, sys.stdin.buffer.read().split()))
n, m, d = data[0], data[1], data[2]
a = data[3:]
base = a[0] % d
if any(x % d != base for x in a):
    print(-1)
else:
    a.sort()
    target = a[len(a) // 2]
    print(sum(abs(x - target) // d for x in a))
""",
    "c/96_jzzhu_and_sequences_450B.c": """#include <stdio.h>

int main(void) {
    long long x, y, n;
    if (scanf("%lld %lld", &x, &y) != 2) return 0;
    if (scanf("%lld", &n) != 1) return 0;
    const long long MOD = 1000000007LL;
    long long seq[6] = {x, y, y - x, -x, -y, x - y};
    long long ans = seq[(n - 1) % 6];
    ans %= MOD;
    if (ans < 0) ans += MOD;
    printf("%lld\\n", ans);
    return 0;
}
""",
    "cpp/96_jzzhu_and_sequences_450B.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x, y, n;
    cin >> x >> y >> n;
    const long long MOD = 1000000007LL;
    vector<long long> seq = {x, y, y - x, -x, -y, x - y};
    long long ans = seq[(n - 1) % 6];
    ans %= MOD;
    if (ans < 0) ans += MOD;
    cout << ans << '\\n';
    return 0;
}
""",
    "python/96_jzzhu_and_sequences_450B.py": """x, y = map(int, input().split())
n = int(input())
MOD = 10**9 + 7
seq = [x, y, y - x, -x, -y, x - y]
ans = seq[(n - 1) % 6] % MOD
print(ans)
""",
    "c/97_appleman_and_card_game_462B.c": """#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (y > x) - (y < x);
}

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    char s[100005];
    scanf("%s", s);
    int cnt[26] = {0};
    for (int i = 0; s[i]; ++i) ++cnt[s[i] - 'A'];
    qsort(cnt, 26, sizeof(int), cmp);
    long long ans = 0;
    for (int i = 0; i < 26 && k > 0; ++i) {
        int take = cnt[i] < k ? cnt[i] : k;
        ans += 1LL * take * cnt[i];
        k -= take;
    }
    printf("%lld\\n", ans);
    return 0;
}
""",
    "cpp/97_appleman_and_card_game_462B.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (char c : s) ++cnt[c - 'A'];
    sort(cnt.begin(), cnt.end(), greater<int>());
    long long ans = 0;
    for (int f : cnt) {
        if (k <= 0) break;
        int take = min(k, f);
        ans += 1LL * take * f;
        k -= take;
    }
    cout << ans << '\\n';
    return 0;
}
""",
    "python/97_appleman_and_card_game_462B.py": """import sys
from collections import Counter

n, k = map(int, input().split())
s = input().strip()
cnt = Counter(s)
ans = 0
for f in sorted(cnt.values(), reverse=True):
    if k <= 0:
        break
    take = min(k, f)
    ans += take * f
    k -= take
print(ans)
""",
    "c/98_sort_the_array_451B.c": """#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long *a = (long long *)malloc(sizeof(long long) * n);
    long long *b = (long long *)malloc(sizeof(long long) * n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
        b[i] = a[i];
    }
    qsort(b, n, sizeof(long long), cmp);
    int l = 0;
    while (l < n && a[l] == b[l]) ++l;
    if (l == n) {
        printf("yes\\n1 1\\n");
        free(a);
        free(b);
        return 0;
    }
    int r = n - 1;
    while (r >= 0 && a[r] == b[r]) --r;
    int left = l;
    int right = r;
    for (int i = left; i <= right; ++i) {
        a[i] = b[left + (right - i)];
    }
    int ok = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            ok = 0;
            break;
        }
    }
    if (ok) {
        printf("yes\\n%d %d\\n", left + 1, right + 1);
    } else {
        printf("no\\n");
    }
    free(a);
    free(b);
    return 0;
}
""",
    "cpp/98_sort_the_array_451B.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int l = 0;
    while (l < n && a[l] == b[l]) ++l;
    if (l == n) {
        cout << "yes\\n1 1\\n";
        return 0;
    }
    int r = n - 1;
    while (r >= 0 && a[r] == b[r]) --r;
    reverse(a.begin() + l, a.begin() + r + 1);
    if (a == b) {
        cout << "yes\\n" << l + 1 << ' ' << r + 1 << '\\n';
    } else {
        cout << "no\\n";
    }
    return 0;
}
""",
    "python/98_sort_the_array_451B.py": """n = int(input())
a = list(map(int, input().split()))
b = sorted(a)
l = 0
while l < n and a[l] == b[l]:
    l += 1
if l == n:
    print('yes')
    print(1, 1)
else:
    r = n - 1
    while r >= 0 and a[r] == b[r]:
        r -= 1
    a[l:r + 1] = reversed(a[l:r + 1])
    if a == b:
        print('yes')
        print(l + 1, r + 1)
    else:
        print('no')
""",
    "c/99_sereja_and_bottles_315A.c": """#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b) ++ans;
    }
    printf("%d\\n", ans);
    return 0;
}
""",
    "cpp/99_sereja_and_bottles_315A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (a == b) ++ans;
    }
    cout << ans << '\\n';
    return 0;
}
""",
    "python/99_sereja_and_bottles_315A.py": """n = int(input())
ans = 0
for _ in range(n):
    a, b = map(int, input().split())
    if a == b:
        ans += 1
print(ans)
""",
    "c/100_adding_digits_260A.c": """#include <stdio.h>

int main(void) {
    long long a, b;
    int n;
    if (scanf("%lld %lld %d", &a, &b, &n) != 3) return 0;
    long long x = a;
    for (int i = 0; i < n; ++i) {
        int found = 0;
        for (int digit = 0; digit <= 9; ++digit) {
            long long next = x * 10 + digit;
            if (next % b == 0) {
                x = next;
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("-1\\n");
            return 0;
        }
    }
    printf("%lld\\n", x);
    return 0;
}
""",
    "cpp/100_adding_digits_260A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b;
    int n;
    cin >> a >> b >> n;
    long long x = a;
    for (int i = 0; i < n; ++i) {
        bool ok = false;
        for (int digit = 0; digit <= 9; ++digit) {
            long long next = x * 10 + digit;
            if (next % b == 0) {
                x = next;
                ok = true;
                break;
            }
        }
        if (!ok) {
            cout << -1 << '\\n';
            return 0;
        }
    }
    cout << x << '\\n';
    return 0;
}
""",
    "python/100_adding_digits_260A.py": """a, b, n = map(int, input().split())
x = a
for _ in range(n):
    for digit in range(10):
        if (x * 10 + digit) % b == 0:
            x = x * 10 + digit
            break
    else:
        print(-1)
        break
else:
    print(x)
""",
}

for rel_path, content in files.items():
    (root / rel_path).write_text(content, encoding="utf-8")
