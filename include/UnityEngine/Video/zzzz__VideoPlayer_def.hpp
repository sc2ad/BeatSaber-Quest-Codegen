#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::Video {
struct VideoTimeReference;
}
namespace UnityEngine::Video {
class VideoClip;
}
// Forward declare root types
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine::Video {
class ____UnityEngine__Video__VideoPlayer__ErrorEventHandler;
}
namespace UnityEngine::Video {
class ____UnityEngine__Video__VideoPlayer__EventHandler;
}
namespace UnityEngine::Video {
class ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class ____UnityEngine__Video__VideoPlayer__TimeEventHandler;
}
// Type: ::EventHandler
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15916))
// CS Name: UnityEngine.Video.VideoPlayer::EventHandler
class CORDL_TYPE ____UnityEngine__Video__VideoPlayer__EventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__Video__VideoPlayer__EventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Video__VideoPlayer__EventHandler", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Video__VideoPlayer__EventHandler(____UnityEngine__Video__VideoPlayer__EventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Video__VideoPlayer__EventHandler", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Video__VideoPlayer__EventHandler(____UnityEngine__Video__VideoPlayer__EventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Video__VideoPlayer__EventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__Video__VideoPlayer__EventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Video__VideoPlayer__EventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Video__VideoPlayer__EventHandler& operator=(____UnityEngine__Video__VideoPlayer__EventHandler&& o) noexcept = default;
  constexpr ____UnityEngine__Video__VideoPlayer__EventHandler& operator=(____UnityEngine__Video__VideoPlayer__EventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__Video__VideoPlayer__EventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d3837c size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d38450 size 0x14 virtual true final false
 void Invoke(::UnityEngine::Video::VideoPlayer source) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
// Type: ::ErrorEventHandler
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15917))
// CS Name: UnityEngine.Video.VideoPlayer::ErrorEventHandler
class CORDL_TYPE ____UnityEngine__Video__VideoPlayer__ErrorEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__Video__VideoPlayer__ErrorEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Video__VideoPlayer__ErrorEventHandler", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Video__VideoPlayer__ErrorEventHandler(____UnityEngine__Video__VideoPlayer__ErrorEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Video__VideoPlayer__ErrorEventHandler", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Video__VideoPlayer__ErrorEventHandler(____UnityEngine__Video__VideoPlayer__ErrorEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Video__VideoPlayer__ErrorEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__Video__VideoPlayer__ErrorEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Video__VideoPlayer__ErrorEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Video__VideoPlayer__ErrorEventHandler& operator=(____UnityEngine__Video__VideoPlayer__ErrorEventHandler&& o) noexcept = default;
  constexpr ____UnityEngine__Video__VideoPlayer__ErrorEventHandler& operator=(____UnityEngine__Video__VideoPlayer__ErrorEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__Video__VideoPlayer__ErrorEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d38464 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d3853c size 0x14 virtual true final false
 void Invoke(::UnityEngine::Video::VideoPlayer source, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
// Type: ::FrameReadyEventHandler
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15918))
// CS Name: UnityEngine.Video.VideoPlayer::FrameReadyEventHandler
class CORDL_TYPE ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler(____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler(____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler& operator=(____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler&& o) noexcept = default;
  constexpr ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler& operator=(____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d38550 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d38628 size 0x14 virtual true final false
 void Invoke(::UnityEngine::Video::VideoPlayer source, int64_t frameIdx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
// Type: ::TimeEventHandler
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15919))
// CS Name: UnityEngine.Video.VideoPlayer::TimeEventHandler
class CORDL_TYPE ____UnityEngine__Video__VideoPlayer__TimeEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__Video__VideoPlayer__TimeEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Video__VideoPlayer__TimeEventHandler", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Video__VideoPlayer__TimeEventHandler(____UnityEngine__Video__VideoPlayer__TimeEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Video__VideoPlayer__TimeEventHandler", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Video__VideoPlayer__TimeEventHandler(____UnityEngine__Video__VideoPlayer__TimeEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Video__VideoPlayer__TimeEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__Video__VideoPlayer__TimeEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Video__VideoPlayer__TimeEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Video__VideoPlayer__TimeEventHandler& operator=(____UnityEngine__Video__VideoPlayer__TimeEventHandler&& o) noexcept = default;
  constexpr ____UnityEngine__Video__VideoPlayer__TimeEventHandler& operator=(____UnityEngine__Video__VideoPlayer__TimeEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__Video__VideoPlayer__TimeEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d3863c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d38714 size 0x14 virtual true final false
 void Invoke(::UnityEngine::Video::VideoPlayer source, double_t seconds) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
// Type: UnityEngine.Video::VideoPlayer
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15920))
// CS Name: UnityEngine.Video.VideoPlayer
class CORDL_TYPE VideoPlayer : public ::UnityEngine::Behaviour {
public:
// Declarations
using TimeEventHandler = ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__TimeEventHandler;

using FrameReadyEventHandler = ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler;

using ErrorEventHandler = ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__ErrorEventHandler;

using EventHandler = ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~VideoPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: " const&", def_value: None }]
constexpr VideoPlayer(VideoPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "&&", def_value: None }]
constexpr VideoPlayer(VideoPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VideoPlayer(void* ptr) noexcept : ::UnityEngine::Behaviour(ptr) {
}


  constexpr VideoPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VideoPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VideoPlayer& operator=(VideoPlayer&& o) noexcept = default;
  constexpr VideoPlayer& operator=(VideoPlayer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __declspec(property(get=__get_prepareCompleted, put=__set_prepareCompleted))  prepareCompleted;

constexpr void __set_prepareCompleted(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler value) ;

constexpr ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __get_prepareCompleted() const;

 ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __declspec(property(get=__get_loopPointReached, put=__set_loopPointReached))  loopPointReached;

constexpr void __set_loopPointReached(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler value) ;

constexpr ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __get_loopPointReached() const;

 ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __declspec(property(get=__get_started, put=__set_started))  started;

constexpr void __set_started(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler value) ;

constexpr ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __get_started() const;

 ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __declspec(property(get=__get_frameDropped, put=__set_frameDropped))  frameDropped;

constexpr void __set_frameDropped(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler value) ;

constexpr ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __get_frameDropped() const;

 ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__ErrorEventHandler __declspec(property(get=__get_errorReceived, put=__set_errorReceived))  errorReceived;

constexpr void __set_errorReceived(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__ErrorEventHandler value) ;

constexpr ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__ErrorEventHandler __get_errorReceived() const;

 ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __declspec(property(get=__get_seekCompleted, put=__set_seekCompleted))  seekCompleted;

constexpr void __set_seekCompleted(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler value) ;

constexpr ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler __get_seekCompleted() const;

 ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__TimeEventHandler __declspec(property(get=__get_clockResyncOccurred, put=__set_clockResyncOccurred))  clockResyncOccurred;

constexpr void __set_clockResyncOccurred(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__TimeEventHandler value) ;

constexpr ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__TimeEventHandler __get_clockResyncOccurred() const;

 ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler __declspec(property(get=__get_frameReady, put=__set_frameReady))  frameReady;

constexpr void __set_frameReady(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler value) ;

constexpr ::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler __get_frameReady() const;


// Properties

 ::UnityEngine::Video::VideoClip __declspec(property(get=get_clip, put=set_clip))  clip;

 ::UnityEngine::Texture __declspec(property(get=get_texture))  texture;

 bool __declspec(property(get=get_isPlaying))  isPlaying;

 int64_t __declspec(property(put=set_frame))  frame;

 float_t __declspec(property(put=set_playbackSpeed))  playbackSpeed;

 ::UnityEngine::Video::VideoTimeReference __declspec(property(put=set_timeReference))  timeReference;

 uint64_t __declspec(property(get=get_frameCount))  frameCount;

 float_t __declspec(property(get=get_frameRate))  frameRate;


// Methods

/// @brief Method get_clip addr 0x2d37f18 size 0x3c virtual false final false
 ::UnityEngine::Video::VideoClip get_clip() ;

/// @brief Method set_clip addr 0x2d37f54 size 0x44 virtual false final false
 void set_clip(::UnityEngine::Video::VideoClip value) ;

/// @brief Method get_texture addr 0x2d37f98 size 0x3c virtual false final false
 ::UnityEngine::Texture get_texture() ;

/// @brief Method Play addr 0x2d37fd4 size 0x3c virtual false final false
 void Play() ;

/// @brief Method Stop addr 0x2d38010 size 0x3c virtual false final false
 void Stop() ;

/// @brief Method get_isPlaying addr 0x2d3804c size 0x3c virtual false final false
 bool get_isPlaying() ;

/// @brief Method set_frame addr 0x2d38088 size 0x44 virtual false final false
 void set_frame(int64_t value) ;

/// @brief Method set_playbackSpeed addr 0x2d380cc size 0x4c virtual false final false
 void set_playbackSpeed(float_t value) ;

/// @brief Method set_timeReference addr 0x2d38118 size 0x44 virtual false final false
 void set_timeReference(::UnityEngine::Video::VideoTimeReference value) ;

/// @brief Method get_frameCount addr 0x2d3815c size 0x3c virtual false final false
 uint64_t get_frameCount() ;

/// @brief Method get_frameRate addr 0x2d38198 size 0x3c virtual false final false
 float_t get_frameRate() ;

/// @brief Method InvokePrepareCompletedCallback_Internal addr 0x2d381d4 size 0x34 virtual false final false
static void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer source) ;

/// @brief Method InvokeFrameReadyCallback_Internal addr 0x2d38208 size 0x38 virtual false final false
static void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer source, int64_t frameIdx) ;

/// @brief Method InvokeLoopPointReachedCallback_Internal addr 0x2d38240 size 0x34 virtual false final false
static void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer source) ;

