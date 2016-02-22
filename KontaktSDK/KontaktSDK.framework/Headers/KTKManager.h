//
//  KontaktSDK
//  Version: 1.0.9
//
//  Copyright (c) 2015 Kontakt.io. All rights reserved.
//

#import "KTKCloudModel.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Manager roles
 *
 *  @see https://support.kontakt.io/hc/en-gb/articles/204897781-6-User-types-roles-Managers
 */
typedef NS_ENUM(NSUInteger, KTKManagerRole) {
    /**
     *  Unknown Role
     */
    KTKManagerRoleUnknown,
    /**
     *  Superuser Role
     */
    KTKManagerRoleSuperuser,
    /**
     *  Administrator Role
     */
    KTKManagerRoleAdmin,
    /**
     *  Operator Role
     */
    KTKManagerRoleOperator,
};

#pragma mark - KTKManager (Interface)
@interface KTKManager : NSObject <KTKCloudModel>

#pragma mark - Manager Properties
///--------------------------------------------------------------------
/// @name Manager Properties
///--------------------------------------------------------------------

/**
 *  The manager ID. (read-only)
 */
@property (nonatomic, strong, readonly) NSUUID *managerID;

/**
 *  The manager's supervisor ID. (read-only)
 */
@property (nonatomic, strong, readonly) NSUUID * _Nullable supervisorID;

/**
 *  The manager's first name. (read-only)
 */
@property (nonatomic, strong, readonly) NSString *firstName;

/**
 *  The manager's last name. (read-only)
 */
@property (nonatomic, strong, readonly) NSString *lastName;

/**
 *  An email address. (read-only)
 */
@property (nonatomic, strong, readonly) NSString *email;

/**
 *  The manager's API Key. (read-only)
 */
@property (nonatomic, strong, readonly) NSString *apiKey;

/**
 *  The manager's user role. (read-only)
 *
 *  @see KTKManagerRole
 */
@property (nonatomic, assign, readonly) KTKManagerRole role;

@end

NS_ASSUME_NONNULL_END
