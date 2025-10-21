class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_set = set()  # 用集合存储当前窗口的字符
        left = 0
        max_len = 0
        
        for right in range(len(s)):
            # 当遇到重复字符时，移动左指针直到无重复
            while s[right] in char_set:
                char_set.remove(s[left])
                left += 1
            
            # 添加当前字符到集合
            char_set.add(s[right])
            # 更新最大长度
            max_len = max(max_len, right - left + 1)
        
        return max_len



if __name__ == "__main__":
    t = Solution()
    s = " "
    sub_len = t.lengthOfLongestSubstring(s)
    print(f"最长不重复子串长度: {sub_len}")  # 输出: 1
    
    # 更多测试用例
    test_cases = ["abcabcbb", "bbbbb", "pwwkew", "dvdf"]
    for case in test_cases:
        result = t.lengthOfLongestSubstring(case)
        print(f"'{case}' -> {result}")