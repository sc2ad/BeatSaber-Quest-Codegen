#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
class Version;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveDataItem;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
template<typename T>
class BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__Axis;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__EaseType;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion3 {
struct BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType;
}
namespace GlobalNamespace {
struct BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType;
}
namespace GlobalNamespace {
struct BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType;
}
namespace GlobalNamespace {
struct BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__EventBox;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
template<::cordl_internals::il2cpp_reference_type T>
class BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<T>;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__SliderData;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData;
}
namespace GlobalNamespace {
class BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword;
}
// Type: ::BeatmapSaveDataItem
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14963))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::BeatmapSaveDataItem
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem>
constexpr operator  System::IComparable_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;


// Properties

 float_t __declspec(property(get=get_beat))  beat;


// Methods

/// @brief Method get_beat addr 0xd9aa38 size 0x8 virtual false final false
 float_t get_beat() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(float_t beat) ;

/// @brief Method .ctor addr 0xd9aa40 size 0x28 virtual false final false
 void _ctor(float_t beat) ;

/// @brief Method CompareTo addr 0xd9aa68 size 0x2c virtual true final true
 int32_t CompareTo(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::BasicEventData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14964))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::BasicEventData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData const& o) noexcept = default;
                


// Fields

 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType __declspec(property(get=__get_et, put=__set_et))  et;

constexpr void __set_et(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType value) ;

constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType __get_et() const;

 int32_t __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(int32_t value) ;

constexpr int32_t __get_i() const;

 float_t __declspec(property(get=__get_f, put=__set_f))  f;

constexpr void __set_f(float_t value) ;

constexpr float_t __get_f() const;


// Properties

 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType __declspec(property(get=get_eventType))  eventType;

 int32_t __declspec(property(get=get_value))  value;

 float_t __declspec(property(get=get_floatValue))  floatValue;


// Methods

/// @brief Method get_eventType addr 0xd9aa94 size 0x8 virtual false final false
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType get_eventType() ;

/// @brief Method get_value addr 0xd9aa9c size 0x8 virtual false final false
 int32_t get_value() ;

/// @brief Method get_floatValue addr 0xd9aaa4 size 0x8 virtual false final false
 float_t get_floatValue() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eventType", ty: "BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData(float_t beat, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType eventType, int32_t value, float_t floatValue) ;

/// @brief Method .ctor addr 0xd9a8ac size 0x44 virtual false final false
 void _ctor(float_t beat, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType eventType, int32_t value, float_t floatValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::ColorBoostEventData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14965))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::ColorBoostEventData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData(BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData(BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_o, put=__set_o))  o;

constexpr void __set_o(bool value) ;

constexpr bool __get_o() const;


// Properties

 bool __declspec(property(get=get_boost))  boost;


// Methods

/// @brief Method get_boost addr 0xd9aaac size 0x8 virtual false final false
 bool get_boost() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "boost", ty: "bool", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData(float_t beat, bool boost) ;

/// @brief Method .ctor addr 0xd9a874 size 0x38 virtual false final false
 void _ctor(float_t beat, bool boost) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::BpmChangeEventData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14966))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::BpmChangeEventData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData(BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData(BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m, put=__set_m))  m;

constexpr void __set_m(float_t value) ;

constexpr float_t __get_m() const;


// Properties

 float_t __declspec(property(get=get_bpm))  bpm;


// Methods

/// @brief Method get_bpm addr 0xd9aab4 size 0x8 virtual false final false
 float_t get_bpm() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData(float_t beat, float_t bpm) ;

/// @brief Method .ctor addr 0xd9a750 size 0x2c virtual false final false
 void _ctor(float_t beat, float_t bpm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::ExecutionTime
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14967))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::ExecutionTime
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime(BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime(BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime_Unwrapped : int32_t {
__Early = 0,
__Late = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Early offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime const Early;

/// @brief Field Late offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime const Late;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::RotationEventData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14968))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::RotationEventData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData(BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData(BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData const& o) noexcept = default;
                


// Fields

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime __get_e() const;

 float_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(float_t value) ;

constexpr float_t __get_r() const;


// Properties

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime __declspec(property(get=get_executionTime))  executionTime;

 float_t __declspec(property(get=get_rotation))  rotation;


// Methods

/// @brief Method get_executionTime addr 0xd9aabc size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime get_executionTime() ;

/// @brief Method get_rotation addr 0xd9aac4 size 0x8 virtual false final false
 float_t get_rotation() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "executionTime", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData(float_t beat, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime executionTime, float_t rotation) ;

/// @brief Method .ctor addr 0xd9a834 size 0x40 virtual false final false
 void _ctor(float_t beat, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime executionTime, float_t rotation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::BasicEventTypesForKeyword
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14969))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::BasicEventTypesWithKeywords::BasicEventTypesForKeyword
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_k, put=__set_k))  k;

constexpr void __set_k(::StringW value) ;

constexpr ::StringW __get_k() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> __get_e() const;


// Properties

 ::StringW __declspec(property(get=get_keyword))  keyword;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> __declspec(property(get=get_eventTypes))  eventTypes;


// Methods

/// @brief Method get_keyword addr 0xd9aad4 size 0x8 virtual false final false
 ::StringW get_keyword() ;

/// @brief Method get_eventTypes addr 0xd9aadc size 0x8 virtual false final false
 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> get_eventTypes() ;

// Ctor Parameters [CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "eventTypes", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword(::StringW keyword, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> eventTypes) ;

/// @brief Method .ctor addr 0xd9a8f0 size 0x2c virtual false final false
 void _ctor(::StringW keyword, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> eventTypes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BasicEventTypesWithKeywords
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14970))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::BasicEventTypesWithKeywords
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BasicEventTypesForKeyword = GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword> __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword> __get_d() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword> __declspec(property(get=get_data))  data;


// Methods

/// @brief Method get_data addr 0xd9aacc size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword> get_data() ;

// Ctor Parameters [CppParam { name: "data", ty: "System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword> data) ;

