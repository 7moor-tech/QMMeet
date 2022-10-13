//
//  QMCallingManager.h
//  IMSDK
//
//  Created by ZCZ on 2020/11/11.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "QMCallRoom.h"
NS_ASSUME_NONNULL_BEGIN

@interface QMCallingManager : NSObject

+ (instancetype)shared;

@property (nonatomic, assign) BOOL isCalling;
// 修改视频默认地址 -- 要修改视频服务地址，请在getCallWaitViewControllerInfo前调用
+ (void)setDefuatServerURL:(NSString *)serverURL;

/**
  获取通话信息及创建聊天房间
* disableSimulcast 默认为true
* true：不会切换。
* false：会切换。
*/
+ (UIViewController *)getCallWaitViewControllerInfo:(NSDictionary *)param disableSimulcast:(BOOL)disableSimulcast close:(void(^)(void))closeAction;
/**
获取通话信息及创建聊天房间
*/
+ (UIViewController *)getCallWaitViewControllerInfo:(NSDictionary *)param close:(void(^)(void))closeAction;
/**
 设置房间信息
 */
- (void)setRoomInfo:(QMCallRoom *)room;

/**
设置房间信息，及进入视频根据网络情况动态更变视频分辨率
param: disableSimulcast
true：不会切换。
false：会切换。
*/
- (void)setRoomInfo:(QMCallRoom *)room disableSimulcast:(BOOL)disableSimulcast;
- (void)closeCallAction;
- (void)show:(void (^ _Nullable)(BOOL))completion closedCall:(void (^ _Nullable)(void))close;
@end


NS_ASSUME_NONNULL_END
