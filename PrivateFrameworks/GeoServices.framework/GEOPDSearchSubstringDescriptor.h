/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying> {
    int _beginIndex;
    int _endIndex;
    int _stringType;
}

@property int beginIndex;
@property int endIndex;
@property int stringType;

- (int)beginIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBeginIndex:(int)arg1;
- (void)setEndIndex:(int)arg1;
- (void)setStringType:(int)arg1;
- (int)stringType;
- (void)writeTo:(id)arg1;

@end