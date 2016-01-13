#ifndef MATLAYER_H
#define MATLAYER_H


namespace MatQuery {

  struct MatBinData {
    Float_t fX2X0;
    Float_t fXRho;
  };
  
  typedef struct MatBinData MatBinData_t;
  
  
  class MatLayer  
  {
    
  public:
    
    Bool_t QueryMaterial(const float xyz0[3],const float xyz1[3], float* res) const;

  protected:
    
    
    Float_t fRMin;
    Float_t fDR;
    Float_t fZMin;
    Float_t fZMax;
    Float_t fDPhi;
    Int_t   fNZBins;
    Int_t   fNPhiBins;
    Int_t   fNTotBins;
    
    MatBinData_t *fX2X0; //[fNTotBins]
  
    ClassDef(MatLayer,1); // material layer
  };
  
}

#endif
