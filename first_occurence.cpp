class Solution {
public:
    int strStr(string haystack, string needle) {
        // Ищем подстроку needle в haystack
        size_t found = haystack.find(needle);
        
        // string::npos — это специальное значение, которое возвращает find(), если ничего не найдено
        if (found != string::npos) {
            return found; // Возвращаем индекс первого вхождения
        }
        
        return -1; // Если не нашли
    }
};
//Ищем индекс первого вхождения подстроки в строку с помощью метода find, ничего необычного.
