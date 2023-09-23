#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include <cstdint>
namespace HMUI {
class SegmentedControl;
}
// Forward declare root types
namespace HMUI {
class SegmentedControlCell;
}
// Type: HMUI::SegmentedControlCell
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13604))
// CS Name: HMUI.SegmentedControlCell
class CORDL_TYPE SegmentedControlCell : public HMUI::SelectableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SegmentedControlCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "SegmentedControlCell", modifiers: " const&", def_value: None }]
constexpr SegmentedControlCell(SegmentedControlCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SegmentedControlCell", modifiers: "&&", def_value: None }]
constexpr SegmentedControlCell(SegmentedControlCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SegmentedControlCell(void* ptr) noexcept : HMUI::SelectableCell(ptr) {
}


  constexpr SegmentedControlCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SegmentedControlCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SegmentedControlCell& operator=(SegmentedControlCell&& o) noexcept = default;
  constexpr SegmentedControlCell& operator=(SegmentedControlCell const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__cellNumber_k__BackingField, put=__set__cellNumber_k__BackingField))  _cellNumber_k__BackingField;

constexpr void __set__cellNumber_k__BackingField(int32_t value) ;

constexpr int32_t __get__cellNumber_k__BackingField() const;

 HMUI::SegmentedControl __declspec(property(get=__get__segmentedControl, put=__set__segmentedControl))  _segmentedControl;

constexpr void __set__segmentedControl(HMUI::SegmentedControl value) ;

constexpr HMUI::SegmentedControl __get__segmentedControl() const;


// Properties

 int32_t __declspec(property(get=get_cellNumber, put=set_cellNumber))  cellNumber;


// Methods

/// @brief Method get_cellNumber addr 0x1fad124 size 0x8 virtual false final false
 int32_t get_cellNumber() ;

/// @brief Method set_cellNumber addr 0x1fad12c size 0x8 virtual false final false
 void set_cellNumber(int32_t value) ;

/// @brief Method SegmentedControlSetup addr 0x1faceb8 size 0xc virtual false final false
 void SegmentedControlSetup(HMUI::SegmentedControl segmentedControl, int32_t cellNumber) ;

/// @brief Method InternalToggle addr 0x1fad134 size 0x24 virtual true final false
 void InternalToggle() ;

// Ctor Parameters []
explicit SegmentedControlCell() ;

/// @brief Method .ctor addr 0x1fac87c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::SegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(HMUI::SegmentedControlCell, "HMUI", "SegmentedControlCell");