/// @brief Method .ctor addr 0xd9a91c size 0x28 virtual false final false
 void _ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::EnvironmentColorType
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14971))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::EnvironmentColorType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType(BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType(BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType_Unwrapped : int32_t {
__Color0 = 0,
__Color1 = 1,
__ColorWhite = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Color0 offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType const Color0;

/// @brief Field Color1 offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType const Color1;

/// @brief Field ColorWhite offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType const ColorWhite;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::TransitionType
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14972))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::TransitionType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType(BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType(BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType_Unwrapped : int32_t {
__Instant = 0,
__Interpolate = 1,
__Extend = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Instant offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType const Instant;

/// @brief Field Interpolate offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType const Interpolate;

/// @brief Field Extend offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType const Extend;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::Axis
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14973))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::Axis
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__Axis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__Axis(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__Axis(BeatmapSaveDataVersion3__BeatmapSaveData__Axis const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__Axis(BeatmapSaveDataVersion3__BeatmapSaveData__Axis&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__Axis& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__Axis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__Axis& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__Axis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__Axis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__Axis_Unwrapped : int32_t {
__X = 0,
__Y = 1,
__Z = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__Axis_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__Axis_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field X offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis const X;

/// @brief Field Y offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis const Y;

/// @brief Field Z offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis const Z;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::EaseType
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14974))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::EaseType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__EaseType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EaseType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EaseType(BeatmapSaveDataVersion3__BeatmapSaveData__EaseType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EaseType(BeatmapSaveDataVersion3__BeatmapSaveData__EaseType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EaseType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EaseType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EaseType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EaseType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__EaseType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__EaseType_Unwrapped : int32_t {
__None = -1,
__Linear = 0,
__InQuad = 1,
__OutQuad = 2,
__InOutQuad = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__EaseType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__EaseType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType const None;

/// @brief Field Linear offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType const Linear;

/// @brief Field InQuad offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType const InQuad;

/// @brief Field OutQuad offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType const OutQuad;

/// @brief Field InOutQuad offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType const InOutQuad;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::DistributionParamType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14975))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::EventBox::DistributionParamType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType(BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType(BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType_Unwrapped : int32_t {
__Wave = 1,
__Step = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Wave offset 0
static GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType const Wave;

/// @brief Field Step offset 0
static GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType const Step;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EventBox
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14976))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::EventBox
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__EventBox : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DistributionParamType = GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__EventBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__EventBox", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox(BeatmapSaveDataVersion3__BeatmapSaveData__EventBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__EventBox", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox(BeatmapSaveDataVersion3__BeatmapSaveData__EventBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__EventBox(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EventBox&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBox& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EventBox const& o) noexcept = default;
                


// Fields

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter __declspec(property(get=__get_f, put=__set_f))  f;

constexpr void __set_f(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter __get_f() const;

 float_t __declspec(property(get=__get_w, put=__set_w))  w;

constexpr void __set_w(float_t value) ;

constexpr float_t __get_w() const;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType value) ;

constexpr GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __get_d() const;


// Properties

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter __declspec(property(get=get_indexFilter))  indexFilter;

 float_t __declspec(property(get=get_beatDistributionParam))  beatDistributionParam;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __declspec(property(get=get_beatDistributionParamType))  beatDistributionParamType;


// Methods

/// @brief Method get_indexFilter addr 0xd9aae4 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter get_indexFilter() ;

/// @brief Method get_beatDistributionParam addr 0xd9aaec size 0x8 virtual false final false
 float_t get_beatDistributionParam() ;

/// @brief Method get_beatDistributionParamType addr 0xd9aaf4 size 0x8 virtual false final false
 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType get_beatDistributionParamType() ;

// Ctor Parameters [CppParam { name: "indexFilter", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__EventBox(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType) ;

/// @brief Method .ctor addr 0xd9aafc size 0x40 virtual false final false
 void _ctor(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::IndexFilterRandomType
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14977))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::IndexFilterRandomType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType_Unwrapped : int32_t {
__NoRandom = 0,
__KeepOrder = 1,
__RandomElements = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoRandom offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType const NoRandom;

/// @brief Field KeepOrder offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType const KeepOrder;

/// @brief Field RandomElements offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType const RandomElements;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::IndexFilterLimitAlsoAffectsType
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14978))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::IndexFilterLimitAlsoAffectsType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType_Unwrapped : int32_t {
__None = 0,
__Duration = 1,
__Distribution = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const None;

/// @brief Field Duration offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const Duration;

/// @brief Field Distribution offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const Distribution;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::IndexFilterType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14979))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::IndexFilter::IndexFilterType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType_Unwrapped : int32_t {
__Division = 1,
__StepAndOffset = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Division offset 0
static GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType const Division;

/// @brief Field StepAndOffset offset 0
static GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType const StepAndOffset;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IndexFilter
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14980))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::IndexFilter
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using IndexFilterType = GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType __declspec(property(get=__get_f, put=__set_f))  f;

constexpr void __set_f(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType value) ;

constexpr GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType __get_f() const;

 int32_t __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(int32_t value) ;

constexpr int32_t __get_p() const;

 int32_t __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(int32_t value) ;

constexpr int32_t __get_t() const;

 int32_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(int32_t value) ;

constexpr int32_t __get_r() const;

 int32_t __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(int32_t value) ;

constexpr int32_t __get_c() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType __get_n() const;

 int32_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(int32_t value) ;

constexpr int32_t __get_s() const;

 float_t __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(float_t value) ;

constexpr float_t __get_l() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType __get_d() const;


// Properties

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType __declspec(property(get=get_type))  type;

 int32_t __declspec(property(get=get_param0))  param0;

 int32_t __declspec(property(get=get_param1))  param1;

 bool __declspec(property(get=get_reversed))  reversed;

 int32_t __declspec(property(get=get_chunks))  chunks;

 float_t __declspec(property(get=get_limit))  limit;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType __declspec(property(get=get_limitAlsoAffectsType))  limitAlsoAffectsType;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType __declspec(property(get=get_random))  random;

 int32_t __declspec(property(get=get_seed))  seed;


// Methods

/// @brief Method get_type addr 0xd9ab3c size 0x8 virtual false final false
 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType get_type() ;

/// @brief Method get_param0 addr 0xd9ab44 size 0x8 virtual false final false
 int32_t get_param0() ;

/// @brief Method get_param1 addr 0xd9ab4c size 0x8 virtual false final false
 int32_t get_param1() ;

/// @brief Method get_reversed addr 0xd9ab54 size 0x10 virtual false final false
 bool get_reversed() ;

/// @brief Method get_chunks addr 0xd9ab64 size 0x8 virtual false final false
 int32_t get_chunks() ;

/// @brief Method get_limit addr 0xd9ab6c size 0x8 virtual false final false
 float_t get_limit() ;

/// @brief Method get_limitAlsoAffectsType addr 0xd9ab74 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType get_limitAlsoAffectsType() ;

/// @brief Method get_random addr 0xd9ab7c size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType get_random() ;

/// @brief Method get_seed addr 0xd9ab84 size 0x8 virtual false final false
 int32_t get_seed() ;

// Ctor Parameters [CppParam { name: "type", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType", modifiers: "", def_value: None }, CppParam { name: "param0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "param1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reversed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "random", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "chunks", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "limitAlsoAffectsType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType type, int32_t param0, int32_t param1, bool reversed, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType random, int32_t seed, int32_t chunks, float_t limit, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType limitAlsoAffectsType) ;

/// @brief Method .ctor addr 0xd9ab8c size 0x88 virtual false final false
 void _ctor(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType type, int32_t param0, int32_t param1, bool reversed, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType random, int32_t seed, int32_t chunks, float_t limit, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType limitAlsoAffectsType) ;

// Ctor Parameters [CppParam { name: "other", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter other) ;

/// @brief Method .ctor addr 0xd9ac14 size 0x44 virtual false final false
 void _ctor(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter other) ;

/// @brief Method CreateDivisionIndexFilter addr 0xd9ac58 size 0x88 virtual false final false
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter CreateDivisionIndexFilter(int32_t numberOfSections, int32_t divisionIdx, bool reversed) ;

/// @brief Method CreateStepFilter addr 0xd9ace0 size 0x88 virtual false final false
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter CreateStepFilter(int32_t offset, int32_t step, bool reversed) ;

/// @brief Method CreateForExtension addr 0xd9ad68 size 0x74 virtual false final false
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter CreateForExtension() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::LightColorEventBox
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14976))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14981))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightColorEventBox
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(float_t value) ;

