#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct OffsetDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointData;
}
// Type: ::WaypointData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14932))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14949))
// CS Name: WaypointData
class CORDL_TYPE WaypointData : public GlobalNamespace::BeatmapObjectData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~WaypointData() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaypointData", modifiers: " const&", def_value: None }]
constexpr WaypointData(WaypointData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaypointData", modifiers: "&&", def_value: None }]
constexpr WaypointData(WaypointData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaypointData(void* ptr) noexcept : GlobalNamespace::BeatmapObjectData(ptr) {
}


  constexpr WaypointData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaypointData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaypointData& operator=(WaypointData&& o) noexcept = default;
  constexpr WaypointData& operator=(WaypointData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OffsetDirection __declspec(property(get=__get__offsetDirection_k__BackingField, put=__set__offsetDirection_k__BackingField))  _offsetDirection_k__BackingField;

constexpr void __set__offsetDirection_k__BackingField(GlobalNamespace::OffsetDirection value) ;

constexpr GlobalNamespace::OffsetDirection __get__offsetDirection_k__BackingField() const;

 int32_t __declspec(property(get=__get__lineIndex_k__BackingField, put=__set__lineIndex_k__BackingField))  _lineIndex_k__BackingField;

constexpr void __set__lineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__lineIndex_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__lineLayer_k__BackingField, put=__set__lineLayer_k__BackingField))  _lineLayer_k__BackingField;

constexpr void __set__lineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__lineLayer_k__BackingField() const;


// Properties

 GlobalNamespace::OffsetDirection __declspec(property(get=get_offsetDirection, put=set_offsetDirection))  offsetDirection;

 int32_t __declspec(property(get=get_lineIndex, put=set_lineIndex))  lineIndex;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_lineLayer, put=set_lineLayer))  lineLayer;


// Methods

/// @brief Method get_offsetDirection addr 0xd951a4 size 0x8 virtual false final false
 GlobalNamespace::OffsetDirection get_offsetDirection() ;

/// @brief Method set_offsetDirection addr 0xd951ac size 0x8 virtual false final false
 void set_offsetDirection(GlobalNamespace::OffsetDirection value) ;

/// @brief Method get_lineIndex addr 0xd951b4 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method set_lineIndex addr 0xd951bc size 0x8 virtual false final false
 void set_lineIndex(int32_t value) ;

/// @brief Method get_lineLayer addr 0xd951c4 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_lineLayer() ;

/// @brief Method set_lineLayer addr 0xd951cc size 0x8 virtual false final false
 void set_lineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method GetCopy addr 0xd951d4 size 0x90 virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "offsetDirection", ty: "GlobalNamespace::OffsetDirection", modifiers: "", def_value: None }]
explicit WaypointData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::OffsetDirection offsetDirection) ;

/// @brief Method .ctor addr 0xd95264 size 0x58 virtual false final false
 void _ctor(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::OffsetDirection offsetDirection) ;

/// @brief Method Mirror addr 0xd952bc size 0x14 virtual true final false
 void Mirror(int32_t lineCount) ;

/// @brief Method MirrorTransformOffsetDirection addr 0xd952d0 size 0x24 virtual false final false
 void MirrorTransformOffsetDirection() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::WaypointData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WaypointData, "", "WaypointData");
