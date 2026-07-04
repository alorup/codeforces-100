from pathlib import Path

root = Path("/workspaces/codeforces-100")
(root / "c").mkdir(exist_ok=True)
(root / "cpp").mkdir(exist_ok=True)
(root / "python").mkdir(exist_ok=True)

files = {
    "c/81_easy_number_challenge_236B.c": """#include <stdio.h>

static int divisor_count(int x) {
    int cnt = 0;
    for (int d = 1; d * d <= x; ++d) {
        if (x % d == 0) {
            ++cnt;
            if (d * d != x) ++cnt;
        }
    }
    return cnt;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                ans += divisor_count(i * j * k);
            }
        }
    }
    printf("%lld\n", ans % 1073741824LL);
    return 0;
}
""",
    "cpp/81_easy_number_challenge_236B.cpp": """#include <bits/stdc++.h>
using namespace std;

static int divisor_count(int x) {
    int cnt = 0;
    for (int d = 1; d * d <= x; ++d) {
        if (x % d == 0) {
            ++cnt;
            if (d * d != x) ++cnt;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                ans += divisor_count(i * j * k);
            }
        }
    }
    cout << (ans % 1073741824LL) << '\n';
    return 0;
}
""",
    "python/81_easy_number_challenge_236B.py": """def divisor_count(x: int) -> int:
    cnt = 0
    d = 1
    while d * d <= x:
        if x % d == 0:
            cnt += 1
            if d * d != x:
                cnt += 1
        d += 1
    return cnt

n = int(input().strip())
ans = 0
for i in range(1, n + 1):
    for j in range(1, n + 1):
        for k in range(1, n + 1):
            ans += divisor_count(i * j * k)
print(ans % 1073741824)
""",
    "c/82_pythagorean_theorem_ii_304A.c": """#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int count = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            long long c2 = 1LL * a * a + 1LL * b * b;
            long long c = (long long)llround(sqrt((double)c2));
            if (c * c == c2 && c <= n && c > b) {
                ++count;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
""",
    "cpp/82_pythagorean_theorem_ii_304A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int count = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            long long c2 = 1LL * a * a + 1LL * b * b;
            long long c = (long long)llround(sqrt((long double)c2));
            if (c * c == c2 && c <= n && c > b) {
                ++count;
            }
        }
    }
    cout << count << '\n';
    return 0;
}
""",
    "python/82_pythagorean_theorem_ii_304A.py": """import math

n = int(input().strip())
count = 0
for a in range(1, n + 1):
    for b in range(a, n + 1):
        c2 = a * a + b * b
        c = math.isqrt(c2)
        if c * c == c2 and c <= n and c > b:
            count += 1
print(count)
""",
    "c/83_cards_with_numbers_254A.c": """#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int m = 2 * n;
    int *a = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; ++i) scanf("%d", &a[i]);

    int max_value = 1000000;
    int *cnt = (int *)calloc(max_value + 1, sizeof(int));
    int *first = (int *)malloc(sizeof(int) * (max_value + 1));
    int *second = (int *)malloc(sizeof(int) * (max_value + 1));
    for (int i = 0; i < m; ++i) {
        int x = a[i];
        if (cnt[x] == 0) {
            first[x] = i + 1;
        } else if (cnt[x] == 1) {
            second[x] = i + 1;
        }
        ++cnt[x];
    }

    for (int x = 1; x <= max_value; ++x) {
        if (cnt[x] == 2) {
            printf("%d %d\n", first[x], second[x]);
        }
    }

    free(a);
    free(cnt);
    free(first);
    free(second);
    return 0;
}
""",
    "cpp/83_cards_with_numbers_254A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int m = 2 * n;
    vector<int> a(m);
    for (int i = 0; i < m; ++i) cin >> a[i];
    unordered_map<int, vector<int>> pos;
    for (int i = 0; i < m; ++i) pos[a[i]].push_back(i + 1);
    vector<int> keys;
    for (auto &p : pos) keys.push_back(p.first);
    sort(keys.begin(), keys.end());
    for (int x : keys) {
        if (pos[x].size() == 2) {
            cout << pos[x][0] << ' ' << pos[x][1] << '\n';
        }
    }
    return 0;
}
""",
    "python/83_cards_with_numbers_254A.py": """import sys
from collections import defaultdict

data = list(map(int, sys.stdin.buffer.read().split()))
n = data[0]
a = data[1:]
pos = defaultdict(list)
for i, x in enumerate(a, start=1):
    pos[x].append(i)
for x in sorted(pos):
    if len(pos[x]) == 2:
        print(pos[x][0], pos[x][1])
""",
    "c/84_domino_353A.c": """#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &a[i], &b[i]);
        sum1 += a[i];
        sum2 += b[i];
    }
    int diff = sum1 - sum2;
    if (diff == 0) {
        printf("YES\n");
    } else if (diff % 2 != 0) {
        printf("NO\n");
    } else {
        int ok = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] - b[i] == diff / 2) {
                ok = 1;
                break;
            }
        }
        printf("%s\n", ok ? "YES" : "NO");
    }
    free(a);
    free(b);
    return 0;
}
""",
    "cpp/84_domino_353A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int,int>> dom(n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> dom[i].first >> dom[i].second;
        sum1 += dom[i].first;
        sum2 += dom[i].second;
    }
    int diff = sum1 - sum2;
    if (diff == 0) {
        cout << "YES\n";
        return 0;
    }
    if (diff % 2 != 0) {
        cout << "NO\n";
        return 0;
    }
    bool ok = false;
    for (auto &d : dom) {
        if (d.first - d.second == diff / 2) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << "\n";
    return 0;
}
""",
    "python/84_domino_353A.py": """n = int(input().strip())
