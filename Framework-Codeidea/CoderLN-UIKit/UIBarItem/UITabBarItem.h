/*
 * UITabBarItem.h 
 *
 * UIKit (c) 2008-2017
 *
 * Public_不知名开发者 / https://githubidea.github.io / https://github.com/CoderLN
 * Welcome your star|fork, Your sharing can be together.
 *
 * 尊重熬夜写作的作者，该模块将系统化学习，替换、补充内容。
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIBarItem.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UIKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, UITabBarSystemItem) {
    UITabBarSystemItemMore,
    UITabBarSystemItemFavorites,
    UITabBarSystemItemFeatured,
    UITabBarSystemItemTopRated,
    UITabBarSystemItemRecents,
    UITabBarSystemItemContacts,
    UITabBarSystemItemHistory,
    UITabBarSystemItemBookmarks,
    UITabBarSystemItemSearch,
    UITabBarSystemItemDownloads,
    UITabBarSystemItemMostRecent,
    UITabBarSystemItemMostViewed,
};

@class UIView, UIImage;

NS_CLASS_AVAILABLE_IOS(2_0) @interface UITabBarItem : UIBarItem

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;
/* The unselected image is autogenerated from the image argument. The selected image
 is autogenerated from the selectedImage if provided and the image argument otherwise.
 To prevent system coloring, provide images with UIImageRenderingModeAlwaysOriginal (see UIImage.h)
 */
- (instancetype)initWithTitle:(nullable NSString *)title image:(nullable UIImage *)image tag:(NSInteger)tag;
- (instancetype)initWithTitle:(nullable NSString *)title image:(nullable UIImage *)image selectedImage:(nullable UIImage *)selectedImage NS_AVAILABLE_IOS(7_0);
- (instancetype)initWithTabBarSystemItem:(UITabBarSystemItem)systemItem tag:(NSInteger)tag;

@property(nullable, nonatomic,strong) UIImage *selectedImage NS_AVAILABLE_IOS(7_0);

@property(nullable, nonatomic, copy) NSString *badgeValue;    // default is nil

/*  These methods are now deprecated. Please use -initWithTitle:image:selectedImage:.
 */
- (void)setFinishedSelectedImage:(nullable UIImage *)selectedImage withFinishedUnselectedImage:(nullable UIImage *)unselectedImage NS_DEPRECATED_IOS(5_0,7_0,"Use initWithTitle:image:selectedImage: or the image and selectedImage properties along with UIImageRenderingModeAlwaysOriginal") __TVOS_PROHIBITED;
- (nullable UIImage *)finishedSelectedImage NS_DEPRECATED_IOS(5_0,7_0) __TVOS_PROHIBITED;
- (nullable UIImage *)finishedUnselectedImage NS_DEPRECATED_IOS(5_0,7_0) __TVOS_PROHIBITED;

/* To set item label text attributes use the appearance selectors available on the superclass, UIBarItem.
 
 Use the following to tweak the relative position of the label within the tab button (for handling visual centering corrections if needed because of custom text attributes)
 */
@property (nonatomic, readwrite, assign) UIOffset titlePositionAdjustment NS_AVAILABLE_IOS(5_0) UI_APPEARANCE_SELECTOR;

/// If this item displays a badge, this color will be used for the badge's background. If set to nil, the default background color will be used instead.
@property (nonatomic, readwrite, copy, nullable) UIColor *badgeColor NS_AVAILABLE_IOS(10_0) UI_APPEARANCE_SELECTOR;

/// Provide text attributes to use to draw the badge text for the given singular control state (Normal, Disabled, Focused, Selected, or Highlighted). Default values will be supplied for keys that are not provided by this dictionary. See NSAttributedString.h for details on what keys are available.
- (void)setBadgeTextAttributes:(nullable NSDictionary<NSString *,id> *)textAttributes forState:(UIControlState)state NS_AVAILABLE_IOS(10_0) UI_APPEARANCE_SELECTOR;

/// Returns attributes previously set via -setBadgeTextAttributes:forState:.
- (nullable NSDictionary<NSString *,id> *)badgeTextAttributesForState:(UIControlState)state NS_AVAILABLE_IOS(10_0) UI_APPEARANCE_SELECTOR;

@end

START_COPYRIGHT__JIANSHU_BAIKAISHUILN__WechatPublic_Codeidea__END
NS_ASSUME_NONNULL_END
