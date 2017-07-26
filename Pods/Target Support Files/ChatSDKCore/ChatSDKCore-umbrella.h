#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BAudioManager.h"
#import "BInterfaceManager.h"
#import "BModules.h"
#import "BNetworkFacade.h"
#import "BNetworkManager.h"
#import "BSettingsManager.h"
#import "BStorageAdapter.h"
#import "BStorageManager.h"
#import "NSArray+KeyPair.h"
#import "NSBundle+Additions.h"
#import "NSObject+AssociatedObject.h"
#import "RXPromise+Additions.h"
#import "RXPromise+PromiseKit.h"
#import "ChatCore.h"
#import "BAccountTypes.h"
#import "bChatState.h"
#import "BCoreDefines.h"
#import "BKeys.h"
#import "bMessageStatus.h"
#import "bPictureTypes.h"
#import "bSubscriptionType.h"
#import "BUserConnectionType.h"
#import "PDetailedUser.h"
#import "PElmMessage.h"
#import "PElmThread.h"
#import "PElmUser.h"
#import "PEntity.h"
#import "PEntityWrapper.h"
#import "PGroup.h"
#import "PMessage.h"
#import "PMessageLayout.h"
#import "PMessageWrapper.h"
#import "PThreadWrapper.h"
#import "PThread_.h"
#import "PUser.h"
#import "PUserAccount.h"
#import "PUserConnection.h"
#import "PUserWrapper.h"
#import "BAbstractAuthenticationHandler.h"
#import "BAbstractCoreHandler.h"
#import "BAbstractNetworkAdapter.h"
#import "BAbstractPushHandler.h"
#import "BAbstractUploadHandler.h"
#import "BBaseContactHandler.h"
#import "BBaseImageMessageHandler.h"
#import "BBaseLocationMessageHandler.h"
#import "BBaseHookHandler.h"
#import "BHook.h"
#import "PHookHandler.h"
#import "PAudioMessageHandler.h"
#import "PAuthenticationHandler.h"
#import "PBlockingHandler.h"
#import "PChatOption.h"
#import "PContactHandler.h"
#import "PCoreHandler.h"
#import "PImageMessageHandler.h"
#import "PLastOnlineHandler.h"
#import "PLocationMessageHandler.h"
#import "PMessageHandler.h"
#import "PModerationHandler.h"
#import "PModule.h"
#import "PNearbyUsersHandler.h"
#import "PPublicThreadHandler.h"
#import "PPushHandler.h"
#import "PReadReceiptHandler.h"
#import "PSearchHandler.h"
#import "PSocialLoginHandler.h"
#import "PStickerMessageHandler.h"
#import "PTypingIndicatorHandler.h"
#import "PUploadHandler.h"
#import "PUserHandler.h"
#import "PVideoMessageHandler.h"
#import "UIImage+Resize.h"
#import "NM.h"
#import "PInterfaceFacade.h"
#import "BCoreUtilities.h"
#import "NSObject+Meta.h"
#import "PHasMeta.h"

FOUNDATION_EXPORT double ChatSDKCoreVersionNumber;
FOUNDATION_EXPORT const unsigned char ChatSDKCoreVersionString[];

