#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData;
}
// Type: ::BeatmapEventType
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15003))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::BeatmapEventType
struct CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType(int32_t value__) noexcept;


                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType&&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType_Unwrapped : int32_t {
__Event0 = 0,
__Event1 = 1,
__Event2 = 2,
__Event3 = 3,
__Event4 = 4,
__Event5 = 5,
__Event6 = 6,
__Event7 = 7,
__Event8 = 8,
__Event9 = 9,
__Event10 = 10,
__Event11 = 11,
__Event12 = 12,
__Event13 = 13,
__Event14 = 14,
__Event15 = 15,
__Event16 = 16,
__Event17 = 17,
__VoidEvent = -1,
__Special0 = 40,
__Special1 = 41,
__Special2 = 42,
__Special3 = 43,
__BpmChange = 100,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType_Unwrapped () const noexcept {
return std::bit_cast<______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Event0 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event0;

/// @brief Field Event1 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event1;

/// @brief Field Event2 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event2;

/// @brief Field Event3 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event3;

/// @brief Field Event4 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event4;

/// @brief Field Event5 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event5;

/// @brief Field Event6 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event6;

/// @brief Field Event7 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event7;

/// @brief Field Event8 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event8;

/// @brief Field Event9 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event9;

/// @brief Field Event10 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event10;

/// @brief Field Event11 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event11;

/// @brief Field Event12 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event12;

/// @brief Field Event13 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event13;

/// @brief Field Event14 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event14;

/// @brief Field Event15 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event15;

/// @brief Field Event16 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event16;

/// @brief Field Event17 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Event17;

/// @brief Field VoidEvent offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const VoidEvent;

/// @brief Field Special0 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Special0;

/// @brief Field Special1 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Special1;

/// @brief Field Special2 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Special2;

/// @brief Field Special3 offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const Special3;

/// @brief Field BpmChange offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const BpmChange;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::EventData
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15004))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::EventData
class CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData", modifiers: " const&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData", modifiers: "&&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData(void* ptr) noexcept : ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(ptr) {
}


  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData&& o) noexcept = default;
  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time, put=__set__time))  _time;

constexpr void __set__time(float_t value) ;

constexpr float_t __get__time() const;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType value) ;

constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType __get__type() const;

 int32_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(int32_t value) ;

constexpr int32_t __get__value() const;

 float_t __declspec(property(get=__get__floatValue, put=__set__floatValue))  _floatValue;

constexpr void __set__floatValue(float_t value) ;

constexpr float_t __get__floatValue() const;


// Properties

 float_t __declspec(property(get=get_time))  time;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType __declspec(property(get=get_type))  type;

 int32_t __declspec(property(get=get_value))  value;

 float_t __declspec(property(get=get_floatValue))  floatValue;


// Methods

/// @brief Method get_time addr 0xd9bd30 size 0x8 virtual true final false
 float_t get_time() ;

/// @brief Method get_type addr 0xd9bd38 size 0x8 virtual false final false
 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType get_type() ;

/// @brief Method get_value addr 0xd9bd40 size 0x8 virtual false final false
 int32_t get_value() ;

/// @brief Method get_floatValue addr 0xd9bd48 size 0x8 virtual false final false
 float_t get_floatValue() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: None }]
explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData(float_t time, ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType type, int32_t value, float_t floatValue) ;

/// @brief Method .ctor addr 0xd9bc28 size 0x44 virtual false final false
 void _ctor(float_t time, ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType type, int32_t value, float_t floatValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::BeatmapObjectType
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15005))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::BeatmapObjectType
struct CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType(int32_t value__) noexcept;


                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType const&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType&&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType_Unwrapped : int32_t {
__Note = 0,
__Obstacle = 2,
__Slider = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType_Unwrapped () const noexcept {
return std::bit_cast<______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Note offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType const Note;

/// @brief Field Obstacle offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType const Obstacle;

/// @brief Field Slider offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType const Slider;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::NoteType
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15006))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::NoteType
struct CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType(int32_t value__) noexcept;


                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType const&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType&&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType_Unwrapped : int32_t {
__NoteA = 0,
__NoteB = 1,
__GhostNote = 2,
__Bomb = 3,
__None = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType_Unwrapped () const noexcept {
return std::bit_cast<______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoteA offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType const NoteA;

/// @brief Field NoteB offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType const NoteB;

/// @brief Field GhostNote offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType const GhostNote;

/// @brief Field Bomb offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType const Bomb;

/// @brief Field None offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::ColorType
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15007))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::ColorType
struct CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType(int32_t value__) noexcept;


                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType const&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType&&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType_Unwrapped : int32_t {
__ColorA = 0,
__ColorB = 1,
__None = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType_Unwrapped () const noexcept {
return std::bit_cast<______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ColorA offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType const ColorA;

/// @brief Field ColorB offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType const ColorB;

/// @brief Field None offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::SliderType
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15008))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::SliderType
struct CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType(int32_t value__) noexcept;


                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType const&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType&&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType_Unwrapped : int32_t {
__Normal = 0,
__Burst = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType_Unwrapped () const noexcept {
return std::bit_cast<______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType const Normal;

/// @brief Field Burst offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType const Burst;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::NoteData
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15009))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::NoteData
class CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData", modifiers: " const&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData", modifiers: "&&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData(void* ptr) noexcept : ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(ptr) {
}


  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData&& o) noexcept = default;
  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time, put=__set__time))  _time;

