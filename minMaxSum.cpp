void miniMaxSum(vector<int> arr) {

    int maxLength = 5;
    long max = 1, min = arr[0], maxSum = 0, minSum = 0;

    for (int i = 0; i < maxLength; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        maxSum += arr[i];
    }

    minSum = maxSum - max;
    maxSum -= min;
    cout << minSum << ' ' << maxSum;

}
