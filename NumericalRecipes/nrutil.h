#ifndef __NRUTIL__
#define __NRUTIL__
#include "complex.h"
#ifdef THINK_C
		float *vector(int nl, int nh);
		float **matrix(int nrl,int nrh,int ncl,int nch);
		float **convert_matrix(float *a,int nrl,int nrh,int ncl,int nch);
		double *dvector(int nl, int nh);
		double **dmatrix(int nrl,int nrh,int ncl,int nch);
		complex **cmatrix(int nrl,int nrh,int ncl,int nch); /* PRANGE 12/88 */
		int *ivector(int nl, int nh);
		int **imatrix(int nrl,int nrh,int ncl,int nch);
		float **submatrix(float **a,int oldrl,int oldrh,int oldcl,int oldch,
						  int newrl,int newcl);
		complex **csubmatrix(complex **a,int oldrl,int oldrh,int oldcl,int oldch,
						  int newrl,int newcl);
		void free_vector(float *v,int nl,int nh);
		void free_dvector(double *v,int nl,int nh);
		void free_ivector(int *v,int nl,int nh);
		void free_cvector(complex *v,int nl,int nh); /* PRANGE 12/88 */
		void free_matrix(float **m,int nrl,int nrh,int ncl,int nch);
		void free_dmatrix(double **m,int nrl,int nrh,int ncl,int nch);
		void free_imatrix(int **m,int nrl,int nrh,int ncl,int nch);
		void free_submatrix(float **b,int nrl,int nrh,int ncl,int nch);
		void free_convert_matrix(float **a,int nrl,int nrh,int ncl,int nch);
		void nrerror(char error_text[]);
		complex *cvector(int nl,int nh);	/* PRANGE 12/88 */
#else
		float *vector();
		float **matrix();
		float **convert_matrix();
		double *dvector();
		double **dmatrix();
		complex **cmatrix(); /* PRANGE 12/88 */
		int *ivector();
		int **imatrix();
		float **submatrix();
		complex **csubmatrix();
		void free_vector();
		void free_dvector();
		void free_ivector();
		void free_cvector(); /* PRANGE 12/88 */
		void free_matrix();
		void free_dmatrix();
		void free_imatrix();
		void free_submatrix();
		void free_convert_matrix();
		void nrerror();
		complex *cvector();	/* PRANGE 12/88 */
#endif
#endif
