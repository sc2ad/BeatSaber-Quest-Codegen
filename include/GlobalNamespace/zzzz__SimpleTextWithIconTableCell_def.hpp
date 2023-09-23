#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTextWithIconTableCell;
}
// Type: ::SimpleTextWithIconTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13555))
// CS Name: SimpleTextWithIconTableCell
class CORDL_TYPE SimpleTextWithIconTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~SimpleTextWithIconTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextWithIconTableCell", modifiers: " const&", def_value: None }]
constexpr SimpleTextWithIconTableCell(SimpleTextWithIconTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextWithIconTableCell", modifiers: "&&", def_value: None }]
constexpr SimpleTextWithIconTableCell(SimpleTextWithIconTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleTextWithIconTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr SimpleTextWithIconTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleTextWithIconTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleTextWithIconTableCell& operator=(SimpleTextWithIconTableCell&& o) noexcept = default;
  constexpr SimpleTextWithIconTableCell& operator=(SimpleTextWithIconTableCell const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;

 UnityEngine::UI::Image __declspec(property(get=__get__icon, put=__set__icon))  _icon;

constexpr void __set__icon(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__icon() const;


// Properties

 UnityEngine::UI::Image __declspec(property(get=get_icon, put=set_icon))  icon;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

/// @brief Method set_icon addr 0x1fa37a4 size 0x8 virtual false final false
 void set_icon(UnityEngine::UI::Image value) ;

/// @brief Method get_icon addr 0x1fa37ac size 0x8 virtual false final false
 UnityEngine::UI::Image get_icon() ;

/// @brief Method set_text addr 0x1fa37b4 size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_text addr 0x1fa37d8 size 0x24 virtual false final false
 ::StringW get_text() ;

// Ctor Parameters []
explicit SimpleTextWithIconTableCell() ;

/// @brief Method .ctor addr 0x1fa37fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SimpleTextWithIconTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleTextWithIconTableCell, "", "SimpleTextWithIconTableCell");
