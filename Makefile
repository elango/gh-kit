
COMMAND=xcodebuild
COMMAND30=/Developer/Platforms/iPhoneSimulator.platform/Developer/usr/bin/xcodebuild

default:
	$(COMMAND) -target GHKit -configuration Debug -sdk macosx10.5 -project GHKit.xcodeproj

docs:
	/Applications/Doxygen.app/Contents/Resources/doxygen

# If you need to clean a specific target/configuration: $(COMMAND) -target $(TARGET) -configuration DebugOrRelease -sdk $(SDK) clean
clean:
	-rm -rf build/*

test:
	GHUNIT_CLI=1 $(COMMAND) -target GHKitTests -configuration Debug -sdk macosx10.5 -project GHKit.xcodeproj
	
test-iphone:
	GHUNIT_CLI=1 $(COMMAND) -target GHKitIPhoneTests -configuration Debug -sdk iphonesimulator2.2 -project GHKitIPhone.xcodeproj

test-iphone-3_0:
	GHUNIT_CLI=1 $(COMMAND30) -target GHKitIPhoneTests -configuration Debug -sdk iphonesimulator3.0 -project GHKitIPhone.xcodeproj
