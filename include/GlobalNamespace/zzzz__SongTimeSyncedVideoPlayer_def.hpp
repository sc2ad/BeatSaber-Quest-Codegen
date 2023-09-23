#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace GlobalNamespace {
struct EnvironmentContext;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17;
}
namespace GlobalNamespace {
class SongTimeSyncedVideoPlayer;
}
// Type: ::<WaitForDependenciesAndPlay>d__17
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6050))
// CS Name: SongTimeSyncedVideoPlayer::<WaitForDependenciesAndPlay>d__17
class CORDL_TYPE GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17(GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17(GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17& operator=(GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17&& o) noexcept = default;
  constexpr GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17& operator=(GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::SongTimeSyncedVideoPlayer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SongTimeSyncedVideoPlayer value) ;

constexpr GlobalNamespace::SongTimeSyncedVideoPlayer __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21b0968 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21b0b6c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21b0b70 size 0xfc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21b0c6c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21b0c74 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21b0cb4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SongTimeSyncedVideoPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6051))
// CS Name: SongTimeSyncedVideoPlayer
class CORDL_TYPE SongTimeSyncedVideoPlayer : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using _WaitForDependenciesAndPlay_d__17 = GlobalNamespace::GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~SongTimeSyncedVideoPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeSyncedVideoPlayer", modifiers: " const&", def_value: None }]
constexpr SongTimeSyncedVideoPlayer(SongTimeSyncedVideoPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeSyncedVideoPlayer", modifiers: "&&", def_value: None }]
constexpr SongTimeSyncedVideoPlayer(SongTimeSyncedVideoPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongTimeSyncedVideoPlayer(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr SongTimeSyncedVideoPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongTimeSyncedVideoPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongTimeSyncedVideoPlayer& operator=(SongTimeSyncedVideoPlayer&& o) noexcept = default;
  constexpr SongTimeSyncedVideoPlayer& operator=(SongTimeSyncedVideoPlayer const& o) noexcept = default;
                


// Fields

 UnityEngine::Video::VideoPlayer __declspec(property(get=__get__videoPlayer, put=__set__videoPlayer))  _videoPlayer;

constexpr void __set__videoPlayer(UnityEngine::Video::VideoPlayer value) ;

constexpr UnityEngine::Video::VideoPlayer __get__videoPlayer() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 GlobalNamespace::EnvironmentContext __declspec(property(get=__get__environmentContext, put=__set__environmentContext))  _environmentContext;

constexpr void __set__environmentContext(GlobalNamespace::EnvironmentContext value) ;

constexpr GlobalNamespace::EnvironmentContext __get__environmentContext() const;

static int32_t __declspec(property(get=__get__colorId, put=__set__colorId))  _colorId;

static void __set__colorId(int32_t value) ;

static int32_t __get__colorId() ;

static int32_t __declspec(property(get=__get__textureId, put=__set__textureId))  _textureId;

static void __set__textureId(int32_t value) ;

static int32_t __get__textureId() ;

static int32_t __declspec(property(get=__get__textureStId, put=__set__textureStId))  _textureStId;

static void __set__textureStId(int32_t value) ;

static int32_t __get__textureStId() ;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 UnityEngine::Coroutine __declspec(property(get=__get__waitForDependenciesAndPlayCoroutine, put=__set__waitForDependenciesAndPlayCoroutine))  _waitForDependenciesAndPlayCoroutine;

constexpr void __set__waitForDependenciesAndPlayCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__waitForDependenciesAndPlayCoroutine() const;


// Methods

/// @brief Method Start addr 0x21b0270 size 0x60 virtual true final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21b0338 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x21b0388 size 0x1f8 virtual false final false
 void Update() ;

/// @brief Method LateUpdate addr 0x21b0580 size 0x164 virtual false final false
 void LateUpdate() ;

/// @brief Method ColorWasSet addr 0x21b06e4 size 0x8 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

/// @brief Method SetVideoClip addr 0x21b06ec size 0x1c virtual false final false
 void SetVideoClip(UnityEngine::Video::VideoClip videoClip) ;

/// @brief Method SetSpriteAndStopVideo addr 0x21b0708 size 0x260 virtual false final false
 void SetSpriteAndStopVideo(UnityEngine::Sprite sprite) ;

/// @brief Method StopVideoPlayer addr 0x21b033c size 0x4c virtual false final false
 void StopVideoPlayer() ;

/// @brief Method WaitForDependenciesAndPlay addr 0x21b02d0 size 0x68 virtual false final false
 System::Collections::IEnumerator WaitForDependenciesAndPlay() ;

// Ctor Parameters []
explicit SongTimeSyncedVideoPlayer() ;

/// @brief Method .ctor addr 0x21b0990 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method <WaitForDependenciesAndPlay>b__17_0 addr 0x21b0a68 size 0x104 virtual false final false
 bool _WaitForDependenciesAndPlay_b__17_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongTimeSyncedVideoPlayer___WaitForDependenciesAndPlay_d__17, "", "SongTimeSyncedVideoPlayer/<WaitForDependenciesAndPlay>d__17");
NEED_NO_BOX(GlobalNamespace::SongTimeSyncedVideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongTimeSyncedVideoPlayer, "", "SongTimeSyncedVideoPlayer");
