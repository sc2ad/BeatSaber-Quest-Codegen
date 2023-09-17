#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HMUI {
struct ____HMUI__SelectableCell__TransitionType;
}
namespace GlobalNamespace {
class FillIndicator;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyTableCell;
}
// Type: ::DifficultyTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5512))
// CS Name: DifficultyTableCell
class CORDL_TYPE DifficultyTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~DifficultyTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyTableCell", modifiers: " const&", def_value: None }]
constexpr DifficultyTableCell(DifficultyTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyTableCell", modifiers: "&&", def_value: None }]
constexpr DifficultyTableCell(DifficultyTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DifficultyTableCell(void* ptr) noexcept : ::HMUI::TableCell(ptr) {
}


  constexpr DifficultyTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DifficultyTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DifficultyTableCell& operator=(DifficultyTableCell&& o) noexcept = default;
  constexpr DifficultyTableCell& operator=(DifficultyTableCell const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__difficultyText, put=__set__difficultyText))  _difficultyText;

constexpr void __set__difficultyText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__difficultyText() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__bgImage, put=__set__bgImage))  _bgImage;

constexpr void __set__bgImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__bgImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__highlightImage, put=__set__highlightImage))  _highlightImage;

constexpr void __set__highlightImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__highlightImage() const;

 ::GlobalNamespace::FillIndicator __declspec(property(get=__get__fillIndicator, put=__set__fillIndicator))  _fillIndicator;

constexpr void __set__fillIndicator(::GlobalNamespace::FillIndicator value) ;

constexpr ::GlobalNamespace::FillIndicator __get__fillIndicator() const;


// Properties

 ::StringW __declspec(property(get=get_difficultyText, put=set_difficultyText))  difficultyText;

 int32_t __declspec(property(put=set_difficultyValue))  difficultyValue;


// Methods

/// @brief Method set_difficultyText addr 0x2122d58 size 0x24 virtual false final false
 void set_difficultyText(::StringW value) ;

/// @brief Method get_difficultyText addr 0x2122d7c size 0x24 virtual false final false
 ::StringW get_difficultyText() ;

/// @brief Method set_difficultyValue addr 0x2122da0 size 0x38 virtual false final false
 void set_difficultyValue(int32_t value) ;

/// @brief Method SelectionDidChange addr 0x2122e1c size 0xa4 virtual true final false
 void SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x2122ec0 size 0x40 virtual true final false
 void HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

// Ctor Parameters []
explicit DifficultyTableCell() ;

/// @brief Method .ctor addr 0x2122f00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DifficultyTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyTableCell, "", "DifficultyTableCell");
