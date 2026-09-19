class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        
        for (int i = 0; i < s.length(); i++) {
            int current = getValue(s[i]);
            
            // Проверяем, есть ли следующий символ и меньше ли текущий следующего
            if (i < s.length() - 1 && current < getValue(s[i + 1])) {
                sum -= current; // Вычитаем (например, I в IV)
            } else {
                sum += current; // Прибавляем (например, V в IV)
            }
        }
        
        return sum;
    }

private:
    // Вспомогательная функция для перевода символа в число
    int getValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};

// Алгоритм:
// 1. Проходим по строке s слева направо.
// 2. Для каждого символа получаем его числовое значение через getValue().
// 3. Сравниваем текущее значение со значением следующего символа (если он есть).
// 4. Если текущее < следующего, вычитаем текущее из суммы (правило вычитания, например IV = -1 + 5).
// 5. Иначе прибавляем текущее к сумме (например, VI = 5 + 1).
// 6. Возвращаем итоговую сумму.
