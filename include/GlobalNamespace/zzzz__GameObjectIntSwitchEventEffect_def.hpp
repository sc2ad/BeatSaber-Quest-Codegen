#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectIntSwitchEventEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList;
}
// Type: ::GameObjectValueList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5011))
// CS Name: GameObjectIntSwitchEventEffect::GameObjectValueList
class CORDL_TYPE GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList(GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList(GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList& operator=(GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList&& o) noexcept = default;
  constexpr GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList& operator=(GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get_gameObjects, put=__set_gameObjects))  gameObjects;

constexpr void __set_gameObjects(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get_gameObjects() const;

 bool __declspec(property(get=__get__isActive_k__BackingField, put=__set__isActive_k__BackingField))  _isActive_k__BackingField;

constexpr void __set__isActive_k__BackingField(bool value) ;

constexpr bool __get__isActive_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isActive, put=set_isActive))  isActive;


// Methods

/// @brief Method get_isActive addr 0x225c014 size 0x8 virtual false final false
 bool get_isActive() ;

/// @brief Method set_isActive addr 0x225c01c size 0xc virtual false final false
 void set_isActive(bool value) ;

/// @brief Method SetActive addr 0x225bf90 size 0x7c virtual false final false
 void SetActive(bool active) ;

static GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList New_ctor() ;

/// @brief Method .ctor addr 0x225c028 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameObjectIntSwitchEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5012))
// CS Name: GameObjectIntSwitchEventEffect
class CORDL_TYPE GameObjectIntSwitchEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using GameObjectValueList = GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GameObjectIntSwitchEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectIntSwitchEventEffect", modifiers: " const&", def_value: None }]
constexpr GameObjectIntSwitchEventEffect(GameObjectIntSwitchEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectIntSwitchEventEffect", modifiers: "&&", def_value: None }]
constexpr GameObjectIntSwitchEventEffect(GameObjectIntSwitchEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameObjectIntSwitchEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameObjectIntSwitchEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameObjectIntSwitchEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameObjectIntSwitchEventEffect& operator=(GameObjectIntSwitchEventEffect&& o) noexcept = default;
  constexpr GameObjectIntSwitchEventEffect& operator=(GameObjectIntSwitchEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__beatmapEventType, put=__set__beatmapEventType))  _beatmapEventType;

constexpr void __set__beatmapEventType(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__beatmapEventType() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList> __declspec(property(get=__get__gameObjectsValueLists, put=__set__gameObjectsValueLists))  _gameObjectsValueLists;

constexpr void __set__gameObjectsValueLists(::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList> __get__gameObjectsValueLists() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;

 System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList> __declspec(property(get=__get__valueToListMap, put=__set__valueToListMap))  _valueToListMap;

constexpr void __set__valueToListMap(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList> __get__valueToListMap() const;

 int32_t __declspec(property(get=__get__previousActiveIdx, put=__set__previousActiveIdx))  _previousActiveIdx;

constexpr void __set__previousActiveIdx(int32_t value) ;

constexpr int32_t __get__previousActiveIdx() const;


// Methods

/// @brief Method Start addr 0x225bc8c size 0x194 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x225be20 size 0x2c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBasicBeatmapEventData addr 0x225be4c size 0x144 virtual false final false
 void HandleBasicBeatmapEventData(GlobalNamespace::BasicBeatmapEventData data) ;

static GlobalNamespace::GameObjectIntSwitchEventEffect New_ctor() ;

/// @brief Method .ctor addr 0x225c00c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameObjectIntSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameObjectIntSwitchEventEffect, "", "GameObjectIntSwitchEventEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameObjectIntSwitchEventEffect__GameObjectValueList, "", "GameObjectIntSwitchEventEffect/GameObjectValueList");