constexpr void __set__time(float_t value) ;

constexpr float_t __get__time() const;

 int32_t __declspec(property(get=__get__lineIndex, put=__set__lineIndex))  _lineIndex;

constexpr void __set__lineIndex(int32_t value) ;

constexpr int32_t __get__lineIndex() const;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=__get__lineLayer, put=__set__lineLayer))  _lineLayer;

constexpr void __set__lineLayer(::GlobalNamespace::NoteLineLayer value) ;

constexpr ::GlobalNamespace::NoteLineLayer __get__lineLayer() const;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType value) ;

constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType __get__type() const;

 ::GlobalNamespace::NoteCutDirection __declspec(property(get=__get__cutDirection, put=__set__cutDirection))  _cutDirection;

constexpr void __set__cutDirection(::GlobalNamespace::NoteCutDirection value) ;

constexpr ::GlobalNamespace::NoteCutDirection __get__cutDirection() const;


// Properties

 float_t __declspec(property(get=get_time))  time;

 int32_t __declspec(property(get=get_lineIndex))  lineIndex;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=get_lineLayer))  lineLayer;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType __declspec(property(get=get_type))  type;

 ::GlobalNamespace::NoteCutDirection __declspec(property(get=get_cutDirection))  cutDirection;


// Methods

/// @brief Method get_time addr 0xd9bd58 size 0x8 virtual true final false
 float_t get_time() ;

/// @brief Method get_lineIndex addr 0xd9bd60 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method get_lineLayer addr 0xd9bd68 size 0x8 virtual false final false
 ::GlobalNamespace::NoteLineLayer get_lineLayer() ;

/// @brief Method get_type addr 0xd9bd70 size 0x8 virtual false final false
 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType get_type() ;

/// @brief Method get_cutDirection addr 0xd9bd78 size 0x8 virtual false final false
 ::GlobalNamespace::NoteCutDirection get_cutDirection() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineLayer", ty: "::GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType", modifiers: "", def_value: None }, CppParam { name: "cutDirection", ty: "::GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }]
explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType type, ::GlobalNamespace::NoteCutDirection cutDirection) ;

/// @brief Method .ctor addr 0xd9bd80 size 0x50 virtual false final false
 void _ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType type, ::GlobalNamespace::NoteCutDirection cutDirection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::WaypointData
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15010))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::WaypointData
class CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData", modifiers: " const&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData", modifiers: "&&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData(void* ptr) noexcept : ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(ptr) {
}


  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData&& o) noexcept = default;
  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time, put=__set__time))  _time;

constexpr void __set__time(float_t value) ;

constexpr float_t __get__time() const;

 int32_t __declspec(property(get=__get__lineIndex, put=__set__lineIndex))  _lineIndex;

constexpr void __set__lineIndex(int32_t value) ;

constexpr int32_t __get__lineIndex() const;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=__get__lineLayer, put=__set__lineLayer))  _lineLayer;

constexpr void __set__lineLayer(::GlobalNamespace::NoteLineLayer value) ;

constexpr ::GlobalNamespace::NoteLineLayer __get__lineLayer() const;

 ::GlobalNamespace::OffsetDirection __declspec(property(get=__get__offsetDirection, put=__set__offsetDirection))  _offsetDirection;

constexpr void __set__offsetDirection(::GlobalNamespace::OffsetDirection value) ;

