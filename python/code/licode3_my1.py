class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        book = []  # 暂时存放不重复子串
        max_len=0  # 最终返回的最长不重复子串的长度
        i=0
        while(i<len(s)):
            if s[i] not in book:
                book.append(s[i])
                if max_len<len(book):
                    max_len=len(book)  # 更新最长子串的长度
                i+=1
            else:
                i-=len(book)-book.index(s[i])-1  # 回退i的位置
                book.clear()  # 清空列表
                
        
        return max_len

if __name__=="__main__":
    t=Solution()  # 造对象
    s=" "
    sub_len=t.lengthOfLongestSubstring(s)  # 调方法
    print(f"最长不重复子串长度:{sub_len}")
