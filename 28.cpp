int strStr(string haystack, string needle) {
    auto indx = haystack.find(needle);
    if(indx == string::npos) return -1;
    return indx;
}