constexpr ::GlobalNamespace::OffsetDirection __get__offsetDirection() const;


// Properties

 float_t __declspec(property(get=get_time))  time;

 int32_t __declspec(property(get=get_lineIndex))  lineIndex;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=get_lineLayer))  lineLayer;

 ::GlobalNamespace::OffsetDirection __declspec(property(get=get_offsetDirection))  offsetDirection;


// Methods

/// @brief Method get_time addr 0xd9bdd0 size 0x8 virtual true final false
 float_t get_time() ;

/// @brief Method get_lineIndex addr 0xd9bdd8 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method get_lineLayer addr 0xd9bde0 size 0x8 virtual false final false
 ::GlobalNamespace::NoteLineLayer get_lineLayer() ;

/// @brief Method get_offsetDirection addr 0xd9bde8 size 0x8 virtual false final false
 ::GlobalNamespace::OffsetDirection get_offsetDirection() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineLayer", ty: "::GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "offsetDirection", ty: "::GlobalNamespace::OffsetDirection", modifiers: "", def_value: None }]
explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::OffsetDirection offsetDirection) ;

/// @brief Method .ctor addr 0xd9bdf0 size 0x4c virtual false final false
 void _ctor(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::OffsetDirection offsetDirection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::SliderData
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15011))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::SliderData
class CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData", modifiers: " const&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData", modifiers: "&&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData(void* ptr) noexcept : ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(ptr) {
}


  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData&& o) noexcept = default;
  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData const& o) noexcept = default;
                


// Fields

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType __declspec(property(get=__get__colorType, put=__set__colorType))  _colorType;

constexpr void __set__colorType(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType value) ;

constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType __get__colorType() const;

 float_t __declspec(property(get=__get__headTime, put=__set__headTime))  _headTime;

constexpr void __set__headTime(float_t value) ;

constexpr float_t __get__headTime() const;

 int32_t __declspec(property(get=__get__headLineIndex, put=__set__headLineIndex))  _headLineIndex;

constexpr void __set__headLineIndex(int32_t value) ;

constexpr int32_t __get__headLineIndex() const;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=__get__headLineLayer, put=__set__headLineLayer))  _headLineLayer;

constexpr void __set__headLineLayer(::GlobalNamespace::NoteLineLayer value) ;

constexpr ::GlobalNamespace::NoteLineLayer __get__headLineLayer() const;

 float_t __declspec(property(get=__get__headControlPointLengthMultiplier, put=__set__headControlPointLengthMultiplier))  _headControlPointLengthMultiplier;

constexpr void __set__headControlPointLengthMultiplier(float_t value) ;

constexpr float_t __get__headControlPointLengthMultiplier() const;

 ::GlobalNamespace::NoteCutDirection __declspec(property(get=__get__headCutDirection, put=__set__headCutDirection))  _headCutDirection;

constexpr void __set__headCutDirection(::GlobalNamespace::NoteCutDirection value) ;

constexpr ::GlobalNamespace::NoteCutDirection __get__headCutDirection() const;

 float_t __declspec(property(get=__get__tailTime, put=__set__tailTime))  _tailTime;

constexpr void __set__tailTime(float_t value) ;

constexpr float_t __get__tailTime() const;

 int32_t __declspec(property(get=__get__tailLineIndex, put=__set__tailLineIndex))  _tailLineIndex;

constexpr void __set__tailLineIndex(int32_t value) ;

constexpr int32_t __get__tailLineIndex() const;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=__get__tailLineLayer, put=__set__tailLineLayer))  _tailLineLayer;

constexpr void __set__tailLineLayer(::GlobalNamespace::NoteLineLayer value) ;

constexpr ::GlobalNamespace::NoteLineLayer __get__tailLineLayer() const;

 float_t __declspec(property(get=__get__tailControlPointLengthMultiplier, put=__set__tailControlPointLengthMultiplier))  _tailControlPointLengthMultiplier;

constexpr void __set__tailControlPointLengthMultiplier(float_t value) ;

constexpr float_t __get__tailControlPointLengthMultiplier() const;

 ::GlobalNamespace::NoteCutDirection __declspec(property(get=__get__tailCutDirection, put=__set__tailCutDirection))  _tailCutDirection;

constexpr void __set__tailCutDirection(::GlobalNamespace::NoteCutDirection value) ;

constexpr ::GlobalNamespace::NoteCutDirection __get__tailCutDirection() const;

 ::GlobalNamespace::SliderMidAnchorMode __declspec(property(get=__get__sliderMidAnchorMode, put=__set__sliderMidAnchorMode))  _sliderMidAnchorMode;

