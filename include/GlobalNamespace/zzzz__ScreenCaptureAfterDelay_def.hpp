#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__ScreenCaptureCache__ScreenshotType;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class ScreenCaptureCache;
}
namespace GlobalNamespace {
class MainEffectController;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ScreenCaptureAfterDelay__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6;
}
namespace GlobalNamespace {
class ScreenCaptureAfterDelay;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15324))
// CS Name: ScreenCaptureAfterDelay::InitData
class CORDL_TYPE GlobalNamespace__ScreenCaptureAfterDelay__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__ScreenCaptureAfterDelay__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScreenCaptureAfterDelay__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ScreenCaptureAfterDelay__InitData(GlobalNamespace__ScreenCaptureAfterDelay__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScreenCaptureAfterDelay__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ScreenCaptureAfterDelay__InitData(GlobalNamespace__ScreenCaptureAfterDelay__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScreenCaptureAfterDelay__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ScreenCaptureAfterDelay__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ScreenCaptureAfterDelay__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ScreenCaptureAfterDelay__InitData& operator=(GlobalNamespace__ScreenCaptureAfterDelay__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__ScreenCaptureAfterDelay__InitData& operator=(GlobalNamespace__ScreenCaptureAfterDelay__InitData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType __declspec(property(get=__get_screenshotType, put=__set_screenshotType))  screenshotType;

constexpr void __set_screenshotType(GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType value) ;

constexpr GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType __get_screenshotType() const;

 float_t __declspec(property(get=__get_screenCaptureTime, put=__set_screenCaptureTime))  screenCaptureTime;

constexpr void __set_screenCaptureTime(float_t value) ;

constexpr float_t __get_screenCaptureTime() const;

 int32_t __declspec(property(get=__get_pixelsWidth, put=__set_pixelsWidth))  pixelsWidth;

constexpr void __set_pixelsWidth(int32_t value) ;

constexpr int32_t __get_pixelsWidth() const;

 int32_t __declspec(property(get=__get_pixelsHeight, put=__set_pixelsHeight))  pixelsHeight;

constexpr void __set_pixelsHeight(int32_t value) ;

constexpr int32_t __get_pixelsHeight() const;


// Methods

// Ctor Parameters [CppParam { name: "screenshotType", ty: "GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType", modifiers: "", def_value: None }, CppParam { name: "screenCaptureTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pixelsWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pixelsHeight", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__ScreenCaptureAfterDelay__InitData(GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth, int32_t pixelsHeight) ;

/// @brief Method .ctor addr 0x267a388 size 0x60 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType screenshotType, float_t screenCaptureTime, int32_t pixelsWidth, int32_t pixelsHeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Start>d__6
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15325))
// CS Name: ScreenCaptureAfterDelay::<Start>d__6
class CORDL_TYPE GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6(GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6(GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6& operator=(GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6&& o) noexcept = default;
  constexpr GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6& operator=(GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::ScreenCaptureAfterDelay __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ScreenCaptureAfterDelay value) ;

constexpr GlobalNamespace::ScreenCaptureAfterDelay __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2679fbc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x267a3e8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x267a3ec size 0x1dc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x267a5c8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x267a5d0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x267a610 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScreenCaptureAfterDelay
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15326))
// CS Name: ScreenCaptureAfterDelay
class CORDL_TYPE ScreenCaptureAfterDelay : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__6 = GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6;

using InitData = GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ScreenCaptureAfterDelay() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay", modifiers: " const&", def_value: None }]
constexpr ScreenCaptureAfterDelay(ScreenCaptureAfterDelay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureAfterDelay", modifiers: "&&", def_value: None }]
constexpr ScreenCaptureAfterDelay(ScreenCaptureAfterDelay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenCaptureAfterDelay(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScreenCaptureAfterDelay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenCaptureAfterDelay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenCaptureAfterDelay& operator=(ScreenCaptureAfterDelay&& o) noexcept = default;
  constexpr ScreenCaptureAfterDelay& operator=(ScreenCaptureAfterDelay const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainEffectController __declspec(property(get=__get__mainEffectController, put=__set__mainEffectController))  _mainEffectController;

constexpr void __set__mainEffectController(GlobalNamespace::MainEffectController value) ;

constexpr GlobalNamespace::MainEffectController __get__mainEffectController() const;

 GlobalNamespace::ScreenCaptureCache __declspec(property(get=__get__screenCaptureCache, put=__set__screenCaptureCache))  _screenCaptureCache;

constexpr void __set__screenCaptureCache(GlobalNamespace::ScreenCaptureCache value) ;

constexpr GlobalNamespace::ScreenCaptureCache __get__screenCaptureCache() const;

 GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay__InitData __get__initData() const;

 UnityEngine::Texture2D __declspec(property(get=__get__captureTexture, put=__set__captureTexture))  _captureTexture;

constexpr void __set__captureTexture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get__captureTexture() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__captureRenderTexture, put=__set__captureRenderTexture))  _captureRenderTexture;

constexpr void __set__captureRenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__captureRenderTexture() const;


// Methods

/// @brief Method Start addr 0x2679f54 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

/// @brief Method OnDestroy addr 0x2679fe4 size 0xe0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMainEffectControllerAfterImageEffectEvent addr 0x267a0c4 size 0x210 virtual false final false
 void HandleMainEffectControllerAfterImageEffectEvent(UnityEngine::RenderTexture renderTexture) ;

// Ctor Parameters []
explicit ScreenCaptureAfterDelay() ;

/// @brief Method .ctor addr 0x267a380 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay__InitData, "", "ScreenCaptureAfterDelay/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScreenCaptureAfterDelay___Start_d__6, "", "ScreenCaptureAfterDelay/<Start>d__6");
NEED_NO_BOX(GlobalNamespace::ScreenCaptureAfterDelay);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureAfterDelay, "", "ScreenCaptureAfterDelay");
