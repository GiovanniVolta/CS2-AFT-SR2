
#include "TFile.h"
#include "TTree.h"
#include "TObject.h"
#include "TString.h"
#include <vector>






#ifndef HIT
#define HIT
 
class Hit : public TObject {

public:
	Float_t  area;
	Float_t  center;
	Int_t  channel;
	Int_t  found_in_pulse;
	Float_t  height;
	Int_t  index_of_maximum;
	Bool_t  is_rejected;
	Int_t  left;
	Int_t  left_central;
	Int_t  n_saturated;
	Float_t  noise_sigma;
	Int_t  right;
	Int_t  right_central;
	Float_t  sum_absolute_deviation;

    ClassDef(Hit, 6101);
};

#endif





#ifndef INTERACTION
#define INTERACTION
 
class Interaction : public TObject {

public:
	Float_t  drift_time;
	Float_t  r_correction;
	Int_t  s1;
	Float_t  s1_area_correction;
	Float_t  s1_area_fraction_top_probability;
	Float_t  s1_pattern_fit;
	Float_t  s1_pattern_fit_hits;
	Float_t  s1_saturation_correction;
	Float_t  s1_spatial_correction;
	Int_t  s2;
	Float_t  s2_area_correction;
	Float_t  s2_lifetime_correction;
	Float_t  x;
	TString  xy_posrec_algorithm;
	Float_t  xy_posrec_goodness_of_fit;
	Float_t  xy_posrec_ndf;
	Float_t  y;
	Float_t  z;
	Float_t  z_correction;

    ClassDef(Interaction, 6101);
};

#endif









#ifndef CONFIDENCETUPLE
#define CONFIDENCETUPLE
 
class ConfidenceTuple : public TObject {

public:
	Bool_t  at_edge;
	Float_t  dx;
	Float_t  dy;
	Float_t  level;
	Float_t  x0;
	Float_t  y0;

    ClassDef(ConfidenceTuple, 6101);
};

#endif



#ifndef RECONSTRUCTEDPOSITION
#define RECONSTRUCTEDPOSITION
 
class ReconstructedPosition : public TObject {

public:
	TString  algorithm;
	std::vector <ConfidenceTuple>  confidence_tuples;
	Float_t  goodness_of_fit;
	Float_t  ndf;
	Float_t  x;
	Float_t  y;
	Float_t  z;

    ClassDef(ReconstructedPosition, 6101);
};

#endif



#ifndef PEAK
#define PEAK
 
class Peak : public TObject {

public:
	Float_t  area;
	Double_t  area_decile_from_midpoint[11];
	Float_t  area_fraction_top;
	Float_t  area_midpoint;
	Double_t  area_per_channel[260];
	Float_t  birthing_split_fraction;
	Float_t  birthing_split_goodness;
	Float_t  bottom_hitpattern_spread;
	Float_t  center_time;
	Short_t  coincidence_per_channel[260];
	TString  detector;
	Float_t  height;
	Float_t  hit_time_mean;
	Float_t  hit_time_std;
	std::vector <Hit>  hits;
	Float_t  hits_fraction_top;
	Short_t  hits_per_channel[260];
	Int_t  index_of_maximum;
	Float_t  interior_split_fraction;
	Float_t  interior_split_goodness;
	Float_t  largest_hit_area;
	Int_t  largest_hit_channel;
	Int_t  left;
	Int_t  lone_hit_channel;
	Float_t  mean_amplitude_to_noise;
	Int_t  n_contributing_channels;
	Int_t  n_contributing_channels_top;
	Int_t  n_hits;
	Int_t  n_noise_pulses;
	Int_t  n_saturated_channels;
	Short_t  n_saturated_per_channel[260];
	Int_t  n_saturated_samples;
	Double_t  range_area_decile[11];
	std::vector <ReconstructedPosition>  reconstructed_positions;
	Int_t  right;
	Float_t  s2_bottom_spatial_correction;
	Float_t  s2_saturation_correction;
	Float_t  s2_spatial_correction;
	Float_t  s2_top_spatial_correction;
	Float_t  sum_waveform[251];
	Float_t  sum_waveform_top[251];
	Int_t  tight_coincidence;
	Short_t  tight_coincidence_thresholds[5];
	Float_t  top_hitpattern_spread;
	TString  type;

    ClassDef(Peak, 6101);
};

#endif





#ifndef PULSE
#define PULSE
 
class Pulse : public TObject {

public:
	Float_t  baseline;
	Float_t  baseline_increase;
	Int_t  channel;
	Int_t  hitfinder_threshold;
	Int_t  left;
	Float_t  maximum;
	Float_t  minimum;
	Int_t  n_hits_found;
	Float_t  noise_sigma;
	Int_t  right;

    ClassDef(Pulse, 6101);
};

#endif





#ifndef TRIGGERSIGNAL
#define TRIGGERSIGNAL
 
class TriggerSignal : public TObject {

public:
	Float_t  area;
	Int_t  left_time;
	Int_t  n_contributing_channels;
	Int_t  n_pulses;
	Int_t  right_time;
	Float_t  time_mean;
	Float_t  time_rms;
	Bool_t  trigger;
	Int_t  type;

    ClassDef(TriggerSignal, 6101);
};

#endif



#ifndef EVENT
#define EVENT
 
class Event : public TObject {

public:
	std::vector <Hit>  all_hits;
	Int_t  block_id;
	TString  dataset_name;
	Int_t  event_number;
	std::vector <Interaction>  interactions;
	Bool_t  is_channel_suspicious[260];
	Short_t  lone_hits_per_channel[260];
	Short_t  lone_hits_per_channel_before[260];
	Int_t  n_channels;
	Short_t  n_hits_rejected[260];
	Int_t  n_pulses;
	Short_t  n_pulses_per_channel[260];
	Short_t  noise_pulses_in[260];
	std::vector <Peak>  peaks;
	std::vector <Pulse>  pulses;
	Int_t  sample_duration;
	Long64_t  start_time;
	Long64_t  stop_time;
	std::vector <TriggerSignal>  trigger_signals;
	std::vector <Int_t> s1s;
	std::vector <Int_t> s2s;

    ClassDef(Event, 6101);
};

#endif

