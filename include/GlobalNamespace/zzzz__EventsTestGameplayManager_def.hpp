#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
namespace UnityEngine {
struct KeyCode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class EventsTestGameplayManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0;
}
// Type: ::MockBeatToTimeConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5110))
// CS Name: EventsTestGameplayManager::MockBeatToTimeConvertor
class CORDL_TYPE ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IBeatToTimeConvertor
constexpr operator  ::GlobalNamespace::IBeatToTimeConvertor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor(____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor(____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor& operator=(____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor&& o) noexcept = default;
  constexpr ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor& operator=(____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__bpm, put=__set__bpm))  _bpm;

constexpr void __set__bpm(float_t value) ;

constexpr float_t __get__bpm() const;


// Methods

// Ctor Parameters [CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor(float_t bpm) ;

/// @brief Method .ctor addr 0x226daf4 size 0x28 virtual false final false
 void _ctor(float_t bpm) ;

/// @brief Method ConvertBeatToTime addr 0x227078c size 0x18 virtual true final true
 float_t ConvertBeatToTime(float_t beat) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass18_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5111))
// CS Name: EventsTestGameplayManager::<>c__DisplayClass18_0
class CORDL_TYPE ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0& operator=(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0& operator=(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_lightGroupId, put=__set_lightGroupId))  lightGroupId;

constexpr void __set_lightGroupId(int32_t value) ;

constexpr int32_t __get_lightGroupId() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0() ;

/// @brief Method .ctor addr 0x2270118 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddEventsForLightGroup>b__0 addr 0x22707a4 size 0x30 virtual false final false
 bool _AddEventsForLightGroup_b__0(::GlobalNamespace::LightGroup x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass19_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5112))
// CS Name: EventsTestGameplayManager::<>c__DisplayClass19_0
class CORDL_TYPE ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0& operator=(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0& operator=(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_lightGroupId, put=__set_lightGroupId))  lightGroupId;

constexpr void __set_lightGroupId(int32_t value) ;

constexpr int32_t __get_lightGroupId() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0() ;

/// @brief Method .ctor addr 0x2270120 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddInstantToggleEventsForLightGroup>b__0 addr 0x22707d4 size 0x30 virtual false final false
 bool _AddInstantToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass20_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5113))
// CS Name: EventsTestGameplayManager::<>c__DisplayClass20_0
class CORDL_TYPE ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0& operator=(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0& operator=(____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_lightGroupId, put=__set_lightGroupId))  lightGroupId;

constexpr void __set_lightGroupId(int32_t value) ;

constexpr int32_t __get_lightGroupId() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0() ;

/// @brief Method .ctor addr 0x2270128 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddToggleEventsForLightGroup>b__0 addr 0x2270804 size 0x30 virtual false final false
 bool _AddToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EventsTestGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5114))
// CS Name: EventsTestGameplayManager
class CORDL_TYPE EventsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass20_0 = ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0;

using __c__DisplayClass19_0 = ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0;

using __c__DisplayClass18_0 = ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0;

using MockBeatToTimeConvertor = ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~EventsTestGameplayManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager", modifiers: " const&", def_value: None }]
constexpr EventsTestGameplayManager(EventsTestGameplayManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager", modifiers: "&&", def_value: None }]
constexpr EventsTestGameplayManager(EventsTestGameplayManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventsTestGameplayManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EventsTestGameplayManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventsTestGameplayManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventsTestGameplayManager& operator=(EventsTestGameplayManager&& o) noexcept = default;
  constexpr EventsTestGameplayManager& operator=(EventsTestGameplayManager const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__moveTime, put=__set__moveTime))  _moveTime;

constexpr void __set__moveTime(bool value) ;

constexpr bool __get__moveTime() const;

 bool __declspec(property(get=__get__spawnTestBox, put=__set__spawnTestBox))  _spawnTestBox;

constexpr void __set__spawnTestBox(bool value) ;

constexpr bool __get__spawnTestBox() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::BeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(::GlobalNamespace::BeatmapData value) ;

constexpr ::GlobalNamespace::BeatmapData __get__beatmapData() const;

 ::GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value) ;

constexpr ::GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__basicBeatmapEventType, put=__set__basicBeatmapEventType))  _basicBeatmapEventType;

constexpr void __set__basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__basicBeatmapEventType() const;

 float_t __declspec(property(get=__get__floatValue, put=__set__floatValue))  _floatValue;

constexpr void __set__floatValue(float_t value) ;

constexpr float_t __get__floatValue() const;

/// @brief Field kNumberOfLightGroups offset 0
static constexpr int32_t  kNumberOfLightGroups{20};

 ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList> __declspec(property(get=__get__beatmapEventDataBoxGroupLists, put=__set__beatmapEventDataBoxGroupLists))  _beatmapEventDataBoxGroupLists;

constexpr void __set__beatmapEventDataBoxGroupLists(::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList> value) ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList> __get__beatmapEventDataBoxGroupLists() const;

 ::ArrayW<bool> __declspec(property(get=__get_groupState, put=__set_groupState))  groupState;

constexpr void __set_groupState(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_groupState() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,::GlobalNamespace::BasicBeatmapEventType> __declspec(property(get=__get__beatmapEventTypeBindings, put=__set__beatmapEventTypeBindings))  _beatmapEventTypeBindings;

constexpr void __set__beatmapEventTypeBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,::GlobalNamespace::BasicBeatmapEventType> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,::GlobalNamespace::BasicBeatmapEventType> __get__beatmapEventTypeBindings() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> __declspec(property(get=__get__intBindings, put=__set__intBindings))  _intBindings;

constexpr void __set__intBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> __get__intBindings() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> __declspec(property(get=__get__beatmapValuesBindings, put=__set__beatmapValuesBindings))  _beatmapValuesBindings;

constexpr void __set__beatmapValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> __get__beatmapValuesBindings() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,float_t> __declspec(property(get=__get__floatValuesBindings, put=__set__floatValuesBindings))  _floatValuesBindings;

constexpr void __set__floatValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,float_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,float_t> __get__floatValuesBindings() const;

 bool __declspec(property(get=__get__rotatingLasers, put=__set__rotatingLasers))  _rotatingLasers;

constexpr void __set__rotatingLasers(bool value) ;

constexpr bool __get__rotatingLasers() const;


// Methods

/// @brief Method Start addr 0x226d9dc size 0x118 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x226db1c size 0x87c virtual false final false
 void Update() ;

/// @brief Method AddEventsForLightGroup addr 0x226e398 size 0x930 virtual false final false
 void AddEventsForLightGroup(int32_t lightGroupId) ;

/// @brief Method AddInstantToggleEventsForLightGroup addr 0x226f264 size 0x470 virtual false final false
 void AddInstantToggleEventsForLightGroup(int32_t lightGroupId) ;

/// @brief Method AddToggleEventsForLightGroup addr 0x226ecc8 size 0x59c virtual false final false
 void AddToggleEventsForLightGroup(int32_t lightGroupId, ::GlobalNamespace::EnvironmentColorType color) ;

/// @brief Method AddTestBox addr 0x226f6d4 size 0xa44 virtual false final false
 void AddTestBox() ;

// Ctor Parameters []
explicit EventsTestGameplayManager() ;

/// @brief Method .ctor addr 0x2270130 size 0x65c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager, "", "EventsTestGameplayManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor, "", "EventsTestGameplayManager/MockBeatToTimeConvertor");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0, "", "EventsTestGameplayManager/<>c__DisplayClass18_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0, "", "EventsTestGameplayManager/<>c__DisplayClass19_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0, "", "EventsTestGameplayManager/<>c__DisplayClass20_0");
