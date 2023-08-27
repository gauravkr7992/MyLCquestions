
class Solution {
public:
   char getMaxCountChar(const vector<int>& count)
{
    int max = 0;
    char ch;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            ch = 'a' + i;
        }
    }
 
    return ch;
}
    
    
    string reorganizeString(string str)
    {
        int ind = 0;
        int n = str.size();
 
    vector<int> count(26, 0);
    for (auto ch : str)
        count[ch - 'a']++;
 
    char ch_max = getMaxCountChar(count);
    int maxCount = count[ch_max - 'a'];
 
    if (maxCount > (n + 1) / 2)
        return "";
 
    string res(n, ' ');
 
    
  
    while (maxCount) {
        res[ind] = ch_max;
        ind += 2;
        maxCount--;
    }
    count[ch_max - 'a'] = 0;
    for (int i = 0; i < 26; i++) {
        while (count[i] > 0) {
            // ind = () ? 1 : ind;
            if(ind >= n) ind=1;
            res[ind] = 'a' + i;
            ind += 2;
            count[i]--;
        }
    }
    return res;
    }
};






//java solution
// public class ReorganizeString {

//   String reorganizeString(String str) {
//     int[] hash = new int[26];
//     for (int i = 0; i < str.length(); i++) hash[str.charAt(i) - 'a']++;

//     int max = 0, letter = 0;
//     for (int i = 0; i < hash.length; i++)
//       if (hash[i] > max) {
//         max = hash[i];
//         letter = i;
//       }

//     if (max > (str.length() + 1) / 2) return "";

//     char[] res = new char[str.length()];

//     // Fill all even places with majority character
//     int idx = 0;
//     while (hash[letter]-- > 0) {
//       res[idx] = (char) (letter + 'a');
//       idx += 2;
//     }

//     // Fill the remaining characters
//     for (int i = 0; i < hash.length; i++)
//       while (hash[i]-- > 0) {
//         if (idx >= res.length) idx = 1;

//         res[idx] = (char) (i + 'a');
//         idx += 2;
//       }

//     return String.valueOf(res);
//   }

// }
