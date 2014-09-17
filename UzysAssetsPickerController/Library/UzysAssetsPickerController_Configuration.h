//
//  UzysAssetsPickerController_configuration.h
//  UzysAssetsPickerController
//
//  Created by Uzysjung on 2014. 2. 12..
//  Copyright (c) 2014년 Uzys. All rights reserved.
//
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>
typedef void (^intBlock)(NSInteger);
typedef void (^voidBlock)(void);

#define kGroupViewCellIdentifier           @"groupViewCellIdentifier"
#define kAssetsViewCellIdentifier           @"AssetsViewCellIdentifier"
#define kAssetsViewCameraCellIdentifier           @"AssetsViewCameraCellIdentifier"
#define kAssetsSupplementaryViewIdentifier  @"AssetsSupplementaryViewIdentifier"
#define kThumbnailLengthPhone    78.0f
#define kThumbnailLengthPad    126.0f
#define kThumbnailSizePhone      CGSizeMake(kThumbnailLengthPhone, kThumbnailLengthPhone)
#define kThumbnailSizePad      CGSizeMake(kThumbnailLengthPad, kThumbnailLengthPad)

#define kTagButtonClose 101
#define kTagButtonCamera 102
#define kTagButtonGroupPicker 103
#define kTagButtonDone 104
#define kTagNoAssetViewImageView 30
#define kTagNoAssetViewTitleLabel 31
#define kTagNoAssetViewMsgLabel 32

#define kGroupPickerViewCellLength 90



#ifdef DEBUG
// for debug mode
#define DLog(f, ...) NSLog(f, ##__VA_ARGS__)

#else

// for release mode
#define DLog(f, ...) /* noop */

#endif