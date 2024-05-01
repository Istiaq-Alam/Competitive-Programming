#include <iostream>
#include <vector>

using namespace std;

int solve_case(int N, vector<int>& A, vector<int>& B) {
    vector<int> prefix_a(N + 1, 0);
    vector<int> prefix_b(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        prefix_a[i] = prefix_a[i - 1] + A[i - 1];
        prefix_b[i] = prefix_b[i - 1] + B[i - 1];
    }

    int max_length = 0;

    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; ++j) {
            int sum_a = prefix_a[j] - prefix_a[i - 1];
            int sum_b = prefix_b[j] - prefix_b[i - 1];

            if (sum_a == sum_b) {
                int length_a = i - 1;
                int length_b = N - j;
                max_length = max(max_length, length_a + length_b);
            }
        }
    }

    return N - max_length;
}

int main() {
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; ++case_num) {
        int N;
        cin >> N;

        vector<int> A(N);
        vector<int> B(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        int result = solve_case(N, A, B);
        cout << "Case " << case_num << ": " << result << endl;
    }

    return 0;
}
