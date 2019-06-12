int min = -999;
if (*p_a <= *p_b && *p_a <= *p_c)
    min = * p_a;
else if (*p_b <= *p_a && *p_b <= *p_c)
    min = * p_b;
else 
    min = * p_c;
* p_a = min;
* p_b = min;
* p_c = min;
