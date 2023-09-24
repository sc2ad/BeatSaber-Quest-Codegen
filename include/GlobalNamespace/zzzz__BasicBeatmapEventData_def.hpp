#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
// Type: ::BasicBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14906))
// CS Name: BasicBeatmapEventData
class CORDL_TYPE BasicBeatmapEventData : public GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BasicBeatmapEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventData", modifiers: " const&", def_value: None }]
constexpr BasicBeatmapEventData(BasicBeatmapEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventData", modifiers: "&&", def_value: None }]
constexpr BasicBeatmapEventData(BasicBeatmapEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicBeatmapEventData(void* ptr) noexcept : GlobalNamespace::BeatmapEventData(ptr) {
}


  constexpr BasicBeatmapEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicBeatmapEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicBeatmapEventData& operator=(BasicBeatmapEventData&& o) noexcept = default;
  constexpr BasicBeatmapEventData& operator=(BasicBeatmapEventData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__sameTypeIndex_k__BackingField, put=__set__sameTypeIndex_k__BackingField))  _sameTypeIndex_k__BackingField;

constexpr void __set__sameTypeIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__sameTypeIndex_k__BackingField() const;

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get_basicBeatmapEventType, put=__set_basicBeatmapEventType))  basicBeatmapEventType;

constexpr void __set_basicBeatmapEventType(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get_basicBeatmapEventType() const;

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;

 float_t __declspec(property(get=__get_floatValue, put=__set_floatValue))  floatValue;

constexpr void __set_floatValue(float_t value) ;

constexpr float_t __get_floatValue() const;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::BasicBeatmapEventType,GlobalNamespace::BasicBeatmapEventData> __declspec(property(get=__get__defaultsForType, put=__set__defaultsForType))  _defaultsForType;

static void __set__defaultsForType(System::Collections::Generic::Dictionary_2<GlobalNamespace::BasicBeatmapEventType,GlobalNamespace::BasicBeatmapEventData> value) ;

static System::Collections::Generic::Dictionary_2<GlobalNamespace::BasicBeatmapEventType,GlobalNamespace::BasicBeatmapEventData> __get__defaultsForType() ;


// Properties

 GlobalNamespace::BasicBeatmapEventData __declspec(property(get=get_previousSameTypeEventData))  previousSameTypeEventData;

 GlobalNamespace::BasicBeatmapEventData __declspec(property(get=get_nextSameTypeEventData))  nextSameTypeEventData;

 int32_t __declspec(property(get=get_sameTypeIndex, put=set_sameTypeIndex))  sameTypeIndex;


// Methods

/// @brief Method get_previousSameTypeEventData addr 0xd91464 size 0x78 virtual false final false
 GlobalNamespace::BasicBeatmapEventData get_previousSameTypeEventData() ;

/// @brief Method get_nextSameTypeEventData addr 0xd914dc size 0x78 virtual false final false
 GlobalNamespace::BasicBeatmapEventData get_nextSameTypeEventData() ;

/// @brief Method get_sameTypeIndex addr 0xd91554 size 0x8 virtual false final false
 int32_t get_sameTypeIndex() ;

/// @brief Method set_sameTypeIndex addr 0xd9155c size 0x8 virtual false final false
 void set_sameTypeIndex(int32_t value) ;

static GlobalNamespace::BasicBeatmapEventData New_ctor(float_t time, GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue) ;

/// @brief Method .ctor addr 0xd91564 size 0x98 virtual false final false
 void _ctor(float_t time, GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType, int32_t value, float_t floatValue) ;

/// @brief Method GetCopy addr 0xd91644 size 0x88 virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method SubtypeIdentifier addr 0xd915fc size 0x4 virtual false final false
static int32_t SubtypeIdentifier(GlobalNamespace::BasicBeatmapEventType type) ;

/// @brief Method SetFirstSameTypeIndex addr 0xd916cc size 0xc virtual false final false
 void SetFirstSameTypeIndex() ;

/// @brief Method RecalculateSameTypeIndexFromPreviousEvent addr 0xd916d8 size 0x20 virtual false final false
 void RecalculateSameTypeIndexFromPreviousEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method GetDefault addr 0xd916f8 size 0x110 virtual true final false
 GlobalNamespace::BeatmapEventData GetDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BasicBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicBeatmapEventData, "", "BasicBeatmapEventData");
