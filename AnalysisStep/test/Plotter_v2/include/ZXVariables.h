#ifndef ZXVariables_h
#define ZXVariables_h

// C++
#include <iostream>

using namespace std;

class ZXVariables
{
   
public:
   ZXVariables ();
   ~ZXVariables();
   
   struct ZX4e
   {
      // 2016 Z+X Yields
      float yield_SS_4e_2016      = 13.0;
      float yield_Comb_4e_2016    = 15.9;
      // 2017 Z+X Yields
      float yield_SS_4e_2017      = 10.8;
      float yield_Comb_4e_2017    = 12.7;
      // 2018 Z+X Yields
      float yield_SS_4e_2018      = 16.2;
      float yield_Comb_4e_2018    = 19.6;
      
      float norm_2016         = yield_Comb_4e_2016/yield_SS_4e_2016;
      float norm_2017         = yield_Comb_4e_2017/yield_SS_4e_2017;
      float norm_2018         = yield_Comb_4e_2018/yield_SS_4e_2018;
      
      float norm_Comb = (yield_Comb_4e_2016 + yield_Comb_4e_2017 + yield_Comb_4e_2018) / (yield_SS_4e_2016 + yield_SS_4e_2017 + yield_SS_4e_2018);
       
      float par0 = 141.9;
      float par1 = 21.3;
   };
    
    struct ZX4mu
    {
      // 2016 Z+X Yields
      float yield_SS_4mu_2016     = 13.6;
      float yield_Comb_4mu_2016   = 15.1;
      // 2017 Z+X Yields
      float yield_SS_4mu_2017     = 17.5;
      float yield_Comb_4mu_2017   = 20.1;
      // 2018 Z+X Yields
      float yield_SS_4mu_2018     = 33.0;
      float yield_Comb_4mu_2018   = 36.1;
       
      float norm_2016         = yield_Comb_4mu_2016/yield_SS_4mu_2016;
      float norm_2017         = yield_Comb_4mu_2017/yield_SS_4mu_2017;
      float norm_2018         = yield_Comb_4mu_2018/yield_SS_4mu_2018;
       
      float norm_Comb = (yield_Comb_4mu_2016 + yield_Comb_4mu_2017 + yield_Comb_4mu_2018) / (yield_SS_4mu_2016 + yield_SS_4mu_2017 + yield_SS_4mu_2018);
       
      float par0 = 130.4;
      float par1 = 15.6;
   };
   
    struct ZX2e2mu
    {
      // 2016 Z+X Yields
      float yield_SS_2e2mu_2016   = 27.9;
      float yield_Comb_2e2mu_2016 = 33.6;
      // 2017 Z+X Yields
      float yield_SS_2e2mu_2017   = 28.2;
      float yield_Comb_2e2mu_2017 = 32.2;
      // 2018 Z+X Yields
      float yield_SS_2e2mu_2018   = 48.0;
      float yield_Comb_2e2mu_2018 = 53.8;
      
      float norm_2016         = yield_Comb_2e2mu_2016/yield_SS_2e2mu_2016;
      float norm_2017         = yield_Comb_2e2mu_2017/yield_SS_2e2mu_2017;
      float norm_2018         = yield_Comb_2e2mu_2018/yield_SS_2e2mu_2018;
       
      float norm_Comb = (yield_Comb_2e2mu_2016 + yield_Comb_2e2mu_2017 + yield_Comb_2e2mu_2018) / (yield_SS_2e2mu_2016 + yield_SS_2e2mu_2017 + yield_SS_2e2mu_2018);
        
      float par0 = 0.45;
      float par1 = 131.1;
      float par2 = 18.1;
      float par3 = 0.55;
      float par4 = 133.8;
      float par5 = 18.9;
   };
};
#endif
