#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class SongTimeSyncedVideoPlayer;
}
namespace GlobalNamespace {
class VideoProjectionDataModelSO;
}
namespace GlobalNamespace {
struct EnvironmentContext;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace GlobalNamespace {
class ____GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionEffect;
}
namespace GlobalNamespace {
class ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior;
}
namespace GlobalNamespace {
class ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior;
}
namespace GlobalNamespace {
class ____GlobalNamespace__VideoProjectionEffect__InitData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior;
}
namespace GlobalNamespace {
class ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0;
}
namespace GlobalNamespace {
struct ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5074))
// CS Name: VideoProjectionEffect::InitData
class CORDL_TYPE ____GlobalNamespace__VideoProjectionEffect__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__VideoProjectionEffect__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VideoProjectionEffect__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__VideoProjectionEffect__InitData(____GlobalNamespace__VideoProjectionEffect__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VideoProjectionEffect__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__VideoProjectionEffect__InitData(____GlobalNamespace__VideoProjectionEffect__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__VideoProjectionEffect__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__VideoProjectionEffect__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__VideoProjectionEffect__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__VideoProjectionEffect__InitData& operator=(____GlobalNamespace__VideoProjectionEffect__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__VideoProjectionEffect__InitData& operator=(____GlobalNamespace__VideoProjectionEffect__InitData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;


// Methods

// Ctor Parameters [CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__VideoProjectionEffect__InitData(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x2268318 size 0x28 virtual false final false
 void _ctor(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass7_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5075))
// CS Name: VideoProjectionEffect::VideoProjectionBehavior::<>c__DisplayClass7_0
class CORDL_TYPE ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0(______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0(______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0& operator=(______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0&& o) noexcept = default;
  constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0& operator=(______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_eventValue, put=__set_eventValue))  eventValue;

constexpr void __set_eventValue(int32_t value) ;

constexpr int32_t __get_eventValue() const;


// Methods

// Ctor Parameters []
explicit ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x22686a8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LoadVideoFromModel>b__0 addr 0x2268744 size 0x24 virtual false final false
 bool _LoadVideoFromModel_b__0(::GlobalNamespace::____GlobalNamespace__VideoProjectionDataModelSO__VideoClipWithId clipWithId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadPreviewCoverAsset>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5076))
// CS Name: VideoProjectionEffect::VideoProjectionBehavior::<LoadPreviewCoverAsset>d__8
struct CORDL_TYPE ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> __u__1) noexcept;


                    constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8 const&) = default;
                    constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8&&) = default;
                    constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8& operator=(______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8& operator=(______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2268768 size 0x2dc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2268a44 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VideoProjectionBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5077))
// CS Name: VideoProjectionEffect::VideoProjectionBehavior
class CORDL_TYPE ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _LoadPreviewCoverAsset_d__8 = ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8;

using __c__DisplayClass7_0 = ::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior& operator=(____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior&& o) noexcept = default;
  constexpr ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior& operator=(____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__eventValue, put=__set__eventValue))  _eventValue;

constexpr void __set__eventValue(int32_t value) ;

constexpr int32_t __get__eventValue() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip> __declspec(property(get=__get__videoClipHandle, put=__set__videoClipHandle))  _videoClipHandle;

constexpr void __set__videoClipHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip> value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip> __get__videoClipHandle() const;

 ::GlobalNamespace::VideoProjectionDataModelSO __declspec(property(get=__get__model, put=__set__model))  _model;

constexpr void __set__model(::GlobalNamespace::VideoProjectionDataModelSO value) ;

constexpr ::GlobalNamespace::VideoProjectionDataModelSO __get__model() const;

 ::GlobalNamespace::SongTimeSyncedVideoPlayer __declspec(property(get=__get__videoPlayer, put=__set__videoPlayer))  _videoPlayer;

constexpr void __set__videoPlayer(::GlobalNamespace::SongTimeSyncedVideoPlayer value) ;

constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer __get__videoPlayer() const;

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__previewBeatmapLevel, put=__set__previewBeatmapLevel))  _previewBeatmapLevel;

constexpr void __set__previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get__previewBeatmapLevel() const;


// Methods

// Ctor Parameters [CppParam { name: "dataModel", ty: "::GlobalNamespace::VideoProjectionDataModelSO", modifiers: "", def_value: None }, CppParam { name: "videoPlayer", ty: "::GlobalNamespace::SongTimeSyncedVideoPlayer", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x2268340 size 0x3c virtual false final false
 void _ctor(::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method Dispose addr 0x226837c size 0xb0 virtual true final false
 void Dispose() ;

/// @brief Method LoadVideoFromModel addr 0x226842c size 0x27c virtual false final false
 void LoadVideoFromModel(int32_t eventValue) ;

/// @brief Method LoadPreviewCoverAsset addr 0x22686b0 size 0x94 virtual false final false
 void LoadPreviewCoverAsset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapEditorVideoProjectionBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5077))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5078))
