//
//  QNLayoutFixedSizeDiv.m
//  QNYGKit
//
//  Created by Zhengjie Huan on 2018/10/20.
//  Copyright © 2018 jayhuan. All rights reserved.
//

#import "QNLayoutFixedSizeDiv.h"

@interface QNLayoutFixedSizeDiv ()
@property(nonatomic, assign) CGSize fixedSize;
@end

@implementation QNLayoutFixedSizeDiv
+ (instancetype)layoutFixedSizeDivWithFixedSize:(CGSize)fixedSize {
    QNLayoutFixedSizeDiv *div = [self linerLayoutDiv];
    [div qn_makeLayout:^(QNLayout *layout) {
        layout.size.equalToSize(fixedSize);
    }];
    div.fixedSize = fixedSize;
    return div;
}

- (void)qn_layoutWithSize:(CGSize)size {
    [super qn_layoutWithSize:self.fixedSize];
}

- (void)qn_asyncLayoutWithSize:(CGSize)size {
    [super qn_asyncLayoutWithSize:self.fixedSize];
}

@end
