/*
 *  _reg_f3d2.h
 *
 *
 *  Created by Marc Modat on 19/11/2010.
 *  Copyright (c) 2009, University College London. All rights reserved.
 *  Centre for Medical Image Computing (CMIC)
 *  See the LICENSE.txt file in the nifty_reg root folder
 *
 */
#ifdef _NR_DEV

#ifndef _REG_F3D2_H
#define _REG_F3D2_H

#include "_reg_f3d.h"

template <class T>
class reg_f3d2 : public reg_f3d<T>
{
  protected:
    bool approxComp;
    bool currentApproxComp;
    int stepNumber;
    bool useSymmetry;
    nifti_image **intermediateDeformationField;
    nifti_image *jacobianMatrices;

    void SetCompositionStepNumber(int);
    void UseSimilaritySymmetry();
    void ApproximateComposition();

    void AllocateCurrentInputImage(int);
    void ClearCurrentInputImage();

    void GetVoxelBasedGradient();
    void GetDeformationField();
    int CheckStoppingCriteria(bool);

public:
    reg_f3d2(int refTimePoint,int floTimePoint);
    ~reg_f3d2();
    void Run_f3d();
    nifti_image *GetWarpedImage();
};

#include "_reg_f3d2.cpp"

#endif
#endif // _NR_DEV