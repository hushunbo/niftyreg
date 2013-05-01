/**
 * @file reg_tools.h
 * @author Marc Modat
 * @date 01/07/2012
 * @brief Header file that contains the string to be returned
 * for the slicer extension of reg_tools
 *
 * Copyright (c) 2012, University College London. All rights reserved.
 * Centre for Medical Image Computing (CMIC)
 * See the LICENSE.txt file in the nifty_reg root folder
 *
 */

char xml_tools[] =
"<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
"<executable>\n"
"  <category>Registration.NiftyReg</category>\n"
"  <title>RegTools (NiftyReg)</title>\n"
"  <description><![CDATA[NiftyReg module under construction]]></description>\n"
"  <version>0.0.1</version>\n"
"  <documentation-url>http://cmic.cs.ucl.ac.uk/home/software/</documentation-url>\n"
"  <license>BSD</license>\n"
"  <contributor>Marc Modat (UCL)</contributor>\n"
"  <parameters advanced=\"false\">\n"
"    <label>Input and Output</label>\n"
"    <description>Input image (mandatory)</description>\n"
"    <image fileExtensions=\"*.nii,*.nii.gz,*.nrrd,*.png\">\n"
"      <name>inputImageName</name>\n"
"      <longflag>in</longflag>\n"
"      <description>Input image filename</description>\n"
"      <label>Input image</label>\n"
"      <default>required</default>\n"
"      <channel>input</channel>\n"
"    </image>\n"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Image Conversions</label>\n"
"    <description>Image conversion tasks to perform on the input image.</description>\n"
"    <boolean>\n"
"      <name>convertToFloat</name>\n"
"      <longflag>float</longflag>\n"
"      <description>The input image is converted to float</description>\n"
"      <label>Convert to float</label>\n"
"      <default></default>\n"
"    </boolean>\n"
"    <boolean>\n"
"      <name>downSample</name>\n"
"      <longflag>down</longflag>\n"
"      <description>The input image is downsampled 2 times</description>\n"
"      <label>Downsample</label>\n"
"      <default></default>\n"
"    </boolean>\n"
"    <boolean>\n"
"      <name>binarize</name>\n"
"      <longflag>bin</longflag>\n"
"      <description>Binarise the input image <![CDATA[(val!=0?val=1:val=0)]]> </description>\n"
"      <label>Binarize</label>\n"
"      <default></default>\n"
"    </boolean>\n"
"    <boolean>\n"
"      <name>isotropic</name>\n"
"      <longflag>iso</longflag>\n"
"      <description>The resulting image is made isotropic</description>\n"
"      <label>Make Isotropic</label>\n"
"      <default></default>\n"
"    </boolean>\n"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Constant Arithmetics</label>\n"
"    <description>Constant Arithmetics.</description>\n"
"    <float>\n"
"      <name>addConst</name>\n"
"      <longflag>add</longflag>\n"
"      <description>Add the constant value to the input image</description>\n"
"      <label>Add</label>\n"
"      <default>none</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>subConst</name>\n"
"      <longflag>sub</longflag>\n"
"      <description>Subtract the constant value from the input image</description>\n"
"      <label>Subtract</label>\n"
"      <default>none</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>mulConst</name>\n"
"      <longflag>mul</longflag>\n"
"      <description>Multiply the input image with the constant value</description>\n"
"      <label>Multiply</label>\n"
"      <default>none</default>\n"
"    </float>\n"
"    <float>\n"
"      <name>divConst</name>\n"
"      <longflag>div</longflag>\n"
"      <description>Divide the input image with the constant value</description>\n"
"      <label>Divide</label>\n"
"      <default>none</default>\n"
"    </float>\n"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Smoothing and Thresholding</label>\n"
"    <description>Smoothing and thresholding operations.</description>\n"
"    <float>\n"
"      <name>smooth</name>\n"
"      <longflag>smo</longflag>\n"
"      <description>The input image is smoothed using a cubic b-spline kernel</description>\n"
"      <label>Smooth (B-Spline)</label>\n"
"      <default>none</default>\n"
"    </float>\n"
"    <float-vector>\n"
"      <name>smooth</name>\n"
"      <longflag>smoG</longflag>\n"
"      <description>The input image is smoothed using Gaussian kernel</description>\n"
"      <label>Smooth (Gaussian)</label>\n"
"      <default>none</default>\n"
"    </float-vector>\n"
"    <float>\n"
"      <name>threshold</name>\n"
"      <longflag>thr</longflag>\n"
"      <description>Threshold the input image <![CDATA[(val<thr?val=0:val=1)]]> </description>\n"
"      <label>Threshold image</label>\n"
"      <default></default>\n"
"    </float>\n"
"  </parameters>\n"
"  <parameters advanced=\"true\">\n"
"    <label>Options</label>\n"
"    <description>Various image processing tasks that require two images.</description>\n"
"    <image fileExtensions=\"*.nii,*.nii.gz,*.nrrd,*.png\">\n"
"      <name>rmsImages</name>\n"
"      <longflag>rms</longflag>\n"
"      <description>Compute the mean rms between this image and the input image</description>\n"
"      <label>Compute RMS </label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
"    </image>\n"
"    <image fileExtensions=\"*.nii,*.nii.gz,*.nrrd,*.png\">\n"
"      <name>maskImage</name>\n"
"      <longflag>nan</longflag>\n"
"      <description>This image is used to mask the input image. Voxels outside of the mask are set to nan</description>\n"
"      <label>Mask Image</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
"    </image>\n"
"    <image fileExtensions=\"*.nii,*.nii.gz,*.nrrd,*.png\">\n"
"      <name>addImage</name>\n"
"      <longflag>add</longflag>\n"
"      <description>This image is added to the input image</description>\n"
"      <label>Add Images</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
"    </image>\n"
"    <image fileExtensions=\"*.nii,*.nii.gz,*.nrrd,*.png\">\n"
"      <name>subtractImage</name>\n"
"      <longflag>sub</longflag>\n"
"      <description>This image is subtracted from the input image</description>\n"
"      <label>Subtract Images</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
"    </image>\n"
"    <image fileExtensions=\"*.nii,*.nii.gz,*.nrrd,*.png\">\n"
"      <name>multiplyImage</name>\n"
"      <longflag>mul</longflag>\n"
"      <description>This image is multiplied with input image</description>\n"
"      <label>Multiply Images</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
"    </image>\n"
"    <image fileExtensions=\"*.nii,*.nii.gz,*.nrrd,*.png\">\n"
"      <name>divideImage</name>\n"
"      <longflag>div</longflag>\n"
"      <description>The input image is divided by this image</description>\n"
"      <label>Divide Input Image</label>\n"
"      <default></default>\n"
"      <channel>input</channel>\n"
"    </image>\n"
"  </parameters>\n"
"</executable>"
;
