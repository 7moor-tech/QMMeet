//
//  QMCallRoom.h
//  IMSDK
//
//  Created by ZCZ on 2020/11/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum : NSUInteger {
    ChatCall_video_Invite = 1, /**主动视频邀请*/
    ChatCall_video_beInvited, /**视频被邀请*/
    ChatCall_voice_Invite, /**主动语音邀请*/
    ChatCall_voice_beInvited, /**视频被邀请*/
} ChatCallType;


@interface QMCallRoom : NSObject
/// 会话的SessionId
@property (nonatomic, copy) NSString *_id;
/// 客户状态
@property (nonatomic, copy) NSString *status;
/// 访客名称
@property (nonatomic, copy) NSString *sName;
/// 会话的SessionId
@property (nonatomic, copy) NSString *token;
/// 视频接入token
@property (nonatomic, copy) NSString *sponsor;

/// 视频状态
@property (nonatomic, copy) NSString *cust_status;
/// 房间号
@property (nonatomic, copy) NSString *roomId;
/// 类型
@property (nonatomic, copy) NSString *msgType;
/// 类型
@property (nonatomic, copy) NSString *type;
/// 房间密码
@property (nonatomic, copy) NSString *password;
/// 平台
@property (nonatomic, copy) NSString *platform;
/// 自己发的还是接受
@property (nonatomic, copy) NSString *originator;
/// 视频类型
@property (nonatomic, copy) NSString *videoType;
/// 房间类型
@property (nonatomic, assign) ChatCallType roomType;

@end

NS_ASSUME_NONNULL_END
