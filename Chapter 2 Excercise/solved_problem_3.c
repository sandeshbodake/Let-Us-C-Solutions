#include<stdio.h>
int main()
{
    int rup, hundreds_notes, reamaining_hundred_notes_amt, fifties_notes, 
    reamaining_fifty_notes_amt, total_notes, tenrs_notes, 
    reamaining_ten_notes_amt, fivers_note, 
    reamaining_five_notes_amt, twors_note, 
    reamaining_two_notes_amt, oners_note;
    
    printf("\nEnter amount: ");
    scanf("%d", &rup);
    hundreds_notes = rup / 100;
    printf("\nTotal Hundread notes: %d", hundreds_notes);

    reamaining_hundred_notes_amt = rup % 100;
    printf("\nRemainig hundred rs amt %d", reamaining_hundred_notes_amt);

    fifties_notes = reamaining_hundred_notes_amt / 50;
    printf("\nTotal fiftys notes: %d", fifties_notes);

    reamaining_fifty_notes_amt = reamaining_hundred_notes_amt % 50;
    printf("\nremaining fifty amt %d", reamaining_fifty_notes_amt);

    tenrs_notes = reamaining_fifty_notes_amt / 10;
    printf("\nTotal ten notes : %d", tenrs_notes);

    reamaining_ten_notes_amt = reamaining_fifty_notes_amt % 10;
    printf("\nRemaining amount of ten: %d", reamaining_ten_notes_amt);

    fivers_note = reamaining_ten_notes_amt / 5;
    printf("\nTotal five rs note %d", fivers_note );

    reamaining_five_notes_amt = reamaining_ten_notes_amt % 5;
    printf("\nRemaining amount of five %d", reamaining_five_notes_amt);

    twors_note = reamaining_five_notes_amt / 2;
    printf("\ntwo rs notes: %d", twors_note);

    oners_note = reamaining_five_notes_amt % 2;
    printf("\nTotal one rs note: %d", oners_note);

    total_notes = hundreds_notes + fifties_notes + tenrs_notes + fivers_note + twors_note + oners_note;
    printf("\nTotal notes: %d", total_notes);
    

}