constexpr float_t __get_r() const;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType value) ;

constexpr GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __get_t() const;

 int32_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(int32_t value) ;

constexpr int32_t __get_b() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __get_i() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData> __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData> __get_e() const;


// Properties

 float_t __declspec(property(get=get_brightnessDistributionParam))  brightnessDistributionParam;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __declspec(property(get=get_brightnessDistributionParamType))  brightnessDistributionParamType;

 bool __declspec(property(get=get_brightnessDistributionShouldAffectFirstBaseEvent))  brightnessDistributionShouldAffectFirstBaseEvent;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=get_brightnessDistributionEaseType))  brightnessDistributionEaseType;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData> __declspec(property(get=get_lightColorBaseDataList))  lightColorBaseDataList;


// Methods

/// @brief Method get_brightnessDistributionParam addr 0xd9addc size 0x8 virtual false final false
 float_t get_brightnessDistributionParam() ;

/// @brief Method get_brightnessDistributionParamType addr 0xd9ade4 size 0x8 virtual false final false
 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType get_brightnessDistributionParamType() ;

/// @brief Method get_brightnessDistributionShouldAffectFirstBaseEvent addr 0xd9adec size 0x10 virtual false final false
 bool get_brightnessDistributionShouldAffectFirstBaseEvent() ;

/// @brief Method get_brightnessDistributionEaseType addr 0xd9adfc size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType get_brightnessDistributionEaseType() ;

/// @brief Method get_lightColorBaseDataList addr 0xd9ae04 size 0x8 virtual false final false
 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData> get_lightColorBaseDataList() ;

// Ctor Parameters [CppParam { name: "indexFilter", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionShouldAffectFirstBaseEvent", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionParamType", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionEaseType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType", modifiers: "", def_value: None }, CppParam { name: "lightColorBaseDataList", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, bool brightnessDistributionShouldAffectFirstBaseEvent, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType brightnessDistributionParamType, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType brightnessDistributionEaseType, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData> lightColorBaseDataList) ;

/// @brief Method .ctor addr 0xd9ae0c size 0x80 virtual false final false
 void _ctor(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, bool brightnessDistributionShouldAffectFirstBaseEvent, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType brightnessDistributionParamType, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType brightnessDistributionEaseType, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData> lightColorBaseDataList) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::LightColorBaseData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14982))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightColorBaseData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType __get_i() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType __get_c() const;

 float_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(float_t value) ;

constexpr float_t __get_s() const;

 int32_t __declspec(property(get=__get_f, put=__set_f))  f;

constexpr void __set_f(int32_t value) ;

constexpr int32_t __get_f() const;


// Properties

 float_t __declspec(property(get=get_beat))  beat;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType __declspec(property(get=get_transitionType))  transitionType;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType __declspec(property(get=get_colorType))  colorType;

 float_t __declspec(property(get=get_brightness))  brightness;

 int32_t __declspec(property(get=get_strobeBeatFrequency))  strobeBeatFrequency;


// Methods

/// @brief Method get_beat addr 0xd9ae8c size 0x8 virtual false final false
 float_t get_beat() ;

/// @brief Method get_transitionType addr 0xd9ae94 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType get_transitionType() ;

/// @brief Method get_colorType addr 0xd9ae9c size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType get_colorType() ;

/// @brief Method get_brightness addr 0xd9aea4 size 0x8 virtual false final false
 float_t get_brightness() ;

/// @brief Method get_strobeBeatFrequency addr 0xd9aeac size 0x8 virtual false final false
 int32_t get_strobeBeatFrequency() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transitionType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType", modifiers: "", def_value: None }, CppParam { name: "colorType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType", modifiers: "", def_value: None }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "strobeFrequency", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData(float_t beat, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType transitionType, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType colorType, float_t brightness, int32_t strobeFrequency) ;

/// @brief Method .ctor addr 0xd9aeb4 size 0x54 virtual false final false
 void _ctor(float_t beat, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType transitionType, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType colorType, float_t brightness, int32_t strobeFrequency) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::LightRotationEventBox
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14976))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14983))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightRotationEventBox
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(float_t value) ;

constexpr float_t __get_s() const;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType value) ;

constexpr GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __get_t() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis __get_a() const;

 int32_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(int32_t value) ;

constexpr int32_t __get_r() const;

 int32_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(int32_t value) ;

constexpr int32_t __get_b() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __get_i() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData> __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData> __get_l() const;


// Properties

 float_t __declspec(property(get=get_rotationDistributionParam))  rotationDistributionParam;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __declspec(property(get=get_rotationDistributionParamType))  rotationDistributionParamType;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis __declspec(property(get=get_axis))  axis;

 bool __declspec(property(get=get_flipRotation))  flipRotation;

 bool __declspec(property(get=get_rotationDistributionShouldAffectFirstBaseEvent))  rotationDistributionShouldAffectFirstBaseEvent;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=get_rotationDistributionEaseType))  rotationDistributionEaseType;

 System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData> __declspec(property(get=get_lightRotationBaseDataList))  lightRotationBaseDataList;


// Methods

/// @brief Method get_rotationDistributionParam addr 0xd9af08 size 0x8 virtual false final false
 float_t get_rotationDistributionParam() ;

/// @brief Method get_rotationDistributionParamType addr 0xd9af10 size 0x8 virtual false final false
 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType get_rotationDistributionParamType() ;

/// @brief Method get_axis addr 0xd9af18 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis get_axis() ;

/// @brief Method get_flipRotation addr 0xd9af20 size 0x10 virtual false final false
 bool get_flipRotation() ;

/// @brief Method get_rotationDistributionShouldAffectFirstBaseEvent addr 0xd9af30 size 0x10 virtual false final false
 bool get_rotationDistributionShouldAffectFirstBaseEvent() ;

/// @brief Method get_rotationDistributionEaseType addr 0xd9af40 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType get_rotationDistributionEaseType() ;

/// @brief Method get_lightRotationBaseDataList addr 0xd9af48 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData> get_lightRotationBaseDataList() ;

// Ctor Parameters [CppParam { name: "indexFilter", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "rotationDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotationDistributionParamType", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "rotationDistributionShouldAffectFirstBaseEvent", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rotationDistributionEaseType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis", modifiers: "", def_value: None }, CppParam { name: "flipRotation", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lightRotationBaseDataList", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t rotationDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType rotationDistributionEaseType, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis axis, bool flipRotation, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData> lightRotationBaseDataList) ;

/// @brief Method .ctor addr 0xd9af50 size 0x98 virtual false final false
 void _ctor(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t rotationDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType rotationDistributionEaseType, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis axis, bool flipRotation, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData> lightRotationBaseDataList) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::RotationDirection
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14984))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightRotationBaseData::RotationDirection
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection_Unwrapped : int32_t {
__Automatic = 0,
__Clockwise = 1,
__Counterclockwise = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Automatic offset 0
static GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection const Automatic;

/// @brief Field Clockwise offset 0
static GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection const Clockwise;

/// @brief Field Counterclockwise offset 0
static GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection const Counterclockwise;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightRotationBaseData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14985))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightRotationBaseData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RotationDirection = GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;

 int32_t __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(int32_t value) ;

constexpr int32_t __get_p() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __get_e() const;

 int32_t __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(int32_t value) ;

