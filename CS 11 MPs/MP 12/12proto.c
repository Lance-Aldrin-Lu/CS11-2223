#include <stdio.h>

int main(){
    int n, k;
    int F, O; 
    int a, b, c, d;
    char op1, op2, b_com, d_com, final_op;
    
    if(scanf("%d\n", &n) == 1);
    for(k = 1; k <= n; k++){
        
        //inputs
        scanf("%d %c %c", &a, &op1, &b_com);
        if(b_com == 'i'){
            b = 1;
            scanf(", %d %c %c", &c, &op2, &d_com);
             if(d_com == 'i'){
            d = 1;
            }
            else{
                d = d_com - 48;
            }
        }
        else{
            b = b_com - 48;
            scanf("i, %d %c %c", &c, &op2, &d_com);
             if(d_com == 'i'){
            d = 1;
            }
            else{
                d = d_com - 48;
            }
        }

        printf("%d\n", a);
        printf("%c\n", op1);
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%c\n", op2);
        printf("%d\n", d);
        
        if(op1 == op2)
        {
            F = (a * c) - (b * d);
            O = (a * d) + (b * c);

            if(O == 1)
            {
                printf("%d %c i\n", F, final_op);
            }
            
            else
            {
                printf("%d %c %di\n", F, final_op, O);
            }
        }   
        
        
        else{
            F = (a * c) + (b * d);
            if((a * c) > (b * d)){
                O = (a * d) - (b * c);
                if(O == 1){
                    printf("%d %c i\n", F, final_op);
                }
                else if(O == 0){
                    printf("%d\n", F);
                }
                else{
                    printf("%d %c %di\n", F, final_op, O);
                }
            }
            else{
                O = (b * c) - (a * d);
                if(O == 1){
                    printf("%d %c i\n", F, final_op);
                }
                else if(O == 0){
                    printf("%d\n", F);
                }
                else{
                    printf("%d %c %di\n", F, final_op, O);
                }
            }
        }
    }
    return 0;
}

/*
printf("%d\n", real_a);
printf("%d\n", sign_X);
printf("%d\n", imag_b)
printf("%d\n", real_c);
printf("%d\n", sign_Y);
printf("%d\n", imag_d);
*/