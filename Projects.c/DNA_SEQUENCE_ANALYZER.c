// DNA SEQUENCE ANALYZER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void validate_sequence(char dna[],int length){
    int found = 0;
    for(int i=0;i<length;i++){
        if(dna[i]!='A'&&dna[i]!='G'&&dna[i]!='C'&&dna[i]!='T'){
            found = 1;
            printf("Invalid DNA sequence\n");
            return;
        }
    }
    if(found==0){
        printf("Valid DNA sequence\n");
    }
}

void count_nucleotides(char dna[],int length){
    int freq[4] = {0};
    for(int i=0;i<length;i++){
        if(dna[i]=='A'){
            freq[0]++;
        }
        if(dna[i]=='G'){
            freq[1]++;
        }
        if(dna[i]=='C'){
            freq[2]++;
        }
        if(dna[i]=='T'){
            freq[3]++;
        }
    }
    int A = freq[0];
    int G = freq[1];
    int C = freq[2];
    int T = freq[3];
    printf("Nucleotide count:\n");
    printf("A : %d\n",A);
    printf("G : %d\n",G);
    printf("C : %d\n",C);
    printf("T : %d\n",T);
    printf("Total length : %d\n",A+G+C+T);
}

void gc_count(char dna[],int length){
    int freq[2] = {0};
    for(int i=0;i<length;i++){
        if(dna[i]=='G'){
            freq[0]++;
        }
        if(dna[i]=='C'){
            freq[1]++;
        }
    }
    int G = freq[0];
    int C = freq[1];
    float GC_content = ((float)(G+C)/length)*100;
    printf("GC content : %.2f%%\n",GC_content);
}

void reverse_sequence(char dna_seq[],int length){
    char rev_dna[1000];
    int j=0;
    for(int i=length-1;i>=0;i--){
        rev_dna[j] = dna_seq[i];
        j++;
    }
    rev_dna[j]='\0';
    printf("Reverse Sequence: %s\n",rev_dna);
}

void complement_sequence(char dna_seq[],int length){
    char comp[1000];
    for(int i=0;i<length;i++){
        if(dna_seq[i]=='A'){
            comp[i]='T';
        }
        else if(dna_seq[i]=='T'){
            comp[i]='A';
        }
        else if(dna_seq[i]=='G'){
            comp[i]='C';
        }
        else if(dna_seq[i]=='C'){
            comp[i]='G';
        }
        else{
            printf("Invalid nucleotide\n");
        }
    }
    comp[length] = '\0';
    printf("Complement Sequence : %s\n",comp);
}

void  reverse_complement(char rev[],int length){
    char comp[1000];
    for(int i=0;i<length;i++){
        if(rev[i]=='A'){
            comp[i]='T';
        }
        else if(rev[i]=='T'){
            comp[i]='A';
        }
        else if(rev[i]=='G'){
            comp[i]='C';
        }
        else if(rev[i]=='C'){
            comp[i]='G';
        }
        else{
            printf("Invalid nucleotide\n");
        }
    }
    comp[length] = '\0';
    char rev_comp[1000];
    int j=0;
    for(int i=length-1;i>=0;i--){
        rev_comp[j] = comp[i];
        j++;
    }
    rev_comp[j] = '\0';
    printf("Reverse Complement : %s\n",rev_comp);
}

void dna_to_rna(char dna_seq[],int length){
    char rna[1000];
    for(int i=0;i<length;i++){
        if(dna_seq[i]=='T'){
            rna[i] = 'U';
        }
        else{
            rna[i] = dna_seq[i];
        }
    }
    rna[length] = '\0';
    printf("RNA Sequence : %s\n",rna);
}

int main(){
    char dna[1000];
    printf("Enter the DNA sequence: \n");
    scanf("%999s",dna);
    printf("\n");
    printf("DNA SEQUENCE ANALYZER\n");
    printf("\n");
    printf("1. Validate Sequence\n");
    printf("2. Nucleotide Count\n");
    printf("3. GC count\n");
    printf("4. Reverse sequence\n");
    printf("5. Complement\n");
    printf("6. Reverse Complement\n");
    printf("7. DNA to RNA\n");
    printf("8. Exit\n");
    printf("\n");
    int choice;
    int length = strlen(dna);
    do{
    printf("Enter choice:\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        validate_sequence(dna,length);
        break;
    case 2:
        count_nucleotides(dna,length);
        break;
    case 3:
        gc_count(dna,length);
        break;
    case 4:
        reverse_sequence(dna,length);
        break;
    case 5:
        complement_sequence(dna,length);
        break;
    case 6:
        reverse_complement(dna,length);
        break;
    case 7:
        dna_to_rna(dna,length);
        break;
    case 8:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid choice\n");
    }
    }while(choice!=8);
    return 0;
}