constexpr void __set__sliderMidAnchorMode(::GlobalNamespace::SliderMidAnchorMode value) ;

constexpr ::GlobalNamespace::SliderMidAnchorMode __get__sliderMidAnchorMode() const;


// Properties

 float_t __declspec(property(get=get_time))  time;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType __declspec(property(get=get_colorType))  colorType;

 int32_t __declspec(property(get=get_headLineIndex))  headLineIndex;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=get_headLineLayer))  headLineLayer;

 float_t __declspec(property(get=get_headControlPointLengthMultiplier))  headControlPointLengthMultiplier;

 ::GlobalNamespace::NoteCutDirection __declspec(property(get=get_headCutDirection))  headCutDirection;

 float_t __declspec(property(get=get_tailTime))  tailTime;

 int32_t __declspec(property(get=get_tailLineIndex))  tailLineIndex;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=get_tailLineLayer))  tailLineLayer;

 float_t __declspec(property(get=get_tailControlPointLengthMultiplier))  tailControlPointLengthMultiplier;

 ::GlobalNamespace::NoteCutDirection __declspec(property(get=get_tailCutDirection))  tailCutDirection;

 ::GlobalNamespace::SliderMidAnchorMode __declspec(property(get=get_sliderMidAnchorMode))  sliderMidAnchorMode;


// Methods

/// @brief Method get_time addr 0xd9be3c size 0x8 virtual true final false
 float_t get_time() ;

/// @brief Method get_colorType addr 0xd9be44 size 0x8 virtual false final false
 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType get_colorType() ;

/// @brief Method get_headLineIndex addr 0xd9be4c size 0x8 virtual false final false
 int32_t get_headLineIndex() ;

/// @brief Method get_headLineLayer addr 0xd9be54 size 0x8 virtual false final false
 ::GlobalNamespace::NoteLineLayer get_headLineLayer() ;

/// @brief Method get_headControlPointLengthMultiplier addr 0xd9be5c size 0x8 virtual false final false
 float_t get_headControlPointLengthMultiplier() ;

/// @brief Method get_headCutDirection addr 0xd9be64 size 0x8 virtual false final false
 ::GlobalNamespace::NoteCutDirection get_headCutDirection() ;

/// @brief Method get_tailTime addr 0xd9be6c size 0x8 virtual false final false
 float_t get_tailTime() ;

/// @brief Method get_tailLineIndex addr 0xd9be74 size 0x8 virtual false final false
 int32_t get_tailLineIndex() ;

/// @brief Method get_tailLineLayer addr 0xd9be7c size 0x8 virtual false final false
 ::GlobalNamespace::NoteLineLayer get_tailLineLayer() ;

/// @brief Method get_tailControlPointLengthMultiplier addr 0xd9be84 size 0x8 virtual false final false
 float_t get_tailControlPointLengthMultiplier() ;

/// @brief Method get_tailCutDirection addr 0xd9be8c size 0x8 virtual false final false
 ::GlobalNamespace::NoteCutDirection get_tailCutDirection() ;

/// @brief Method get_sliderMidAnchorMode addr 0xd9be94 size 0x8 virtual false final false
 ::GlobalNamespace::SliderMidAnchorMode get_sliderMidAnchorMode() ;

// Ctor Parameters [CppParam { name: "colorType", ty: "::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType", modifiers: "", def_value: None }, CppParam { name: "headTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headLineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headLineLayer", ty: "::GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "headControlPointLengthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headCutDirection", ty: "::GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "tailTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailLineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tailLineLayer", ty: "::GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "tailControlPointLengthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailCutDirection", ty: "::GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "sliderMidAnchorMode", ty: "::GlobalNamespace::SliderMidAnchorMode", modifiers: "", def_value: None }]
explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType colorType, float_t headTime, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer, float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer, float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) ;

/// @brief Method .ctor addr 0xd9be9c size 0x9c virtual false final false
 void _ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType colorType, float_t headTime, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer, float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer, float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::ObstacleData
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15012))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::ObstacleData
class CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData", modifiers: " const&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData", modifiers: "&&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData(void* ptr) noexcept : ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(ptr) {
}


  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData&& o) noexcept = default;
  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time, put=__set__time))  _time;

constexpr void __set__time(float_t value) ;

constexpr float_t __get__time() const;

 int32_t __declspec(property(get=__get__lineIndex, put=__set__lineIndex))  _lineIndex;