constexpr int32_t __get_l() const;

 float_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(float_t value) ;

constexpr float_t __get_r() const;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection __declspec(property(get=__get_o, put=__set_o))  o;

constexpr void __set_o(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection value) ;

constexpr GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection __get_o() const;


// Properties

 float_t __declspec(property(get=get_beat))  beat;

 bool __declspec(property(get=get_usePreviousEventRotationValue))  usePreviousEventRotationValue;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=get_easeType))  easeType;

 int32_t __declspec(property(get=get_loopsCount))  loopsCount;

 float_t __declspec(property(get=get_rotation))  rotation;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection __declspec(property(get=get_rotationDirection))  rotationDirection;


// Methods

/// @brief Method get_beat addr 0xd9afe8 size 0x8 virtual false final false
 float_t get_beat() ;

/// @brief Method get_usePreviousEventRotationValue addr 0xd9aff0 size 0x10 virtual false final false
 bool get_usePreviousEventRotationValue() ;

/// @brief Method get_easeType addr 0xd9b000 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType get_easeType() ;

/// @brief Method get_loopsCount addr 0xd9b008 size 0x8 virtual false final false
 int32_t get_loopsCount() ;

/// @brief Method get_rotation addr 0xd9b010 size 0x8 virtual false final false
 float_t get_rotation() ;

/// @brief Method get_rotationDirection addr 0xd9b018 size 0x8 virtual false final false
 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection get_rotationDirection() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "usePreviousEventRotationValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType", modifiers: "", def_value: None }, CppParam { name: "loopsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotationDirection", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData(float_t beat, bool usePreviousEventRotationValue, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType easeType, int32_t loopsCount, float_t rotation, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection) ;

/// @brief Method .ctor addr 0xd9b020 size 0x68 virtual false final false
 void _ctor(float_t beat, bool usePreviousEventRotationValue, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType easeType, int32_t loopsCount, float_t rotation, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection rotationDirection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::LightTranslationEventBox
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14976))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14986))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightTranslationEventBox
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(float_t value) ;

constexpr float_t __get_s() const;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType value) ;

constexpr GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __get_t() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis __get_a() const;

 int32_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(int32_t value) ;

constexpr int32_t __get_r() const;

 int32_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(int32_t value) ;

constexpr int32_t __get_b() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __get_i() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData> __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData> __get_l() const;


// Properties

 float_t __declspec(property(get=get_gapDistributionParam))  gapDistributionParam;

 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType __declspec(property(get=get_gapDistributionParamType))  gapDistributionParamType;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis __declspec(property(get=get_axis))  axis;

 bool __declspec(property(get=get_flipTranslation))  flipTranslation;

 bool __declspec(property(get=get_gapDistributionShouldAffectFirstBaseEvent))  gapDistributionShouldAffectFirstBaseEvent;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=get_gapDistributionEaseType))  gapDistributionEaseType;

 System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData> __declspec(property(get=get_lightTranslationBaseDataList))  lightTranslationBaseDataList;


// Methods

/// @brief Method get_gapDistributionParam addr 0xd9b088 size 0x8 virtual false final false
 float_t get_gapDistributionParam() ;

/// @brief Method get_gapDistributionParamType addr 0xd9b090 size 0x8 virtual false final false
 GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType get_gapDistributionParamType() ;

/// @brief Method get_axis addr 0xd9b098 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis get_axis() ;

/// @brief Method get_flipTranslation addr 0xd9b0a0 size 0x10 virtual false final false
 bool get_flipTranslation() ;

/// @brief Method get_gapDistributionShouldAffectFirstBaseEvent addr 0xd9b0b0 size 0x10 virtual false final false
 bool get_gapDistributionShouldAffectFirstBaseEvent() ;

/// @brief Method get_gapDistributionEaseType addr 0xd9b0c0 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType get_gapDistributionEaseType() ;

/// @brief Method get_lightTranslationBaseDataList addr 0xd9b0c8 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData> get_lightTranslationBaseDataList() ;

// Ctor Parameters [CppParam { name: "indexFilter", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionPara", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "gapDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gapDistributionParamType", ty: "GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "gapDistributionShouldAffectFirstBaseEvent", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "gapDistributionEaseType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis", modifiers: "", def_value: None }, CppParam { name: "flipTranslation", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lightTranslationBaseDataList", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, float_t beatDistributionPara, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t gapDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType gapDistributionEaseType, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis axis, bool flipTranslation, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData> lightTranslationBaseDataList) ;

/// @brief Method .ctor addr 0xd9b0d0 size 0x98 virtual false final false
 void _ctor(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter indexFilter, float_t beatDistributionPara, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType beatDistributionParamType, float_t gapDistributionParam, GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType gapDistributionEaseType, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis axis, bool flipTranslation, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData> lightTranslationBaseDataList) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::LightTranslationBaseData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14987))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightTranslationBaseData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;

 int32_t __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(int32_t value) ;

constexpr int32_t __get_p() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __get_e() const;

 float_t __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(float_t value) ;

constexpr float_t __get_t() const;


// Properties

 float_t __declspec(property(get=get_beat))  beat;

 bool __declspec(property(get=get_usePreviousEventTranslationValue))  usePreviousEventTranslationValue;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType __declspec(property(get=get_easeType))  easeType;

 float_t __declspec(property(get=get_translation))  translation;


// Methods

/// @brief Method get_beat addr 0xd9b168 size 0x8 virtual false final false
 float_t get_beat() ;

/// @brief Method get_usePreviousEventTranslationValue addr 0xd9b170 size 0x10 virtual false final false
 bool get_usePreviousEventTranslationValue() ;

/// @brief Method get_easeType addr 0xd9b180 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType get_easeType() ;

