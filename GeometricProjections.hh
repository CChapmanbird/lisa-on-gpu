#ifndef __GEO_PROJ__
#define __GEO_PROJ__

#include "cuda_complex.hpp"

#define C_inv 3.3356409519815204e-09
#define NUM_THREADS 256

typedef gcmplx::complex<double> cmplx;


void get_response(double *y_gw, double *k_in, double *u_in, double *v_in, double dt,
              int num_delays, int *link_space_craft_0_in, int *link_space_craft_1_in,
              cmplx *input_in, int num_inputs, int order,
              double sampling_frequency, int buffer_integer, double* A_in, double deps, int num_A, double* E_in,
              int projection_buffer,
              double* x_in, double* n_in, double* L_in, int num_orbit_inputs);

void get_tdi_delays(double* delayed_links, double* input_links, int num_inputs, int num_orbit_info, double* delays, int num_delays, double dt, int* link_inds_in, int num_units, int num_channels,
               int order, double sampling_frequency, int buffer_integer, double* A_in, double deps, int num_A, double* E_in, int projection_buffer, int total_buffer);

#endif // __GEO_PROJ__
