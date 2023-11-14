int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int ans = 0;
    int index[128] = {0};  // the index of character

    for(int j = 0, i = 0; j < n; j++){
        if(index[s[j]])
            i = i > index[s[j]] ? i : index[s[j]];
        ans = ans > (j - i + 1) ? ans : (j - i + 1);
        index[s[j]] = j + 1;
    }
    return ans;
}