// CS Name: VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior
class CORDL_TYPE ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior : public ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(ptr) {
}


  constexpr ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior& operator=(____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior&& o) noexcept = default;
  constexpr ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior& operator=(____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__callbackWrapper, put=__set__callbackWrapper))  _callbackWrapper;

constexpr void __set__callbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__callbackWrapper() const;


// Methods

// Ctor Parameters [CppParam { name: "beatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData", modifiers: "", def_value: None }, CppParam { name: "dataModel", ty: "::GlobalNamespace::VideoProjectionDataModelSO", modifiers: "", def_value: None }, CppParam { name: "videoPlayer", ty: "::GlobalNamespace::SongTimeSyncedVideoPlayer", modifiers: "", def_value: None }, CppParam { name: "videoEventType", ty: "::GlobalNamespace::BasicBeatmapEventType", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "::GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x22680cc size 0x22c virtual false final false
 void _ctor(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method Dispose addr 0x2268a50 size 0x28 virtual true final false
 void Dispose() ;

/// @brief Method HandleBeatmapEvent addr 0x2268a78 size 0xec virtual false final false
 void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayVideoProjectionBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5077))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5079))
// CS Name: VideoProjectionEffect::GameplayVideoProjectionBehavior
class CORDL_TYPE ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior : public ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior(____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior(____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior(ptr) {
}


  constexpr ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior& operator=(____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior&& o) noexcept = default;
  constexpr ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior& operator=(____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "beatmapData", ty: "::GlobalNamespace::IReadonlyBeatmapData", modifiers: "", def_value: None }, CppParam { name: "dataModel", ty: "::GlobalNamespace::VideoProjectionDataModelSO", modifiers: "", def_value: None }, CppParam { name: "videoPlayer", ty: "::GlobalNamespace::SongTimeSyncedVideoPlayer", modifiers: "", def_value: None }, CppParam { name: "videoEventType", ty: "::GlobalNamespace::BasicBeatmapEventType", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x2267f94 size 0x138 virtual false final false
 void _ctor(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VideoProjectionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5080))
// CS Name: VideoProjectionEffect
class CORDL_TYPE VideoProjectionEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GameplayVideoProjectionBehavior = ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior;

using BeatmapEditorVideoProjectionBehavior = ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior;

using VideoProjectionBehavior = ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior;

using InitData = ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~VideoProjectionEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionEffect", modifiers: " const&", def_value: None }]
constexpr VideoProjectionEffect(VideoProjectionEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionEffect", modifiers: "&&", def_value: None }]
constexpr VideoProjectionEffect(VideoProjectionEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VideoProjectionEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VideoProjectionEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VideoProjectionEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VideoProjectionEffect& operator=(VideoProjectionEffect&& o) noexcept = default;
  constexpr VideoProjectionEffect& operator=(VideoProjectionEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::VideoProjectionDataModelSO __declspec(property(get=__get__videoProjectionDataModel, put=__set__videoProjectionDataModel))  _videoProjectionDataModel;

constexpr void __set__videoProjectionDataModel(::GlobalNamespace::VideoProjectionDataModelSO value) ;

constexpr ::GlobalNamespace::VideoProjectionDataModelSO __get__videoProjectionDataModel() const;

 ::GlobalNamespace::SongTimeSyncedVideoPlayer __declspec(property(get=__get__videoPlayer, put=__set__videoPlayer))  _videoPlayer;

constexpr void __set__videoPlayer(::GlobalNamespace::SongTimeSyncedVideoPlayer value) ;

constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer __get__videoPlayer() const;

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__videoEventType, put=__set__videoEventType))  _videoEventType;

constexpr void __set__videoEventType(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__videoEventType() const;

 ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData __get__initData() const;

 ::GlobalNamespace::EnvironmentContext __declspec(property(get=__get__environmentContext, put=__set__environmentContext))  _environmentContext;

constexpr void __set__environmentContext(::GlobalNamespace::EnvironmentContext value) ;

constexpr ::GlobalNamespace::EnvironmentContext __get__environmentContext() const;

 ::GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData __get__beatmapData() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior __declspec(property(get=__get__behavior, put=__set__behavior))  _behavior;

constexpr void __set__behavior(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior __get__behavior() const;


// Methods

/// @brief Method Start addr 0x2267e88 size 0x10c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x22682f8 size 0x18 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit VideoProjectionEffect() ;

/// @brief Method .ctor addr 0x2268310 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect, "", "VideoProjectionEffect");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior, "", "VideoProjectionEffect/BeatmapEditorVideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__GameplayVideoProjectionBehavior, "", "VideoProjectionEffect/GameplayVideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__InitData, "", "VideoProjectionEffect/InitData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior, "", "VideoProjectionEffect/VideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0, "", "VideoProjectionEffect/VideoProjectionBehavior/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______GlobalNamespace__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, "", "VideoProjectionEffect/VideoProjectionBehavior/<LoadPreviewCoverAsset>d__8");
