//
//	 ______    ______    ______
//	/\  __ \  /\  ___\  /\  ___\
//	\ \  __<  \ \  __\_ \ \  __\_
//	 \ \_____\ \ \_____\ \ \_____\
//	  \/_____/  \/_____/  \/_____/
//
//
//	Copyright (c) 2013-2014, {Bee} open source community
//	http://www.bee-framework.com
//
//
//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//	IN THE SOFTWARE.
//

#if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)

#import "Bee_Precompile.h"
#import "Bee_UISignal.h"

#pragma mark -

@interface UIView(HoldGesture)

AS_SIGNAL( HOLD_START )		// 长按开始
AS_SIGNAL( HOLD_STOP )		// 长按结束
AS_SIGNAL( HOLD_CANCELLED )	// 长按取消

@property (nonatomic, assign) BOOL								holdable;		// same as holdEnabled
@property (nonatomic, assign) BOOL								holdEnabled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *	holdGesture;

@end

#pragma mark -

#undef	ON_HOLD_START
#define ON_HOLD_START( signal )		ON_SIGNAL3( UIView, HOLD_START, signal )

#undef	ON_HOLD_STOP
#define ON_HOLD_STOP( signal )		ON_SIGNAL3( UIView, HOLD_STOP, signal )

#undef	ON_HOLD_CANCELLED
#define ON_HOLD_CANCELLED( signal )	ON_SIGNAL3( UIView, HOLD_CANCELLED, signal )

#endif	// #if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)
