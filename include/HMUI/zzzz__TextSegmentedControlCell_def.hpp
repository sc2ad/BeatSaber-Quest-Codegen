#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HMUI {
class TextSegmentedControlCell;
}
// Type: HMUI::TextSegmentedControlCell
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13606))
// CS Name: HMUI.TextSegmentedControlCell
class CORDL_TYPE TextSegmentedControlCell : public HMUI::SegmentedControlCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~TextSegmentedControlCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControlCell", modifiers: " const&", def_value: None }]
constexpr TextSegmentedControlCell(TextSegmentedControlCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControlCell", modifiers: "&&", def_value: None }]
constexpr TextSegmentedControlCell(TextSegmentedControlCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextSegmentedControlCell(void* ptr) noexcept : HMUI::SegmentedControlCell(ptr) {
}


  constexpr TextSegmentedControlCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextSegmentedControlCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextSegmentedControlCell& operator=(TextSegmentedControlCell&& o) noexcept = default;
  constexpr TextSegmentedControlCell& operator=(TextSegmentedControlCell const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;

 UnityEngine::GameObject __declspec(property(get=__get__backgroundGameObject, put=__set__backgroundGameObject))  _backgroundGameObject;

constexpr void __set__backgroundGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__backgroundGameObject() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 float_t __declspec(property(get=get_fontSize, put=set_fontSize))  fontSize;

 bool __declspec(property(put=set_hideBackgroundImage))  hideBackgroundImage;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;


// Methods

/// @brief Method set_text addr 0x1fad64c size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_text addr 0x1fad6c8 size 0x24 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_fontSize addr 0x1fad630 size 0x1c virtual false final false
 void set_fontSize(float_t value) ;

/// @brief Method get_fontSize addr 0x1fad6ec size 0x1c virtual false final false
 float_t get_fontSize() ;

/// @brief Method set_hideBackgroundImage addr 0x1fad670 size 0x24 virtual false final false
 void set_hideBackgroundImage(bool value) ;

/// @brief Method get_preferredWidth addr 0x1fad694 size 0x24 virtual false final false
 float_t get_preferredWidth() ;

static HMUI::TextSegmentedControlCell New_ctor() ;

/// @brief Method .ctor addr 0x1fad708 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::TextSegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextSegmentedControlCell, "HMUI", "TextSegmentedControlCell");
