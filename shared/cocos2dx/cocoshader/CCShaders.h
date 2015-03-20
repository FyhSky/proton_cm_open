/* -----------------------------------------------------------------------------------
 *
 *      File            ccShaders.h
 *      Ported By       Young-Hwan Mun
 *      Contact         xmsoft77@gmail.com 
 * 
 * -----------------------------------------------------------------------------------
 *   
 *      Copyright (c) 2010-2013 XMSoft
 *      Copyright (c) 2010-2013 cocos2d-x.org
 *      Copyright (c) 2011      Zynga Inc.
 *
 *         http://www.cocos2d-x.org      
 *
 * -----------------------------------------------------------------------------------
 * 
 *     Permission is hereby granted, free of charge, to any person obtaining a copy
 *     of this software and associated documentation files (the "Software"), to deal
 *     in the Software without restriction, including without limitation the rights
 *     to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *     copies of the Software, and to permit persons to whom the Software is
 *     furnished to do so, subject to the following conditions:
 *
 *     The above copyright notice and this permission notice shall be included in
 *     all copies or substantial portions of the Software.
 *     
 *     THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *     IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *     FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *     AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *     LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *     OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *     THE SOFTWARE.
 *
 * ----------------------------------------------------------------------------------- */ 

#ifndef __CCShaders_h__
#define __CCShaders_h__

#include "ccTypes.h"

NS_CC_BEGIN

/**
 * @addtogroup shaders
 * @{
 */

extern char*  ccPosition_uColor_frag;
extern char*  ccPosition_uColor_vert;

extern char*  ccPositionColor_frag;
extern char*  ccPositionColor_vert;

extern char*  ccPositionTexture_frag;
extern char*  ccPositionTexture_vert;

extern char*  ccPositionTextureA8Color_frag;
extern char*  ccPositionTextureA8Color_vert;

extern char*  ccPositionTextureColor_frag;
extern char*  ccPositionTextureColor_vert;

extern char*  ccPositionTexture_uColor_frag;
extern char*  ccPositionTexture_uColor_vert;

extern char*	ccPositionColorLengthTexture_frag;
extern char*	ccPositionColorLengthTexture_vert;

extern char*  ccPositionTextureColorAlphaTest_frag;
extern char*	ccExSwitchMask_frag;

// end of shaders group
/// @}

NS_CC_END

#endif // __ccShaders_h__
