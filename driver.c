#include "strlib.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    //Test for all_letters()
    char aa[] = "TEST";
    char bb[] = "Test";
    int a = all_letters(aa);
    int b = all_letters(bb);
    printf(" All letters: \n%d %d\n \n", a,b);

    //Test for capitalize()
    char cc[] = "test";
    char dd[] = "tEST";
    capitalize(cc);
    capitalize(dd);
    printf("Capitalize: \n %s %s\n \n", cc, dd);

    //Test for dedup()
    char ee[] = "This is a test";
    char *ff = dedup(ee);
    printf("Dedup: \n %s\n \n", ff);

    //Test for diff()
    char gg[] = "Tester";
    char hh[] = "test";
    int c = diff(gg, hh);
    printf("Diff: \n%d\n \n", c);

    //Test for ends_with_ignore_case()
    char ii[] = "Test";
    char jj[] = "st";
    char kk[] = "Not";
    int d = ends_with_ignore_case(ii, jj);
    int e = ends_with_ignore_case(ii, kk);
    printf("Ends with Ignore Case: \n%d %d\n \n", d, e);

    //Test for find()
    char ll[] = "Tester";
    char mm[] = "e";
    char nn[] = "f";
    int f = find(ll, mm);
    int g = find(ll, nn);
    printf("Find: \n%d %d\n \n", f,g);

    //Test for is_empty()
    char oo[] = "";
    char pp[] = "Test";
    int h = isEmpty(oo);
    int i = isEmpty(pp);
    printf("Is empty: \n %d %d\n \n", h,i);

    //Test for len_diff()
    char qq[] = "Test";
    char rr[] = "Tester";
    int j = len_diff(qq,rr);
    printf("Len diff: \n%d\n \n", j);

    //Test for num_in_range()
    char ss[] = "Tester";
    int k = num_in_range(ss, 'a', 's');
    printf("Num in range: \n%d\n \n", k);

    //Test for pad()
    char tt[] = "Test";
    char *uu = pad(tt, 3);
    printf("Pad: \n%s\n \n", uu);

    //Test for ptr_to()
    char vv[] = "Test";
    char xx[] = "s";
    char *ww = ptr_to(vv, xx);
    printf("Ptr to: \n%c\n \n", *ww);

    //Test for repeat()
    char yy[] = "Test of";
    char *zz = repeat(yy, 3, ' ');
    printf("Repeat \n%s\n \n", zz);

    //Test for rm_left_space()
    char aaa[] = "  Test";
    rm_left_space(aaa);
    printf("Rm left space: \n%s\n \n", aaa);

    //Test for rm_right_space()
    char bbb[] = "Test  ";
    rm_right_space(bbb);
    printf("Rm right space: \n%s\n \n", bbb);

    //Test for rm_space()
    char ccc[] = " Test  ";
    rm_space(ccc);
    printf("Rm space: \n%s\n \n", ccc);

    //Test for shorten()
    char ddd[] = "Tester";
    shorten(ddd, 4);
    printf("Shorten: \n%s\n \n", ddd);

    //Test for str_connect()
    char *eee[] = {"Washington", "Adams", "Jefferson"};
    char *fff = str_connect(eee, 2, '+');
    printf("Str connect: \n%s\n \n", fff);

    //Test for str_zip()
    char ggg[] = "Spongebob";
    char hhh[] = "Patrick";
    char *iii = str_zip(ggg,hhh);
    printf("Str zip: \n%s\n \n", iii);

    //Test for strcmp_ign_case()
    char jjj[] = "Tester";
    char kkk[] = "Atester";
    char lll[] = "Ztester";
    int l = strcmp_ign_case(jjj,kkk);
    int m = strcmp_ign_case(jjj,lll);
    printf("Strcmp ign case: \n%d %d\n \n", l,m);

    //Test for take_last()
    char mmm[] = "Tester";
    take_last(mmm, 3);
    printf("Take last: \n%s\n \n", mmm);

return 0;
}