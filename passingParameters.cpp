class A{
public:
    void func(int x); //הערך מועתק.
    void func(int &x); // שולחים אליו את הפרמטר רגיל. והוא קולט אותו גם עם הכתובת שלו.הפונקציה תתייחס אל X כאובייקט  עצמו, המקורי.
    void func(int* x); //העברת פויינטר מטיפוס int.
    void func(int* &x); // מגיע אל הפונקציה הכתובת של המצביע.
};
//אם יש לי & אז זו העברה ללא העתקה. העברת הכתובת של המשתנה
//ואם אין לי & אז יש העתקה של המשתנה, הוא לא המקורי
//אם זה value type אז מתבצעת העתקה של כל הvalue
//אם זה by reference אז מתבצעת העתקה של הכתובת עצמה

int main() {
    int const x3 = 3;
    int a = 7;
    const int *x = &a;
    a = 6;
    int b = 8;
    x = &b;
    int const *x1 = &a;
    x1 = &b;
    int *const x2 = nullptr;

    const int func(int x);
    void func(const int &x);
    ///void func(int* x) const;
}

/*
const DataType a
a הוא קבוע

const DataType* a
        הערך המוצבע הוא קבוע, אבל את המצביע אפשר לשנות
DataType const *a
        אותו הדבר, הערך המוצבע הוא הקבוע, הפוינטר ניתן לשינוי

DataType* const a
    המצביע קבוע,הערך המוצבע לא קבוע

const DataType* const a
    גם המצביע וגם הערך המוצבע קבועים
*/