#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class TitleViewController;
}
// Type: HMUI::TitleViewController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13648))
// CS Name: HMUI.TitleViewController
class CORDL_TYPE TitleViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~TitleViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "TitleViewController", modifiers: " const&", def_value: None }]
constexpr TitleViewController(TitleViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TitleViewController", modifiers: "&&", def_value: None }]
constexpr TitleViewController(TitleViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TitleViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr TitleViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TitleViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TitleViewController& operator=(TitleViewController&& o) noexcept = default;
  constexpr TitleViewController& operator=(TitleViewController const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;


// Methods

/// @brief Method SetText addr 0x1fb95d8 size 0x24 virtual false final false
 void SetText(::StringW text) ;

// Ctor Parameters []
explicit TitleViewController() ;

/// @brief Method .ctor addr 0x1fb95fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::TitleViewController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TitleViewController, "HMUI", "TitleViewController");
