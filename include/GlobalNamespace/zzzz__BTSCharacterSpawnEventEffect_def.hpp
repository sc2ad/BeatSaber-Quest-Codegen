#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class AnimationClip;
}
namespace GlobalNamespace {
struct EnvironmentContext;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnEventEffect;
}
// Type: ::BTSCharacterSpawnEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3958))
// CS Name: BTSCharacterSpawnEventEffect
class CORDL_TYPE BTSCharacterSpawnEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~BTSCharacterSpawnEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventEffect", modifiers: " const&", def_value: None }]
constexpr BTSCharacterSpawnEventEffect(BTSCharacterSpawnEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventEffect", modifiers: "&&", def_value: None }]
constexpr BTSCharacterSpawnEventEffect(BTSCharacterSpawnEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSCharacterSpawnEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSCharacterSpawnEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSCharacterSpawnEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSCharacterSpawnEventEffect& operator=(BTSCharacterSpawnEventEffect&& o) noexcept = default;
  constexpr BTSCharacterSpawnEventEffect& operator=(BTSCharacterSpawnEventEffect const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__animationStartAheadTime, put=__set__animationStartAheadTime))  _animationStartAheadTime;

constexpr void __set__animationStartAheadTime(float_t value) ;

constexpr float_t __get__animationStartAheadTime() const;

 GlobalNamespace::BTSCharacterDataModel __declspec(property(get=__get__btsCharacterDataModel, put=__set__btsCharacterDataModel))  _btsCharacterDataModel;

constexpr void __set__btsCharacterDataModel(GlobalNamespace::BTSCharacterDataModel value) ;

constexpr GlobalNamespace::BTSCharacterDataModel __get__btsCharacterDataModel() const;

 UnityEngine::Transform __declspec(property(get=__get__characterWrapper, put=__set__characterWrapper))  _characterWrapper;

constexpr void __set__characterWrapper(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__characterWrapper() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get__beatmapData() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 GlobalNamespace::EnvironmentContext __declspec(property(get=__get__environmentContext, put=__set__environmentContext))  _environmentContext;

constexpr void __set__environmentContext(GlobalNamespace::EnvironmentContext value) ;

constexpr GlobalNamespace::EnvironmentContext __get__environmentContext() const;

 System::Action_1<GlobalNamespace::BTSCharacter> __declspec(property(get=__get_startCharacterAnimationEvent, put=__set_startCharacterAnimationEvent))  startCharacterAnimationEvent;

constexpr void __set_startCharacterAnimationEvent(System::Action_1<GlobalNamespace::BTSCharacter> value) ;

constexpr System::Action_1<GlobalNamespace::BTSCharacter> __get_startCharacterAnimationEvent() const;

/// @brief Field kCharacterDisplayEventType offset 0
static GlobalNamespace::BasicBeatmapEventType const kCharacterDisplayEventType;

 System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BTSCharacter> __declspec(property(get=__get__idsToCharacterPrefabsDictionary, put=__set__idsToCharacterPrefabsDictionary))  _idsToCharacterPrefabsDictionary;

constexpr void __set__idsToCharacterPrefabsDictionary(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BTSCharacter> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BTSCharacter> __get__idsToCharacterPrefabsDictionary() const;

 System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BTSCharacter> __declspec(property(get=__get__idsToCharactersDictionary, put=__set__idsToCharactersDictionary))  _idsToCharactersDictionary;

constexpr void __set__idsToCharactersDictionary(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BTSCharacter> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BTSCharacter> __get__idsToCharactersDictionary() const;

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::AnimationClip> __declspec(property(get=__get__idsToAnimationClipsDictionary, put=__set__idsToAnimationClipsDictionary))  _idsToAnimationClipsDictionary;

constexpr void __set__idsToAnimationClipsDictionary(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::AnimationClip> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::AnimationClip> __get__idsToAnimationClipsDictionary() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __declspec(property(get=__get__asyncOperationHandles, put=__set__asyncOperationHandles))  _asyncOperationHandles;

constexpr void __set__asyncOperationHandles(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __get__asyncOperationHandles() const;


// Properties

 bool __declspec(property(get=get_isInitialized))  isInitialized;


// Methods

/// @brief Method add_startCharacterAnimationEvent addr 0x20a7ed0 size 0xb0 virtual false final false
 void add_startCharacterAnimationEvent(System::Action_1<GlobalNamespace::BTSCharacter> value) ;

/// @brief Method remove_startCharacterAnimationEvent addr 0x20a8320 size 0xb0 virtual false final false
 void remove_startCharacterAnimationEvent(System::Action_1<GlobalNamespace::BTSCharacter> value) ;

/// @brief Method get_isInitialized addr 0x20a8720 size 0x8 virtual false final false
 bool get_isInitialized() ;

/// @brief Method Start addr 0x20a8728 size 0x5a8 virtual false final false
 void Start() ;

/// @brief Method LoadAddressables addr 0x20a8cd0 size 0x86c virtual false final false
 void LoadAddressables() ;

/// @brief Method CleanupAddressables addr 0x20a96bc size 0x154 virtual false final false
 void CleanupAddressables() ;

/// @brief Method OnDestroy addr 0x20a9810 size 0x28 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x20a9838 size 0x144 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method GetCharacterWithAnimationClip addr 0x20a954c size 0x170 virtual false final false
static System::Tuple_2<GlobalNamespace::BTSCharacter,UnityEngine::AnimationClip> GetCharacterWithAnimationClip(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::BTSCharacter> charDictionary, System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::AnimationClip> animDictionary, int32_t prefabId, int32_t animationId) ;

static GlobalNamespace::BTSCharacterSpawnEventEffect New_ctor() ;

/// @brief Method .ctor addr 0x20a9984 size 0x130 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BTSCharacterSpawnEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnEventEffect, "", "BTSCharacterSpawnEventEffect");
