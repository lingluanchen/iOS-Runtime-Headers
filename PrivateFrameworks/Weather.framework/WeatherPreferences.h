/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class <ServiceLogoControllerDelegate>, <SynchronizedDefaultsDelegate>, NSArray, NSMutableData, NSString, NSURLConnection;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate> {
    NSString *_UUID;
    NSURLConnection *_gtBacksideLogoConnection;
    NSMutableData *_gtBacksideLogoData;
    NSURLConnection *_gtButtonLogoConnection;
    NSMutableData *_gtButtonLogoData;
    BOOL _isCelsius;
    NSArray *_lastUbiquitousWrittenDefaults;
    NSString *_secondaryServiceHost;
    BOOL _serviceDebugging;
    NSString *_serviceHost;
    <ServiceLogoControllerDelegate> *_serviceLogoDelegate;
    <SynchronizedDefaultsDelegate> *_syncDelegate;
    NSString *twcURLString;
    NSString *yahooWeatherURLString;
}

@property <ServiceLogoControllerDelegate> * serviceLogoDelegate;
@property <SynchronizedDefaultsDelegate> * syncDelegate;
@property(copy) NSString * twcURLString;
@property(copy) NSString * yahooWeatherURLString;

+ (id)serviceDebuggingPath;
+ (id)sharedPreferences;

- (id)UUID;
- (BOOL)_areDefaultCities:(id)arg1;
- (BOOL)_arePrefsNotCurrent;
- (id)_cacheDirectoryPath;
- (id)_cityArrayToCloudCityArray:(id)arg1;
- (id)_defaultCities;
- (BOOL)_defaultsAreValid;
- (id)_getWoeidFromLocationID:(id)arg1;
- (id)_ppt_addFakeTestCities;
- (void)_saveUbiquitousDefaults:(id)arg1;
- (void)_setLastUbiquitousWrittenDefaults:(id)arg1 isCloudCityArray:(BOOL)arg2;
- (void)_syncToCloudIfNotDefaultCities:(id)arg1;
- (void)_synchronizedDefaultsDidChange:(id)arg1;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)combineCloudCities:(id)arg1 withExisting:(id)arg2 byAppending:(BOOL)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (BOOL)isCelsius;
- (BOOL)isLocalWeatherEnabled;
- (int)loadActiveCity;
- (void)loadFromDisk;
- (id)loadSavedCities;
- (BOOL)loadUnits;
- (id)localWeatherCity;
- (id)logoButtonImage;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)primaryBacksideLogoImage;
- (id)readDefaultValueForKey:(id)arg1;
- (void)registerDefaultPreferences;
- (void)resetLocale;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(int)arg2;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToUbiquitousStore;
- (id)secondBacksideLogoImage;
- (id)secondaryServiceBacksideImage;
- (id)secondaryServiceHost;
- (id)secondaryServiceLogoURL;
- (BOOL)serviceDebugging;
- (id)serviceHost;
- (id)serviceLogoDelegate;
- (void)setActiveCity:(int)arg1;
- (void)setCelsius:(BOOL)arg1;
- (void)setLocalWeatherEnabled:(BOOL)arg1;
- (void)setServiceLogoDelegate:(id)arg1;
- (void)setSyncDelegate:(id)arg1;
- (void)setTwcURLString:(id)arg1;
- (void)setYahooWeatherURLString:(id)arg1;
- (id)syncDelegate;
- (void)synchronizeStateToDisk;
- (id)twcLogoURL;
- (id)twcURLString;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)yahooLogoURL;
- (id)yahooWeatherURLString;

@end