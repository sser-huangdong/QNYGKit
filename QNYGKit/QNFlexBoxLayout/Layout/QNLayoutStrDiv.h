//
//  QNLayoutStrDiv.h
//  QNYGKit
//
//  Created by Zhengjie Huan on 2018/10/20.
//  Copyright © 2018 jayhuan. All rights reserved.
//

#import "QNLayoutDiv.h"
#import "QNLayoutCalProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface QNLayoutStrDiv : QNLayoutDiv<QNLayoutCalProtocol>
@property(nonatomic, copy, readonly) NSAttributedString *calAttributedStr;
+ (instancetype)layoutStrDivWithCalAttrStr:(NSAttributedString *)calAttrStr;
@end

NS_ASSUME_NONNULL_END