/// @brief Method InvokeStartedCallback_Internal addr 0x2d38274 size 0x34 virtual false final false
static void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer source) ;

/// @brief Method InvokeFrameDroppedCallback_Internal addr 0x2d382a8 size 0x34 virtual false final false
static void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer source) ;

/// @brief Method InvokeErrorReceivedCallback_Internal addr 0x2d382dc size 0x38 virtual false final false
static void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer source, ::StringW errorStr) ;

/// @brief Method InvokeSeekCompletedCallback_Internal addr 0x2d38314 size 0x34 virtual false final false
static void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer source) ;

/// @brief Method InvokeClockResyncOccurredCallback_Internal addr 0x2d38348 size 0x34 virtual false final false
static void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer source, double_t seconds) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer, "UnityEngine.Video", "VideoPlayer");
NEED_NO_BOX(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__ErrorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__ErrorEventHandler, "UnityEngine.Video", "VideoPlayer/ErrorEventHandler");
NEED_NO_BOX(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__EventHandler, "UnityEngine.Video", "VideoPlayer/EventHandler");
NEED_NO_BOX(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__FrameReadyEventHandler, "UnityEngine.Video", "VideoPlayer/FrameReadyEventHandler");
NEED_NO_BOX(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__TimeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::____UnityEngine__Video__VideoPlayer__TimeEventHandler, "UnityEngine.Video", "VideoPlayer/TimeEventHandler");