constexpr void __set__lineIndex(int32_t value) ;

constexpr int32_t __get__lineIndex() const;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType value) ;

constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType __get__type() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 int32_t __declspec(property(get=__get__width, put=__set__width))  _width;

constexpr void __set__width(int32_t value) ;

constexpr int32_t __get__width() const;


// Properties

 float_t __declspec(property(get=get_time))  time;

 int32_t __declspec(property(get=get_lineIndex))  lineIndex;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType __declspec(property(get=get_type))  type;

 float_t __declspec(property(get=get_duration))  duration;

 int32_t __declspec(property(get=get_width))  width;


// Methods

/// @brief Method get_time addr 0xd9bf38 size 0x8 virtual true final false
 float_t get_time() ;

/// @brief Method get_lineIndex addr 0xd9bf40 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method get_type addr 0xd9bf48 size 0x8 virtual false final false
 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType get_type() ;

/// @brief Method get_duration addr 0xd9bf50 size 0x8 virtual false final false
 float_t get_duration() ;

/// @brief Method get_width addr 0xd9bf58 size 0x8 virtual false final false
 int32_t get_width() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData(float_t time, int32_t lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType type, float_t duration, int32_t width) ;

/// @brief Method .ctor addr 0xd9bf60 size 0x54 virtual false final false
 void _ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType type, float_t duration, int32_t width) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::ObstacleType
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15013))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::ObstacleType
struct CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType(int32_t value__) noexcept;


                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType const&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType&&) = default;
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType_Unwrapped : int32_t {
__FullHeight = 0,
__Top = 1,
__Free = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType_Unwrapped () const noexcept {
return std::bit_cast<______BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FullHeight offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType const FullHeight;

/// @brief Field Top offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType const Top;

/// @brief Field Free offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType const Free;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::SpecialEventKeywordFiltersData
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15014))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::SpecialEventKeywordFiltersData
class CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData", modifiers: " const&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData", modifiers: "&&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData&& o) noexcept = default;
  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> __declspec(property(get=__get__keywords, put=__set__keywords))  _keywords;

constexpr void __set__keywords(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> __get__keywords() const;


// Properties

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> __declspec(property(get=get_keywords))  keywords;


// Methods

/// @brief Method get_keywords addr 0xd9bfb4 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> get_keywords() ;

// Ctor Parameters [CppParam { name: "keywords", ty: "::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>", modifiers: "", def_value: None }]
explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> keywords) ;

/// @brief Method .ctor addr 0xd9bfbc size 0x28 virtual false final false
 void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> keywords) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: ::SpecialEventsForKeyword
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15015))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData::SpecialEventsForKeyword
class CORDL_TYPE ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword() = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword", modifiers: " const&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword", modifiers: "&&", def_value: None }]
constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword&& o) noexcept = default;
  constexpr ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword& operator=(____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__keyword, put=__set__keyword))  _keyword;

constexpr void __set__keyword(::StringW value) ;

constexpr ::StringW __get__keyword() const;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> __declspec(property(get=__get__specialEvents, put=__set__specialEvents))  _specialEvents;

constexpr void __set__specialEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> __get__specialEvents() const;


// Properties

 ::StringW __declspec(property(get=get_keyword))  keyword;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> __declspec(property(get=get_specialEvents))  specialEvents;


// Methods

/// @brief Method get_keyword addr 0xd9bfe4 size 0x8 virtual false final false
 ::StringW get_keyword() ;

/// @brief Method get_specialEvents addr 0xd9bfec size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> get_specialEvents() ;

// Ctor Parameters [CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "specialEvents", ty: "::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>", modifiers: "", def_value: None }]
explicit ____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> specialEvents) ;

/// @brief Method .ctor addr 0xd9bff4 size 0x2c virtual false final false
 void _ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> specialEvents) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
// Type: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15016))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData
class CORDL_TYPE BeatmapSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SpecialEventsForKeyword = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword;

using SpecialEventKeywordFiltersData = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData;

using ObstacleType = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType;

using ObstacleData = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData;

using SliderData = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData;

using WaypointData = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData;

using NoteData = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData;

using SliderType = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType;

using ColorType = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType;

using NoteType = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType;

using BeatmapObjectType = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType;

using EventData = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData;

using BeatmapEventType = ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

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
static constexpr ::ConstString  kCurrentVersion{u"2.6.0"};

 ::StringW __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(::StringW value) ;

