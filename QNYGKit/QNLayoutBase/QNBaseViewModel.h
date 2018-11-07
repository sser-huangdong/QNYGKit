//
//  QNBaseViewModel.h
//  QNYGKit
//
//  Created by Zhengjie Huan on 2018/9/17.
//  Copyright © 2018 jayhuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QNViewModelItem.h"
#import "QNViewModelProtocol.h"

@interface QNBaseViewModel : NSObject<QNViewModelProtocol>

+ (Class)do_dataModelClass;
+ (Class)do_layoutModelClass;

@end
