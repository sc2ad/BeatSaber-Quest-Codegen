#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace Polyglot {
class ILocalize;
}
namespace UnityEngine::UI {
class Dropdown;
}
// Forward declare root types
namespace Polyglot {
class LanguageDropdown;
}
// Type: Polyglot::LanguageDropdown
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15533))
// CS Name: Polyglot.LanguageDropdown
class CORDL_TYPE LanguageDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::Polyglot::ILocalize
constexpr operator  ::Polyglot::ILocalize() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LanguageDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguageDropdown", modifiers: " const&", def_value: None }]
constexpr LanguageDropdown(LanguageDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguageDropdown", modifiers: "&&", def_value: None }]
constexpr LanguageDropdown(LanguageDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LanguageDropdown(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LanguageDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LanguageDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LanguageDropdown& operator=(LanguageDropdown&& o) noexcept = default;
  constexpr LanguageDropdown& operator=(LanguageDropdown const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Dropdown __declspec(property(get=__get_dropdown, put=__set_dropdown))  dropdown;

constexpr void __set_dropdown(::UnityEngine::UI::Dropdown value) ;

constexpr ::UnityEngine::UI::Dropdown __get_dropdown() const;


// Methods

/// @brief Method Reset addr 0x267130c size 0x50 virtual false final false
 void Reset() ;

/// @brief Method Start addr 0x267135c size 0x24 virtual false final false
 void Start() ;

/// @brief Method CreateDropdown addr 0x2671380 size 0x22c virtual false final false
 void CreateDropdown() ;

/// @brief Method OnLocalize addr 0x26718f8 size 0x148 virtual true final true
 void OnLocalize() ;

// Ctor Parameters []
explicit LanguageDropdown() ;

/// @brief Method .ctor addr 0x2671a40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
} // end anonymous namespace
NEED_NO_BOX(::Polyglot::LanguageDropdown);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LanguageDropdown, "Polyglot", "LanguageDropdown");
