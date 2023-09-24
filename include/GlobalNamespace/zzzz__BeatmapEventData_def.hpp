#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventData;
}
// Type: ::BeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14901))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14912))
// CS Name: BeatmapEventData
class CORDL_TYPE BeatmapEventData : public GlobalNamespace::BeatmapDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventData", modifiers: " const&", def_value: None }]
constexpr BeatmapEventData(BeatmapEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventData", modifiers: "&&", def_value: None }]
constexpr BeatmapEventData(BeatmapEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventData(void* ptr) noexcept : GlobalNamespace::BeatmapDataItem(ptr) {
}


  constexpr BeatmapEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventData& operator=(BeatmapEventData&& o) noexcept = default;
  constexpr BeatmapEventData& operator=(BeatmapEventData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapEventData __declspec(property(get=__get__previousSameTypeEventData_k__BackingField, put=__set__previousSameTypeEventData_k__BackingField))  _previousSameTypeEventData_k__BackingField;

constexpr void __set__previousSameTypeEventData_k__BackingField(GlobalNamespace::BeatmapEventData value) ;

constexpr GlobalNamespace::BeatmapEventData __get__previousSameTypeEventData_k__BackingField() const;

 GlobalNamespace::BeatmapEventData __declspec(property(get=__get__nextSameTypeEventData_k__BackingField, put=__set__nextSameTypeEventData_k__BackingField))  _nextSameTypeEventData_k__BackingField;

constexpr void __set__nextSameTypeEventData_k__BackingField(GlobalNamespace::BeatmapEventData value) ;

constexpr GlobalNamespace::BeatmapEventData __get__nextSameTypeEventData_k__BackingField() const;


// Properties

 GlobalNamespace::BeatmapEventData __declspec(property(get=get_previousSameTypeEventData, put=set_previousSameTypeEventData))  previousSameTypeEventData;

 GlobalNamespace::BeatmapEventData __declspec(property(get=get_nextSameTypeEventData, put=set_nextSameTypeEventData))  nextSameTypeEventData;


// Methods

/// @brief Method get_previousSameTypeEventData addr 0xd919b8 size 0x8 virtual false final false
 GlobalNamespace::BeatmapEventData get_previousSameTypeEventData() ;

/// @brief Method set_previousSameTypeEventData addr 0xd919c0 size 0x8 virtual false final false
 void set_previousSameTypeEventData(GlobalNamespace::BeatmapEventData value) ;

/// @brief Method get_nextSameTypeEventData addr 0xd919c8 size 0x8 virtual false final false
 GlobalNamespace::BeatmapEventData get_nextSameTypeEventData() ;

/// @brief Method set_nextSameTypeEventData addr 0xd919d0 size 0x8 virtual false final false
 void set_nextSameTypeEventData(GlobalNamespace::BeatmapEventData value) ;

static GlobalNamespace::BeatmapEventData New_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier) ;

/// @brief Method .ctor addr 0xd91600 size 0x44 virtual false final false
 void _ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier) ;

/// @brief Method __ConnectWithPreviousSameTypeEventData addr 0xd919d8 size 0x10 virtual false final false
 void __ConnectWithPreviousSameTypeEventData(GlobalNamespace::BeatmapEventData newPreviousSameTypeEvent) ;

/// @brief Method __ConnectWithNextSameTypeEventData addr 0xd919e8 size 0x10 virtual false final false
 void __ConnectWithNextSameTypeEventData(GlobalNamespace::BeatmapEventData newNextSameTypeEvent) ;

/// @brief Method __ResetConnections addr 0xd919f8 size 0x8 virtual false final false
 void __ResetConnections() ;

/// @brief Method GetDefault addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapEventData GetDefault() ;

/// @brief Method GetDefault addr 0xd91a00 size 0x2c virtual false final false
 GlobalNamespace::BeatmapEventData GetDefault(GlobalNamespace::BeatmapEventData nextData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventData, "", "BeatmapEventData");
