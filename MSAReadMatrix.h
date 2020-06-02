/////////////////////////////////////////////////////////////////
//  Matrix.h
//
//  Specifies scoring matrices and their structure
//
//
//
/////////////////////////////////////////////////////////////////

#ifndef _MSA_READ_MATRIX_H
#define _MSA_READ_MATRIX_H

typedef struct
{
    char monomers[26]; /* amino or nucleic acid order */
    float matrix[676]; /* entries of the score matix, 26*26=676 */
} score_matrix;

//default protein sequence scoring matrix as well as default scoring matrix of the PROBALIGN
//also used when -prot option is used

score_matrix gonnet_160 = { "ABCDEFGHIKLMNPQRSTVWXYZ",

{
    4.6, 0.0, 0.0, 0.3, 0.0, 13.5, -1.1, 0.0, -5.3, 7.0, -0.4, 0.0, -5.2, 3.4,
    5.9, -3.8, 0.0, -1.8, -7.0, -6.2, 9.1, 0.2, 0.0, -3.4, -0.7, -2.1, -7.6,
    8.2, -1.8, 0.0, -2.3, -0.1, -0.1, -0.7, -2.7, 9.3, -1.8, 0.0, -2.5,
    -6.2, -4.3, 0.3, -7.0, -3.7, 5.9, -1.2, 0.0, -4.8, -0.1, 1.3, -5.3,
    -2.4, 0.2, -3.5, 5.5, -2.2, 0.0, -2.9, -6.5, -4.5, 1.9, -6.7, -3.2, 3.0,
    -3.4, 5.7, -1.2, 0.0, -1.9, -5.0, -3.1, 1.4, -5.2, -2.1, 2.9, -2.1, 3.4,
    7.6, -1.2, 0.0, -3.1, 2.6, 0.5, -4.7, -0.2, 1.5, -4.4, 0.8, -4.8, -3.6,
    6.5, -0.1, 0.0, -5.2, -1.9, -1.4, -5.8, -3.0, -2.2, -4.3, -1.6, -3.5,
    -4.2, -2.2, 9.6, -0.7, 0.0, -4.2, 0.6, 2.3, -4.1, -2.1, 1.7, -3.2, 2.0,
    -2.4, -1.2, 0.5, -0.8, 5.6, -1.6, 0.0, -3.5, -1.6, -0.3, -5.3, -2.1,
    0.3, -4.1, 3.5, -3.5, -2.9, -0.4, -2.1, 1.7, 7.1, 1.6, 0.0, -0.2, 0.0,
    -0.3, -4.5, -0.1, -0.8, -3.3, -0.4, -3.6, -2.3, 1.1, 0.0, -0.2, -0.9,
    4.4, 0.5, 0.0, -1.4, -0.6, -0.8, -3.6, -2.4, -0.8, -1.2, -0.2, -2.4,
    -1.1, 0.3, -0.4, -0.4, -0.9, 2.3, 5.0, 0.1, 0.0, -0.6, -4.9, -3.0, -0.8,
    -5.2, -3.5, 4.0, -3.0, 1.7, 1.4, -3.8, -3.2, -2.7, -3.4, -2.0, 0.0, 5.3,
    -5.5, 0.0, -2.1, -7.8, -6.4, 3.2, -5.5, -1.9, -3.4, -5.4, -2.0, -2.2,
    -5.5, -7.4, -4.0, -2.4, -4.7, -5.4, -4.5, 15.8, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -3.7, 0.0, -1.3, -4.2, -4.4, 5.6, -6.0, 2.7, -2.0, -3.5, -1.1,
    -1.3, -2.2, -4.8, -2.9, -2.9, -2.8, -3.2, -2.4, 3.8, 0.0, 10.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
}
                          };

score_matrix vtml_200 = { "ABCDEFGHIKLMNPQRSTVWXYZ",

{
    4, -1, 4, 1, -3, 12, -1, 5, -4, 6, -1, 2, -4, 3, 5, -3, -5, -3, -6, -5, 8, 0, 0, -2, -1, -1, -5, 8, -2, 1, -2, 0, 0, 0, -2, 8, -1, -4, 0, -5, -4, 0, -6, -3, 5, -1, 0, -4, 0, 1, -5, -2, 0, -3, 5, -2, -5, -3, -5, -4, 2, -5, -2, 3, -3, 5, -1, -3, -1, -4, -3, 1, -4, -3, 2, -2, 3, 6, -1, 4, -2, 3, 1, -4, 0, 1, -4, 1, -4, -3, 6, 0, -1, -3, -1, -1, -4, -2, -2, -4, -1, -3, -3, -2, 9, -1, 1, -3, 1, 2, -3, -2, 2, -3, 2, -2, -1, 1, -1, 5, -2, -1, -3, -2, -1, -4, -2, 1, -3, 4, -3, -2, 0, -1, 2, 7, 1, 1, 1, 0, 0, -3, 0, 0, -3, 0, -3, -2, 1, 0, 0, -1, 4, 1, 0, 0, -1, -1, -3, -2, -1, -1, 0, -2, -1, 0, -1, 0, -1, 2, 4, 0, -3, 1, -4, -3, -1, -4, -3, 4, -3, 2, 2, -3, -3, -2, -3, -2, 0, 4, -4, -5, -6, -6, -6, 3, -5, -1, -2, -4, -1, -3, -5, -4, -6, -3, -4, -5, -4, 15, -1, -1, -1, -2, -1, -1, -2, 0, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -2, -1, -3, -3, 0, -4, -3, 5, -5, 3, -2, -3, -1, -2, -2, -5, -3, -2, -2, -3, -2, 4, -1, 9, -1, 1, -4, 2, 4, -4, -2, 1, -3, 2, -3, -2, 1, -1, 4, 0, 0, -1, -3, -6, -1, -3, 4
}
                        };

//default nucleotide sequence scoring matrix
//used when -nuc option is used
score_matrix nuc_simple =
{

    "ABCDGHKMNRSTUVWXY",

    {
        1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0
    }

};

#endif
