#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ScreenshotRecorder__RecordingType;
}
namespace GlobalNamespace {
class ScreenshotRecorder;
}
// Type: ::RecordingType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13826))
// CS Name: ScreenshotRecorder::RecordingType
struct CORDL_TYPE GlobalNamespace__ScreenshotRecorder__RecordingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ScreenshotRecorder__RecordingType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ScreenshotRecorder__RecordingType(GlobalNamespace__ScreenshotRecorder__RecordingType const&) = default;
                    constexpr GlobalNamespace__ScreenshotRecorder__RecordingType(GlobalNamespace__ScreenshotRecorder__RecordingType&&) = default;
                    constexpr GlobalNamespace__ScreenshotRecorder__RecordingType& operator=(GlobalNamespace__ScreenshotRecorder__RecordingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ScreenshotRecorder__RecordingType& operator=(GlobalNamespace__ScreenshotRecorder__RecordingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScreenshotRecorder__RecordingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ScreenshotRecorder__RecordingType_Unwrapped : int32_t {
__Sequence = 0,
__Stereo360Sequence = 1,
__Mono360Sequence = 2,
__F10ForScreenshot = 3,
__Interval = 4,
__ScreenshotOnPause = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ScreenshotRecorder__RecordingType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ScreenshotRecorder__RecordingType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Sequence offset 0
static GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType const Sequence;

/// @brief Field Stereo360Sequence offset 0
static GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType const Stereo360Sequence;

/// @brief Field Mono360Sequence offset 0
static GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType const Mono360Sequence;

/// @brief Field F10ForScreenshot offset 0
static GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType const F10ForScreenshot;

/// @brief Field Interval offset 0
static GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType const Interval;

/// @brief Field ScreenshotOnPause offset 0
static GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType const ScreenshotOnPause;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScreenshotRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13827))
// CS Name: ScreenshotRecorder
class CORDL_TYPE ScreenshotRecorder : public UnityEngine::MonoBehaviour {
public:
// Declarations
using RecordingType = GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~ScreenshotRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenshotRecorder", modifiers: " const&", def_value: None }]
constexpr ScreenshotRecorder(ScreenshotRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenshotRecorder", modifiers: "&&", def_value: None }]
constexpr ScreenshotRecorder(ScreenshotRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenshotRecorder(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScreenshotRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenshotRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenshotRecorder& operator=(ScreenshotRecorder&& o) noexcept = default;
  constexpr ScreenshotRecorder& operator=(ScreenshotRecorder const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__directory, put=__set__directory))  _directory;

constexpr void __set__directory(::StringW value) ;

constexpr ::StringW __get__directory() const;

 UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__camera() const;

 int32_t __declspec(property(get=__get__frameRate, put=__set__frameRate))  _frameRate;

constexpr void __set__frameRate(int32_t value) ;

constexpr int32_t __get__frameRate() const;

 bool __declspec(property(get=__get__forceFixedFramerate, put=__set__forceFixedFramerate))  _forceFixedFramerate;

constexpr void __set__forceFixedFramerate(bool value) ;

constexpr bool __get__forceFixedFramerate() const;

 int32_t __declspec(property(get=__get__interval, put=__set__interval))  _interval;

constexpr void __set__interval(int32_t value) ;

constexpr int32_t __get__interval() const;

 GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType __declspec(property(get=__get__recordingType, put=__set__recordingType))  _recordingType;

constexpr void __set__recordingType(GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType value) ;

constexpr GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType __get__recordingType() const;

 bool __declspec(property(get=__get__pauseWithPButton, put=__set__pauseWithPButton))  _pauseWithPButton;

constexpr void __set__pauseWithPButton(bool value) ;

constexpr bool __get__pauseWithPButton() const;

 int32_t __declspec(property(get=__get__antiAlias, put=__set__antiAlias))  _antiAlias;

constexpr void __set__antiAlias(int32_t value) ;

constexpr int32_t __get__antiAlias() const;

 int32_t __declspec(property(get=__get__screenshotWidth, put=__set__screenshotWidth))  _screenshotWidth;

constexpr void __set__screenshotWidth(int32_t value) ;

constexpr int32_t __get__screenshotWidth() const;

 int32_t __declspec(property(get=__get__screenshotHeight, put=__set__screenshotHeight))  _screenshotHeight;

constexpr void __set__screenshotHeight(int32_t value) ;

constexpr int32_t __get__screenshotHeight() const;

 int32_t __declspec(property(get=__get__counter, put=__set__counter))  _counter;

constexpr void __set__counter(int32_t value) ;

constexpr int32_t __get__counter() const;

 float_t __declspec(property(get=__get__originalTimeScale, put=__set__originalTimeScale))  _originalTimeScale;

constexpr void __set__originalTimeScale(float_t value) ;

constexpr float_t __get__originalTimeScale() const;

 bool __declspec(property(get=__get__paused, put=__set__paused))  _paused;

constexpr void __set__paused(bool value) ;

constexpr bool __get__paused() const;

 int32_t __declspec(property(get=__get__frameNum, put=__set__frameNum))  _frameNum;

constexpr void __set__frameNum(int32_t value) ;

constexpr int32_t __get__frameNum() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__cubemapLeftEye, put=__set__cubemapLeftEye))  _cubemapLeftEye;

constexpr void __set__cubemapLeftEye(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__cubemapLeftEye() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__cubemapRighEye, put=__set__cubemapRighEye))  _cubemapRighEye;

constexpr void __set__cubemapRighEye(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__cubemapRighEye() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__equirectTexture, put=__set__equirectTexture))  _equirectTexture;

constexpr void __set__equirectTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__equirectTexture() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__cameraRenderTexture, put=__set__cameraRenderTexture))  _cameraRenderTexture;

constexpr void __set__cameraRenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__cameraRenderTexture() const;


// Properties

 ::StringW __declspec(property(get=get_directory, put=set_directory))  directory;


// Methods

/// @brief Method get_directory addr 0x1f7a5e4 size 0x8 virtual false final false
 ::StringW get_directory() ;

/// @brief Method set_directory addr 0x1f7a5ec size 0x8 virtual false final false
 void set_directory(::StringW value) ;

/// @brief Method OnEnable addr 0x1f7a5f4 size 0x178 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f7a76c size 0xc4 virtual false final false
 void OnDisable() ;

/// @brief Method LateUpdate addr 0x1f7a830 size 0xc0 virtual false final false
 void LateUpdate() ;

/// @brief Method OnApplicationFocus addr 0x1f7a974 size 0x18 virtual false final false
 void OnApplicationFocus(bool hasFocus) ;

/// @brief Method SaveCameraScreenshot addr 0x1f7a8f0 size 0x84 virtual false final false
 void SaveCameraScreenshot() ;

/// @brief Method SaveTextureScreenshot addr 0x1f7aaa8 size 0x140 virtual false final false
 void SaveTextureScreenshot(UnityEngine::Texture2D tex) ;

/// @brief Method ConvertRenderTexture addr 0x1f7a98c size 0x11c virtual false final false
 UnityEngine::Texture2D ConvertRenderTexture(UnityEngine::RenderTexture renderTexture) ;

// Ctor Parameters []
explicit ScreenshotRecorder() ;

/// @brief Method .ctor addr 0x1f7abe8 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScreenshotRecorder__RecordingType, "", "ScreenshotRecorder/RecordingType");
NEED_NO_BOX(GlobalNamespace::ScreenshotRecorder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenshotRecorder, "", "ScreenshotRecorder");