dom = [tuple(map(int, input().split())) for _ in range(n)]
sum1 = sum(a for a, _ in dom)
sum2 = sum(b for _, b in dom)
diff = sum1 - sum2
if diff == 0:
    print('YES')
elif diff % 2 != 0:
    print('NO')
else:
    ok = any(a - b == diff // 2 for a, b in dom)
    print('YES' if ok else 'NO')
""",
    "c/85_cinema_line_349A.c": """#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int c25 = 0, c50 = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if (x == 25) {
            ++c25;
        } else if (x == 50) {
            if (c25 == 0) {
                printf("NO\n");
                return 0;
            }
            --c25;
            ++c50;
        } else {
            if (c50 > 0 && c25 > 0) {
                --c50;
                --c25;
            } else if (c25 >= 3) {
                c25 -= 3;
            } else {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
""",
    "cpp/85_cinema_line_349A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int c25 = 0, c50 = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 25) ++c25;
        else if (x == 50) {
            if (c25 == 0) {
                cout << "NO\n";
                return 0;
            }
            --c25;
            ++c50;
        } else {
            if (c50 > 0 && c25 > 0) {
                --c50;
                --c25;
            } else if (c25 >= 3) {
                c25 -= 3;
            } else {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}
""",
    "python/85_cinema_line_349A.py": """n = int(input().strip())
arr = list(map(int, input().split()))
c25 = c50 = 0
for x in arr:
    if x == 25:
        c25 += 1
    elif x == 50:
        if c25 == 0:
            print('NO')
            break
        c25 -= 1
        c50 += 1
    else:
        if c50 > 0 and c25 > 0:
            c50 -= 1
            c25 -= 1
        elif c25 >= 3:
            c25 -= 3
        else:
            print('NO')
            break
else:
    print('YES')
""",
    "c/86_rank_list_166A.c": """#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int score;
    int penalty;
} Contestant;

static int cmp(const void *a, const void *b) {
    const Contestant *x = (const Contestant *)a;
    const Contestant *y = (const Contestant *)b;
    if (x->score != y->score) return y->score - x->score;
    return x->penalty - y->penalty;
}

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    Contestant *a = (Contestant *)malloc(sizeof(Contestant) * n);
    for (int i = 0; i < n; ++i) scanf("%d %d", &a[i].score, &a[i].penalty);
    qsort(a, n, sizeof(Contestant), cmp);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i].score == a[k - 1].score && a[i].penalty == a[k - 1].penalty) ++ans;
    }
    printf("%d\n", ans);
    free(a);
    return 0;
}
""",
    "cpp/86_rank_list_166A.cpp": """#include <bits/stdc++.h>
using namespace std;

struct Contestant { int score, penalty; };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<Contestant> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i].score >> a[i].penalty;
    sort(a.begin(), a.end(), [](const Contestant &x, const Contestant &y) {
        if (x.score != y.score) return x.score > y.score;
        return x.penalty < y.penalty;
    });
    int ans = 0;
    for (auto &c : a) {
        if (c.score == a[k - 1].score && c.penalty == a[k - 1].penalty) ++ans;
    }
    cout << ans << '\n';
    return 0;
}
""",
    "python/86_rank_list_166A.py": """n, k = map(int, input().split())
contestants = []
for _ in range(n):
    score, penalty = map(int, input().split())
    contestants.append((score, penalty))
contestants.sort(key=lambda x: (-x[0], x[1]))
target = contestants[k - 1]
print(sum(1 for c in contestants if c == target))
""",
    "c/87_cut_ribbon_189A.c": """#include <stdio.h>
#include <limits.h>

static int max_int(int a, int b) { return a > b ? a : b; }

int main(void) {
    int n, a, b, c;
    if (scanf("%d %d %d %d", &n, &a, &b, &c) != 4) return 0;
    int dp[4005];
    for (int i = 0; i <= n; ++i) dp[i] = INT_MIN / 2;
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (i >= a) dp[i] = max_int(dp[i], dp[i - a] + 1);
        if (i >= b) dp[i] = max_int(dp[i], dp[i - b] + 1);
        if (i >= c) dp[i] = max_int(dp[i], dp[i - c] + 1);
    }
    printf("%d\n", dp[n]);
    return 0;
}
""",
    "cpp/87_cut_ribbon_189A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, INT_MIN / 2);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
        if (i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
        if (i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
    }
    cout << dp[n] << '\n';
    return 0;
}
""",
    "python/87_cut_ribbon_189A.py": """n, a, b, c = map(int, input().split())
dp = [-(10**9)] * (n + 1)
dp[0] = 0
for i in range(1, n + 1):
    if i >= a:
        dp[i] = max(dp[i], dp[i - a] + 1)
    if i >= b:
        dp[i] = max(dp[i], dp[i - b] + 1)
    if i >= c:
        dp[i] = max(dp[i], dp[i - c] + 1)
print(dp[n])
""",
    "c/88_iq_test_287A.c": """#include <stdio.h>

int main(void) {
    char g[4][5];
    for (int i = 0; i < 4; ++i) scanf("%s", g[i]);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int cnt_hash = 0, cnt_dot = 0;
            for (int di = 0; di < 2; ++di) {
                for (int dj = 0; dj < 2; ++dj) {
                    if (g[i + di][j + dj] == '#') ++cnt_hash;
                    else ++cnt_dot;
                }
            }
            if (cnt_hash >= 3 || cnt_dot >= 3) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
""",
    "cpp/88_iq_test_287A.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> g(4);
    for (int i = 0; i < 4; ++i) cin >> g[i];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int cnt_hash = 0, cnt_dot = 0;
            for (int di = 0; di < 2; ++di) {
                for (int dj = 0; dj < 2; ++dj) {
                    if (g[i + di][j + dj] == '#') ++cnt_hash;
                    else ++cnt_dot;
                }
            }
            if (cnt_hash >= 3 || cnt_dot >= 3) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
""",
    "python/88_iq_test_287A.py": """grid = [input().strip() for _ in range(4)]
for i in range(3):
    for j in range(3):
        cnt_hash = sum(1 for di in range(2) for dj in range(2) if grid[i + di][j + dj] == '#')
        cnt_dot = 4 - cnt_hash
        if cnt_hash >= 3 or cnt_dot >= 3:
            print('YES')
            raise SystemExit
print('NO')
""",
    "c/89_building_permutation_285C.c": """#include <stdio.h>
#include <stdlib.h>

static int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    long long ans = 0;
    for (int i = 0; i < n; ++i) ans += abs(a[i] - (i + 1));
    printf("%lld\n", ans);
    free(a);
    return 0;
}
""",
    "cpp/89_building_permutation_285C.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    long long ans = 0;
    for (int i = 0; i < n; ++i) ans += abs(a[i] - (i + 1));
    cout << ans << '\n';
    return 0;
}
""",
    "python/89_building_permutation_285C.py": """n = int(input().strip())
a = list(map(int, input().split()))
a.sort()
print(sum(abs(x - i) for i, x in enumerate(a, start=1)))
""",
    "c/90_kuriyama_mirai_stones_433B.c": """#include <stdio.h>
#include <stdlib.h>

static int cmp_long_long(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n, q;
    if (scanf("%d %d", &n, &q) != 2) return 0;
    long long *a = (long long *)malloc(sizeof(long long) * n);
    long long *b = (long long *)malloc(sizeof(long long) * n);
    long long *pref = (long long *)malloc(sizeof(long long) * (n + 1));
    long long *pref_sorted = (long long *)malloc(sizeof(long long) * (n + 1));
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
        b[i] = a[i];
    }
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
    }
    qsort(b, n, sizeof(long long), cmp_long_long);
    for (int i = 0; i < n; ++i) {
        pref_sorted[i + 1] = pref_sorted[i] + b[i];
    }
    while (q--) {
        int type, l, r;
        scanf("%d %d %d", &type, &l, &r);
        long long sum = (type == 1 ? pref[r] - pref[l - 1] : pref_sorted[r] - pref_sorted[l - 1]);
        printf("%lld\n", sum);
    }
    free(a);
    free(b);
    free(pref);
    free(pref_sorted);
    return 0;
}
""",
    "cpp/90_kuriyama_mirai_stones_433B.cpp": """#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    b = a;
    sort(b.begin(), b.end());
    vector<long long> pref(n + 1), pref_sorted(n + 1);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
        pref_sorted[i + 1] = pref_sorted[i] + b[i];
    }
    while (q--) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) cout << pref[r] - pref[l - 1] << '\n';
        else cout << pref_sorted[r] - pref_sorted[l - 1] << '\n';
    }
    return 0;
}
""",
    "python/90_kuriyama_mirai_stones_433B.py": """n, q = map(int, input().split())
a = list(map(int, input().split()))
b = sorted(a)
pref = [0] * (n + 1)
pref_sorted = [0] * (n + 1)
for i, x in enumerate(a, start=1):
    pref[i] = pref[i - 1] + x
for i, x in enumerate(b, start=1):
    pref_sorted[i] = pref_sorted[i - 1] + x
for _ in range(q):
    t, l, r = map(int, input().split())
    if t == 1:
        print(pref[r] - pref[l - 1])
    else:
        print(pref_sorted[r] - pref_sorted[l - 1])
""",
}

for rel_path, content in files.items():
    (root / rel_path).write_text(content, encoding="utf-8")