constexpr ::StringW __get__version() const;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> __declspec(property(get=__get__events, put=__set__events))  _events;

constexpr void __set__events(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> __get__events() const;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> __declspec(property(get=__get__notes, put=__set__notes))  _notes;

constexpr void __set__notes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> __get__notes() const;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> __declspec(property(get=__get__sliders, put=__set__sliders))  _sliders;

constexpr void __set__sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> __get__sliders() const;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> __declspec(property(get=__get__waypoints, put=__set__waypoints))  _waypoints;

constexpr void __set__waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> __get__waypoints() const;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> __declspec(property(get=__get__obstacles, put=__set__obstacles))  _obstacles;

constexpr void __set__obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> value) ;

constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> __get__obstacles() const;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData __declspec(property(get=__get__specialEventsKeywordFilters, put=__set__specialEventsKeywordFilters))  _specialEventsKeywordFilters;

constexpr void __set__specialEventsKeywordFilters(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData value) ;

constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData __get__specialEventsKeywordFilters() const;

/// @brief Field kColorBoostEventType offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const kColorBoostEventType;

/// @brief Field kLegacyBPMEventType offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const kLegacyBPMEventType;

/// @brief Field kBPMEventType offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const kBPMEventType;

/// @brief Field kEarlyRotationEventType offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const kEarlyRotationEventType;

/// @brief Field kLateRotationEventType offset 0
static ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType const kLateRotationEventType;


// Properties

 ::StringW __declspec(property(get=get_version))  version;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> __declspec(property(get=get_events))  events;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> __declspec(property(get=get_notes))  notes;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> __declspec(property(get=get_sliders))  sliders;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> __declspec(property(get=get_waypoints))  waypoints;

 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> __declspec(property(get=get_obstacles))  obstacles;

 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData __declspec(property(get=get_specialEventsKeywordFilters))  specialEventsKeywordFilters;


// Methods

/// @brief Method get_version addr 0xd9b7e8 size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method get_events addr 0xd9b7f0 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> get_events() ;

/// @brief Method get_notes addr 0xd9b7f8 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> get_notes() ;

/// @brief Method get_sliders addr 0xd9b800 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> get_sliders() ;

/// @brief Method get_waypoints addr 0xd9b808 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> get_waypoints() ;

/// @brief Method get_obstacles addr 0xd9b810 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> get_obstacles() ;

/// @brief Method get_specialEventsKeywordFilters addr 0xd9b818 size 0x8 virtual false final false
 ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData get_specialEventsKeywordFilters() ;

// Ctor Parameters [CppParam { name: "events", ty: "::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>", modifiers: "", def_value: None }, CppParam { name: "notes", ty: "::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>", modifiers: "", def_value: None }, CppParam { name: "sliders", ty: "::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>", modifiers: "", def_value: None }, CppParam { name: "waypoints", ty: "::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>", modifiers: "", def_value: None }, CppParam { name: "obstacles", ty: "::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>", modifiers: "", def_value: None }, CppParam { name: "specialEventsKeywordFilters", ty: "::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData", modifiers: "", def_value: None }]
explicit BeatmapSaveData(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> events, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> notes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> sliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> waypoints, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> obstacles, ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData specialEventsKeywordFilters) ;

/// @brief Method .ctor addr 0xd9b820 size 0x90 virtual false final false
 void _ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> events, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> notes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> sliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> waypoints, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> obstacles, ::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData specialEventsKeywordFilters) ;

/// @brief Method SerializeToJSONString addr 0xd9b8b0 size 0x8 virtual false final false
 ::StringW SerializeToJSONString() ;

/// @brief Method DeserializeFromJSONString addr 0xd98a1c size 0x1d0 virtual false final false
static ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData DeserializeFromJSONString(::StringW stringData) ;

/// @brief Method ConvertBeatmapSaveDataPreV2_5_0 addr 0xd9b8b8 size 0x370 virtual false final false
static void ConvertBeatmapSaveDataPreV2_5_0(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData beatmapSaveData) ;

/// @brief Method GetSpecialEventTypes addr 0xd9bc6c size 0xc4 virtual false final false
static ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> GetSpecialEventTypes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/BeatmapEventType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/BeatmapObjectType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ColorType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/NoteType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ObstacleType");
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/SliderType");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/EventData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/NoteData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ObstacleData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/SliderData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/SpecialEventKeywordFiltersData");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/SpecialEventsForKeyword");
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::____BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/WaypointData");
