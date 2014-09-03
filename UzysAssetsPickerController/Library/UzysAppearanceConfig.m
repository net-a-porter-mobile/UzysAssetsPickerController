//
//  UzysAppearanceConfig.m
//  UzysAssetsPickerController
//
//  Created by jianpx on 8/26/14.
//  Copyright (c) 2014 Uzys. All rights reserved.
//

#import "UzysAppearanceConfig.h"

@implementation UzysAppearanceConfig

+ (instancetype)sharedConfig
{
    static UzysAppearanceConfig *shared = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shared = [[self alloc] init];
    });
    return shared;
}

- (NSString *)assetSelectedImageName
{
    if (!_assetSelectedImageName) {
        return nil;//@"uzysAP_ico_photo_thumb_check";
    }
    return _assetSelectedImageName;
}

- (NSString *)assetDeselectedImageName
{
    if (!_assetDeselectedImageName) {
        return nil;//@"uzysAP_ico_photo_thumb_uncheck";
    }
    return _assetDeselectedImageName;
}

- (NSString *)assetsGroupSelectedImageName
{
    if (!_assetsGroupSelectedImageName) {
        return nil;//@"uzysAP_ico_checkMark";
    }
    return _assetsGroupSelectedImageName;
}

- (NSString *)cameraImageName
{
    if (!_cameraImageName) {
        return @"camera-icon";
    }
    return _cameraImageName;
}

- (UIColor *)finishSelectionButtonColor
{
    if (!_finishSelectionButtonColor) {
        return [UIColor redColor];
    }
    return _finishSelectionButtonColor;
}

@end