/// @brief Method get_translation addr 0xd9b188 size 0x8 virtual false final false
 float_t get_translation() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "usePreviousEventTranslationValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType", modifiers: "", def_value: None }, CppParam { name: "translation", ty: "float_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData(float_t beat, bool usePreviousEventTranslationValue, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType easeType, float_t translation) ;

/// @brief Method .ctor addr 0xd9b190 size 0x50 virtual false final false
 void _ctor(float_t beat, bool usePreviousEventTranslationValue, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType easeType, float_t translation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::EventBoxGroup
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14988))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::EventBoxGroup
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup(BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup(BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(int32_t value) ;

constexpr int32_t __get_g() const;


// Properties

 int32_t __declspec(property(get=get_groupId))  groupId;

 System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox> __declspec(property(get=get_baseEventBoxes))  baseEventBoxes;


// Methods

/// @brief Method get_groupId addr 0xd9b1e0 size 0x8 virtual false final false
 int32_t get_groupId() ;

/// @brief Method get_baseEventBoxes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox> get_baseEventBoxes() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup(float_t beat, int32_t groupId) ;

/// @brief Method .ctor addr 0xd9b1e8 size 0x38 virtual false final false
 void _ctor(float_t beat, int32_t groupId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::EventBoxGroup`1
// Type: ::LightColorEventBoxGroup
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14981)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14989), inst: 1643 }), TypeDefinitionIndex(TypeDefinitionIndex(14989))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14990))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightColorEventBoxGroup
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox>(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventBoxes", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup(float_t beat, int32_t groupId, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox> eventBoxes) ;

/// @brief Method .ctor addr 0xd9b220 size 0x70 virtual false final false
 void _ctor(float_t beat, int32_t groupId, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox> eventBoxes) ;

/// @brief Method CopyWith addr 0xd9b290 size 0xe0 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup CopyWith(System::Nullable_1<float_t> newBeat, System::Nullable_1<int32_t> newGroupId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::LightRotationEventBoxGroup
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14989)), TypeDefinitionIndex(TypeDefinitionIndex(14983)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14989), inst: 1644 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14991))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightRotationEventBoxGroup
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox>(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventBoxes", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup(float_t beat, int32_t groupId, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox> eventBoxes) ;

/// @brief Method .ctor addr 0xd9b370 size 0x70 virtual false final false
 void _ctor(float_t beat, int32_t groupId, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox> eventBoxes) ;

/// @brief Method CopyWith addr 0xd9b3e0 size 0xe0 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup CopyWith(System::Nullable_1<float_t> newBeat, System::Nullable_1<int32_t> newGroupId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::LightTranslationEventBoxGroup
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14989)), TypeDefinitionIndex(TypeDefinitionIndex(14986)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14989), inst: 1645 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14992))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::LightTranslationEventBoxGroup
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox>(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventBoxes", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup(float_t beat, int32_t groupId, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox> eventBoxes) ;

/// @brief Method .ctor addr 0xd9b4c0 size 0x70 virtual false final false
 void _ctor(float_t beat, int32_t groupId, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox> eventBoxes) ;

/// @brief Method CopyWith addr 0xd9b530 size 0xe0 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup CopyWith(System::Nullable_1<float_t> newBeat, System::Nullable_1<int32_t> newGroupId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::NoteColorType
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14993))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::NoteColorType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType(BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType(BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType_Unwrapped : int32_t {
__ColorA = 0,
__ColorB = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ColorA offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType const ColorA;

/// @brief Field ColorB offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType const ColorB;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::ColorNoteData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14994))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::ColorNoteData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData(BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData(BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(int32_t value) ;

constexpr int32_t __get_x() const;

 int32_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(int32_t value) ;

constexpr int32_t __get_y() const;

 int32_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(int32_t value) ;

constexpr int32_t __get_a() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType __get_c() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get_d() const;


// Properties

 int32_t __declspec(property(get=get_line))  line;

 int32_t __declspec(property(get=get_layer))  layer;

 int32_t __declspec(property(get=get_angleOffset))  angleOffset;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType __declspec(property(get=get_color))  color;

 GlobalNamespace::NoteCutDirection __declspec(property(get=get_cutDirection))  cutDirection;


// Methods

/// @brief Method get_line addr 0xd9b610 size 0x8 virtual false final false
 int32_t get_line() ;

/// @brief Method get_layer addr 0xd9b618 size 0x8 virtual false final false
 int32_t get_layer() ;

/// @brief Method get_angleOffset addr 0xd9b620 size 0x8 virtual false final false
 int32_t get_angleOffset() ;

/// @brief Method get_color addr 0xd9b628 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType get_color() ;

/// @brief Method get_cutDirection addr 0xd9b630 size 0x8 virtual false final false
 GlobalNamespace::NoteCutDirection get_cutDirection() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "line", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType", modifiers: "", def_value: None }, CppParam { name: "cutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "angleOffset", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData(float_t beat, int32_t line, int32_t layer, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType color, GlobalNamespace::NoteCutDirection cutDirection, int32_t angleOffset) ;

/// @brief Method .ctor addr 0xd9a54c size 0x60 virtual false final false
 void _ctor(float_t beat, int32_t line, int32_t layer, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType color, GlobalNamespace::NoteCutDirection cutDirection, int32_t angleOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::BombNoteData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14995))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::BombNoteData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData(BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData(BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(int32_t value) ;

constexpr int32_t __get_x() const;

 int32_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(int32_t value) ;

constexpr int32_t __get_y() const;


// Properties

 int32_t __declspec(property(get=get_line))  line;

 int32_t __declspec(property(get=get_layer))  layer;


// Methods

/// @brief Method get_line addr 0xd9b638 size 0x8 virtual false final false
 int32_t get_line() ;

/// @brief Method get_layer addr 0xd9b640 size 0x8 virtual false final false
 int32_t get_layer() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "line", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData(float_t beat, int32_t line, int32_t layer) ;

/// @brief Method .ctor addr 0xd9a5ac size 0x3c virtual false final false
 void _ctor(float_t beat, int32_t line, int32_t layer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::WaypointData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14996))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::WaypointData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData(BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData(BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(int32_t value) ;

constexpr int32_t __get_x() const;

 int32_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(int32_t value) ;

constexpr int32_t __get_y() const;

 GlobalNamespace::OffsetDirection __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(GlobalNamespace::OffsetDirection value) ;

constexpr GlobalNamespace::OffsetDirection __get_d() const;


// Properties

 int32_t __declspec(property(get=get_line))  line;

 int32_t __declspec(property(get=get_layer))  layer;

 GlobalNamespace::OffsetDirection __declspec(property(get=get_offsetDirection))  offsetDirection;


// Methods

/// @brief Method get_line addr 0xd9b648 size 0x8 virtual false final false
 int32_t get_line() ;

/// @brief Method get_layer addr 0xd9b650 size 0x8 virtual false final false
 int32_t get_layer() ;

/// @brief Method get_offsetDirection addr 0xd9b658 size 0x8 virtual false final false
 GlobalNamespace::OffsetDirection get_offsetDirection() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "line", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "offsetDirection", ty: "GlobalNamespace::OffsetDirection", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData(float_t beat, int32_t line, int32_t layer, GlobalNamespace::OffsetDirection offsetDirection) ;

/// @brief Method .ctor addr 0xd9a704 size 0x4c virtual false final false
 void _ctor(float_t beat, int32_t line, int32_t layer, GlobalNamespace::OffsetDirection offsetDirection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::SliderType
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14997))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::SliderType
struct CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__SliderType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderType(int32_t value__) noexcept;


                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderType(BeatmapSaveDataVersion3__BeatmapSaveData__SliderType const&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderType(BeatmapSaveDataVersion3__BeatmapSaveData__SliderType&&) = default;
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__SliderType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderType& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__SliderType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__SliderType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapSaveDataVersion3__BeatmapSaveData__SliderType_Unwrapped : int32_t {
__Normal = 0,
__Burst = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapSaveDataVersion3__BeatmapSaveData__SliderType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapSaveDataVersion3__BeatmapSaveData__SliderType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderType const Normal;

/// @brief Field Burst offset 0
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderType const Burst;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::BaseSliderData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14998))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::BaseSliderData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData(BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData(BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData const& o) noexcept = default;
                


// Fields

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType __get_c() const;

 int32_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(int32_t value) ;

constexpr int32_t __get_x() const;

 int32_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(int32_t value) ;

constexpr int32_t __get_y() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get_d() const;

 float_t __declspec(property(get=__get_tb, put=__set_tb))  tb;

constexpr void __set_tb(float_t value) ;

constexpr float_t __get_tb() const;

 int32_t __declspec(property(get=__get_tx, put=__set_tx))  tx;

constexpr void __set_tx(int32_t value) ;

constexpr int32_t __get_tx() const;

 int32_t __declspec(property(get=__get_ty, put=__set_ty))  ty;

constexpr void __set_ty(int32_t value) ;

constexpr int32_t __get_ty() const;


// Properties

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType __declspec(property(get=get_colorType))  colorType;

 int32_t __declspec(property(get=get_headLine))  headLine;

 int32_t __declspec(property(get=get_headLayer))  headLayer;

 GlobalNamespace::NoteCutDirection __declspec(property(get=get_headCutDirection))  headCutDirection;

 float_t __declspec(property(get=get_tailBeat))  tailBeat;

 int32_t __declspec(property(get=get_tailLine))  tailLine;

 int32_t __declspec(property(get=get_tailLayer))  tailLayer;


// Methods

/// @brief Method get_colorType addr 0xd9b660 size 0x8 virtual false final false
 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType get_colorType() ;

/// @brief Method get_headLine addr 0xd9b668 size 0x8 virtual false final false
 int32_t get_headLine() ;

/// @brief Method get_headLayer addr 0xd9b670 size 0x8 virtual false final false
 int32_t get_headLayer() ;

/// @brief Method get_headCutDirection addr 0xd9b678 size 0x8 virtual false final false
 GlobalNamespace::NoteCutDirection get_headCutDirection() ;

/// @brief Method get_tailBeat addr 0xd9b680 size 0x8 virtual false final false
 float_t get_tailBeat() ;

/// @brief Method get_tailLine addr 0xd9b688 size 0x8 virtual false final false
 int32_t get_tailLine() ;

/// @brief Method get_tailLayer addr 0xd9b690 size 0x8 virtual false final false
 int32_t get_tailLayer() ;

// Ctor Parameters [CppParam { name: "colorType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType", modifiers: "", def_value: None }, CppParam { name: "headBeat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headLine", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headCutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "tailBeat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailLine", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tailLayer", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer) ;

/// @brief Method .ctor addr 0xd9b698 size 0x6c virtual false final false
 void _ctor(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::SliderData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14998))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14999))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::SliderData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__SliderData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__SliderData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__SliderData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderData(BeatmapSaveDataVersion3__BeatmapSaveData__SliderData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__SliderData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderData(BeatmapSaveDataVersion3__BeatmapSaveData__SliderData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__SliderData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__SliderData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__SliderData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__SliderData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_mu, put=__set_mu))  mu;

constexpr void __set_mu(float_t value) ;

constexpr float_t __get_mu() const;

 float_t __declspec(property(get=__get_tmu, put=__set_tmu))  tmu;

constexpr void __set_tmu(float_t value) ;

constexpr float_t __get_tmu() const;

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get_tc, put=__set_tc))  tc;

constexpr void __set_tc(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get_tc() const;

 GlobalNamespace::SliderMidAnchorMode __declspec(property(get=__get_m, put=__set_m))  m;

constexpr void __set_m(GlobalNamespace::SliderMidAnchorMode value) ;

constexpr GlobalNamespace::SliderMidAnchorMode __get_m() const;


// Properties

 float_t __declspec(property(get=get_headControlPointLengthMultiplier))  headControlPointLengthMultiplier;

 float_t __declspec(property(get=get_tailControlPointLengthMultiplier))  tailControlPointLengthMultiplier;

 GlobalNamespace::NoteCutDirection __declspec(property(get=get_tailCutDirection))  tailCutDirection;

 GlobalNamespace::SliderMidAnchorMode __declspec(property(get=get_sliderMidAnchorMode))  sliderMidAnchorMode;


// Methods

/// @brief Method get_headControlPointLengthMultiplier addr 0xd9b704 size 0x8 virtual false final false
 float_t get_headControlPointLengthMultiplier() ;

/// @brief Method get_tailControlPointLengthMultiplier addr 0xd9b70c size 0x8 virtual false final false
 float_t get_tailControlPointLengthMultiplier() ;

/// @brief Method get_tailCutDirection addr 0xd9b714 size 0x8 virtual false final false
 GlobalNamespace::NoteCutDirection get_tailCutDirection() ;

/// @brief Method get_sliderMidAnchorMode addr 0xd9b71c size 0x8 virtual false final false
 GlobalNamespace::SliderMidAnchorMode get_sliderMidAnchorMode() ;

// Ctor Parameters [CppParam { name: "colorType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType", modifiers: "", def_value: None }, CppParam { name: "headBeat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headLine", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headControlPointLengthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headCutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "tailBeat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailLine", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tailLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tailControlPointLengthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailCutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "sliderMidAnchorMode", ty: "GlobalNamespace::SliderMidAnchorMode", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__SliderData(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, float_t headControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer, float_t tailControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection tailCutDirection, GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) ;

/// @brief Method .ctor addr 0xd9a670 size 0x94 virtual false final false
 void _ctor(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, float_t headControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer, float_t tailControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection tailCutDirection, GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::BurstSliderData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14998))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15000))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::BurstSliderData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData(BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData(BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_sc, put=__set_sc))  sc;

constexpr void __set_sc(int32_t value) ;

constexpr int32_t __get_sc() const;

 float_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(float_t value) ;

constexpr float_t __get_s() const;


// Properties

 int32_t __declspec(property(get=get_sliceCount))  sliceCount;

 float_t __declspec(property(get=get_squishAmount))  squishAmount;


// Methods

/// @brief Method get_sliceCount addr 0xd9b724 size 0x8 virtual false final false
 int32_t get_sliceCount() ;

/// @brief Method get_squishAmount addr 0xd9b72c size 0x8 virtual false final false
 float_t get_squishAmount() ;

// Ctor Parameters [CppParam { name: "colorType", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType", modifiers: "", def_value: None }, CppParam { name: "headBeat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headLine", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headCutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "tailBeat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailLine", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tailLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sliceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "squishAmount", ty: "float_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer, int32_t sliceCount, float_t squishAmount) ;

/// @brief Method .ctor addr 0xd9b734 size 0x8c virtual false final false
 void _ctor(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer, int32_t sliceCount, float_t squishAmount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::ObstacleData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15001))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::ObstacleData
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData(BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData(BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(int32_t value) ;

constexpr int32_t __get_x() const;

 int32_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(int32_t value) ;

constexpr int32_t __get_y() const;

 float_t __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(float_t value) ;

constexpr float_t __get_d() const;

 int32_t __declspec(property(get=__get_w, put=__set_w))  w;

constexpr void __set_w(int32_t value) ;

constexpr int32_t __get_w() const;

 int32_t __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(int32_t value) ;

constexpr int32_t __get_h() const;


// Properties

 int32_t __declspec(property(get=get_line))  line;

 int32_t __declspec(property(get=get_layer))  layer;

 float_t __declspec(property(get=get_duration))  duration;

 int32_t __declspec(property(get=get_width))  width;

 int32_t __declspec(property(get=get_height))  height;


// Methods

/// @brief Method get_line addr 0xd9b7c0 size 0x8 virtual false final false
 int32_t get_line() ;

/// @brief Method get_layer addr 0xd9b7c8 size 0x8 virtual false final false
 int32_t get_layer() ;

/// @brief Method get_duration addr 0xd9b7d0 size 0x8 virtual false final false
 float_t get_duration() ;

/// @brief Method get_width addr 0xd9b7d8 size 0x8 virtual false final false
 int32_t get_width() ;

/// @brief Method get_height addr 0xd9b7e0 size 0x8 virtual false final false
 int32_t get_height() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "line", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData(float_t beat, int32_t line, int32_t layer, float_t duration, int32_t width, int32_t height) ;

/// @brief Method .ctor addr 0xd9a60c size 0x58 virtual false final false
 void _ctor(float_t beat, int32_t line, int32_t layer, float_t duration, int32_t width, int32_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: BeatmapSaveDataVersion3::BeatmapSaveData
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15002))
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData
class CORDL_TYPE BeatmapSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ObstacleData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData;

using BurstSliderData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData;

using SliderData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData;

using BaseSliderData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData;

using SliderType = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderType;

using WaypointData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData;

using BombNoteData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData;

using ColorNoteData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData;

using NoteColorType = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType;

using LightTranslationEventBoxGroup = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup;

using LightRotationEventBoxGroup = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup;

using LightColorEventBoxGroup = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup;

template<typename T>
using EventBoxGroup_1 = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<T>;

using EventBoxGroup = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup;

using LightTranslationBaseData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData;

using LightTranslationEventBox = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox;

using LightRotationBaseData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData;

using LightRotationEventBox = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox;

using LightColorBaseData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData;

using LightColorEventBox = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox;

using IndexFilter = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter;

using IndexFilterLimitAlsoAffectsType = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType;

using IndexFilterRandomType = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType;

using EventBox = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox;

using EaseType = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType;

using Axis = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis;

using TransitionType = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType;

using EnvironmentColorType = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType;

using BasicEventTypesWithKeywords = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords;

using RotationEventData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData;

using ExecutionTime = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime;

using BpmChangeEventData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData;

using ColorBoostEventData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData;

using BasicEventData = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData;

using BeatmapSaveDataItem = BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BeatmapSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveData(BeatmapSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveData(BeatmapSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveData& operator=(BeatmapSaveData&& o) noexcept = default;
  constexpr BeatmapSaveData& operator=(BeatmapSaveData const& o) noexcept = default;
                


// Fields

/// @brief Field kCurrentVersion offset 0
static constexpr ::ConstString  kCurrentVersion{u"3.2.0"};

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData> __declspec(property(get=__get_bpmEvents, put=__set_bpmEvents))  bpmEvents;

constexpr void __set_bpmEvents(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData> __get_bpmEvents() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData> __declspec(property(get=__get_rotationEvents, put=__set_rotationEvents))  rotationEvents;

constexpr void __set_rotationEvents(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData> __get_rotationEvents() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData> __declspec(property(get=__get_colorNotes, put=__set_colorNotes))  colorNotes;

constexpr void __set_colorNotes(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData> __get_colorNotes() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData> __declspec(property(get=__get_bombNotes, put=__set_bombNotes))  bombNotes;

constexpr void __set_bombNotes(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData> __get_bombNotes() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData> __declspec(property(get=__get_obstacles, put=__set_obstacles))  obstacles;

constexpr void __set_obstacles(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData> __get_obstacles() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData> __declspec(property(get=__get_sliders, put=__set_sliders))  sliders;

constexpr void __set_sliders(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData> __get_sliders() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData> __declspec(property(get=__get_burstSliders, put=__set_burstSliders))  burstSliders;

constexpr void __set_burstSliders(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData> __get_burstSliders() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData> __declspec(property(get=__get_waypoints, put=__set_waypoints))  waypoints;

constexpr void __set_waypoints(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData> __get_waypoints() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData> __declspec(property(get=__get_basicBeatmapEvents, put=__set_basicBeatmapEvents))  basicBeatmapEvents;

constexpr void __set_basicBeatmapEvents(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData> __get_basicBeatmapEvents() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData> __declspec(property(get=__get_colorBoostBeatmapEvents, put=__set_colorBoostBeatmapEvents))  colorBoostBeatmapEvents;

constexpr void __set_colorBoostBeatmapEvents(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData> __get_colorBoostBeatmapEvents() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup> __declspec(property(get=__get_lightColorEventBoxGroups, put=__set_lightColorEventBoxGroups))  lightColorEventBoxGroups;

constexpr void __set_lightColorEventBoxGroups(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup> __get_lightColorEventBoxGroups() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup> __declspec(property(get=__get_lightRotationEventBoxGroups, put=__set_lightRotationEventBoxGroups))  lightRotationEventBoxGroups;

constexpr void __set_lightRotationEventBoxGroups(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup> __get_lightRotationEventBoxGroups() const;

 System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup> __declspec(property(get=__get_lightTranslationEventBoxGroups, put=__set_lightTranslationEventBoxGroups))  lightTranslationEventBoxGroups;

constexpr void __set_lightTranslationEventBoxGroups(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup> value) ;

constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup> __get_lightTranslationEventBoxGroups() const;

 BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords __declspec(property(get=__get_basicEventTypesWithKeywords, put=__set_basicEventTypesWithKeywords))  basicEventTypesWithKeywords;

constexpr void __set_basicEventTypesWithKeywords(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords __get_basicEventTypesWithKeywords() const;

 bool __declspec(property(get=__get_useNormalEventsAsCompatibleEvents, put=__set_useNormalEventsAsCompatibleEvents))  useNormalEventsAsCompatibleEvents;

constexpr void __set_useNormalEventsAsCompatibleEvents(bool value) ;

constexpr bool __get_useNormalEventsAsCompatibleEvents() const;

static System::Version __declspec(property(get=__get_version2_6_0, put=__set_version2_6_0))  version2_6_0;

static void __set_version2_6_0(System::Version value) ;

static System::Version __get_version2_6_0() ;

static ::ArrayW<float_t> __declspec(property(get=__get__spawnRotations, put=__set__spawnRotations))  _spawnRotations;

static void __set__spawnRotations(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get__spawnRotations() ;


// Methods

// Ctor Parameters [CppParam { name: "bpmEvents", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData>", modifiers: "", def_value: None }, CppParam { name: "rotationEvents", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData>", modifiers: "", def_value: None }, CppParam { name: "colorNotes", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData>", modifiers: "", def_value: None }, CppParam { name: "bombNotes", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData>", modifiers: "", def_value: None }, CppParam { name: "obstacles", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData>", modifiers: "", def_value: None }, CppParam { name: "sliders", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData>", modifiers: "", def_value: None }, CppParam { name: "burstSliders", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData>", modifiers: "", def_value: None }, CppParam { name: "waypoints", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData>", modifiers: "", def_value: None }, CppParam { name: "basicBeatmapEvents", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData>", modifiers: "", def_value: None }, CppParam { name: "colorBoostBeatmapEvents", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData>", modifiers: "", def_value: None }, CppParam { name: "lightColorEventBoxGroups", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup>", modifiers: "", def_value: None }, CppParam { name: "lightRotationEventBoxGroups", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup>", modifiers: "", def_value: None }, CppParam { name: "lightTranslationEventBoxGroups", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup>", modifiers: "", def_value: None }, CppParam { name: "basicEventTypesWithKeywords", ty: "BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords", modifiers: "", def_value: None }, CppParam { name: "useNormalEventsAsCompatibleEvents", ty: "bool", modifiers: "", def_value: None }]
explicit BeatmapSaveData(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData> bpmEvents, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData> rotationEvents, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData> colorNotes, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData> bombNotes, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData> obstacles, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData> sliders, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData> burstSliders, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData> waypoints, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData> basicBeatmapEvents, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData> colorBoostBeatmapEvents, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup> lightColorEventBoxGroups, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup> lightRotationEventBoxGroups, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup> lightTranslationEventBoxGroups, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents) ;

/// @brief Method .ctor addr 0xd98798 size 0xec virtual false final false
 void _ctor(System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData> bpmEvents, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData> rotationEvents, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData> colorNotes, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData> bombNotes, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData> obstacles, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData> sliders, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData> burstSliders, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData> waypoints, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData> basicBeatmapEvents, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData> colorBoostBeatmapEvents, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup> lightColorEventBoxGroups, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup> lightRotationEventBoxGroups, System::Collections::Generic::List_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup> lightTranslationEventBoxGroups, BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords basicEventTypesWithKeywords, bool useNormalEventsAsCompatibleEvents) ;

/// @brief Method SerializeToJSONString addr 0xd98884 size 0x8 virtual false final false
 ::StringW SerializeToJSONString() ;

/// @brief Method DeserializeFromJSONString addr 0xd9888c size 0x190 virtual false final false
static BeatmapSaveDataVersion3::BeatmapSaveData DeserializeFromJSONString(::StringW stringData) ;

/// @brief Method ConvertBeatmapSaveData addr 0xd98bec size 0x178c virtual false final false
static BeatmapSaveDataVersion3::BeatmapSaveData ConvertBeatmapSaveData(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData beatmapSaveData) ;

/// @brief Method GetNoteColorType addr 0xd9a540 size 0xc virtual false final false
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType GetNoteColorType(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType noteType) ;

/// @brief Method GetNoteColorType addr 0xd9a664 size 0xc virtual false final false
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType GetNoteColorType(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType colorType) ;

/// @brief Method GetHeightForObstacleType addr 0xd9a5f8 size 0x14 virtual false final false
static int32_t GetHeightForObstacleType(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType obstacleType) ;

/// @brief Method GetLayerForObstacleType addr 0xd9a5e8 size 0x10 virtual false final false
static int32_t GetLayerForObstacleType(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType obstacleType) ;

/// @brief Method GetSliderType addr 0xd9a944 size 0xc virtual false final false
static BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderType GetSliderType(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType sliderType) ;

/// @brief Method SpawnRotationForEventValue addr 0xd9a77c size 0xb8 virtual false final false
static float_t SpawnRotationForEventValue(int32_t index) ;

/// @brief Method BeatmapSaveDataAreSorted addr 0xd9a378 size 0x1c8 virtual false final false
static bool BeatmapSaveDataAreSorted(System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem> beatmapSaveData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
// Type: ::EventBoxGroup`1
namespace BeatmapSaveDataVersion3 {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14989)), TypeDefinitionIndex(TypeDefinitionIndex(14988))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14989), inst: 2 })
// CS Name: BeatmapSaveDataVersion3.BeatmapSaveData::EventBoxGroup`1
class CORDL_TYPE BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1<T> : public BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1(BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1(BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1(void* ptr) noexcept : BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup(ptr) {
}


  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1&& o) noexcept = default;
  constexpr BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1& operator=(BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<T> __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get_e() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox> __declspec(property(get=get_baseEventBoxes))  baseEventBoxes;

 System::Collections::Generic::IReadOnlyList_1<T> __declspec(property(get=get_eventBoxes))  eventBoxes;


// Methods

/// @brief Method get_baseEventBoxes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IReadOnlyList_1<BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox> get_baseEventBoxes() ;

/// @brief Method get_eventBoxes addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IReadOnlyList_1<T> get_eventBoxes() ;

// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventBoxes", ty: "System::Collections::Generic::List_1<T>", modifiers: "", def_value: None }]
explicit BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1(float_t beat, int32_t groupId, System::Collections::Generic::List_1<T> eventBoxes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t beat, int32_t groupId, System::Collections::Generic::List_1<T> eventBoxes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion3
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup_1, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBoxGroup`1");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__Axis, "BeatmapSaveDataVersion3", "BeatmapSaveData/Axis");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EaseType, "BeatmapSaveDataVersion3", "BeatmapSaveData/EaseType");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EnvironmentColorType, "BeatmapSaveDataVersion3", "BeatmapSaveData/EnvironmentColorType");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ExecutionTime, "BeatmapSaveDataVersion3", "BeatmapSaveData/ExecutionTime");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilterLimitAlsoAffectsType");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilterRandomType, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilterRandomType");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__NoteColorType, "BeatmapSaveDataVersion3", "BeatmapSaveData/NoteColorType");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderType, "BeatmapSaveDataVersion3", "BeatmapSaveData/SliderType");
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__TransitionType, "BeatmapSaveDataVersion3", "BeatmapSaveData/TransitionType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox__DistributionParamType, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBox/DistributionParamType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter__IndexFilterType, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilter/IndexFilterType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData__RotationDirection, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationBaseData/RotationDirection");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveData, "BeatmapSaveDataVersion3", "BeatmapSaveData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BaseSliderData, "BeatmapSaveDataVersion3", "BeatmapSaveData/BaseSliderData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventData, "BeatmapSaveDataVersion3", "BeatmapSaveData/BasicEventData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords, "BeatmapSaveDataVersion3", "BeatmapSaveData/BasicEventTypesWithKeywords");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BeatmapSaveDataItem, "BeatmapSaveDataVersion3", "BeatmapSaveData/BeatmapSaveDataItem");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BombNoteData, "BeatmapSaveDataVersion3", "BeatmapSaveData/BombNoteData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BpmChangeEventData, "BeatmapSaveDataVersion3", "BeatmapSaveData/BpmChangeEventData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__BurstSliderData, "BeatmapSaveDataVersion3", "BeatmapSaveData/BurstSliderData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorBoostEventData, "BeatmapSaveDataVersion3", "BeatmapSaveData/ColorBoostEventData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ColorNoteData, "BeatmapSaveDataVersion3", "BeatmapSaveData/ColorNoteData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBox, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBox");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__EventBoxGroup, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBoxGroup");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__IndexFilter, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilter");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorBaseData, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightColorBaseData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBox, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightColorEventBox");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightColorEventBoxGroup, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightColorEventBoxGroup");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationBaseData, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationBaseData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBox, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationEventBox");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightRotationEventBoxGroup, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationEventBoxGroup");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationBaseData, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightTranslationBaseData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBox, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightTranslationEventBox");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__LightTranslationEventBoxGroup, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightTranslationEventBoxGroup");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__ObstacleData, "BeatmapSaveDataVersion3", "BeatmapSaveData/ObstacleData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__RotationEventData, "BeatmapSaveDataVersion3", "BeatmapSaveData/RotationEventData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__SliderData, "BeatmapSaveDataVersion3", "BeatmapSaveData/SliderData");
NEED_NO_BOX(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion3::BeatmapSaveDataVersion3__BeatmapSaveData__WaypointData, "BeatmapSaveDataVersion3", "BeatmapSaveData/WaypointData");
NEED_NO_BOX(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveDataVersion3__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword, "BeatmapSaveDataVersion3", "BeatmapSaveData/BasicEventTypesWithKeywords/BasicEventTypesForKeyword");
