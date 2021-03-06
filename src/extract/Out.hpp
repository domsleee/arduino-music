#ifndef OUT_H
#define OUT_H
#include <iostream>
#include <vector>
#include "globals.hpp"
using namespace std;

typedef unsigned char byte;

class Out {
  vector<vector<p>> chans;
  vector<int> tone_dist;
public:
  Out(vector<int> &tone_dist); // a distribution of tones, e.g. {3,4}
  void all(byte b, int type=NORMAL_TYPE);
  void chan(int chan, byte b, bool skip_processing=false, int type=HEX_TYPE);
  vector<p>& get_chan_data(int chan);
  int get_chan_ntones(int chan);
  int get_nchans();
};
#endif