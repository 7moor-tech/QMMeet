//
//  PiPViewCoordinator1.h
//  QMMeet
//
//  Created by 张传章 on 2021/5/6.
//  Copyright © 2021 Jitsi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "QMMeetView.h"
//#import <QMMeet/QMMeet.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^AnimationCompletion)(BOOL);

typedef enum : NSUInteger {
    lowerRightCorner,
    upperRightCorner,
    lowerLeftCorner,
    upperLeftCorner
} Position;

@protocol PiPViewCoordinatorDelegate <NSObject>

- (void)exitPictureInPicture;

@end

@interface PiPViewCoordinator : NSObject

@property (nonatomic, assign) UIEdgeInsets dragBoundInsets;
@property (nonatomic, assign) Position initialPositionInSuperview;
@property (nonatomic, assign) CGFloat c;
@property (nonatomic, weak) PiPViewCoordinator* delegate;
@property (nonatomic, strong) QMMeetView * view;

- (instancetype)initWithView:(QMMeetView *)view;
- (void)configureAsStickyView:(nullable UIView *)parentView;
- (void)show:(nullable AnimationCompletion)completion;
- (void)hide:(nullable AnimationCompletion)completion;
- (void)enterPictureInPicture;
- (void)exitPictureInPicture;
- (void)resetBounds:(CGRect)bounds;
- (void)stopDragGesture;

@end

NS_ASSUME_NONNULL_END
