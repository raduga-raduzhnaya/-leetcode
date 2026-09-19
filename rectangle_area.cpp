class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // 1. Вычисляем площади обоих прямоугольников
        int s1 = (ax2 - ax1) * (ay2 - ay1);
        int s2 = (bx2 - bx1) * (by2 - by1);
        
        // 2. Находим ширину и высоту зоны пересечения
        int width = min(ax2, bx2) - max(ax1, bx1);
        int height = min(ay2, by2) - max(ay1, by1);
        
        // Переменная для площади пересечения
        int s = 0;
        
        // 3. Проверяем, есть ли вообще пересечение
        if (width > 0 && height > 0) {
            s = width * height;
        } else {
            s = 0; // Если пересечения нет, вычитаем 0
        }
        
        // 4. Итоговая площадь: сумма площадей минус площадь пересечения
        return s1 + s2 - s;
    }
};
