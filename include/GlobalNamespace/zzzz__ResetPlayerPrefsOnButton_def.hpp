#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace GlobalNamespace {
class ResetPlayerPrefsOnButton;
}
// Type: ::ResetPlayerPrefsOnButton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13823))
// CS Name: ResetPlayerPrefsOnButton
class CORDL_TYPE ResetPlayerPrefsOnButton : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ResetPlayerPrefsOnButton() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResetPlayerPrefsOnButton", modifiers: " const&", def_value: None }]
constexpr ResetPlayerPrefsOnButton(ResetPlayerPrefsOnButton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResetPlayerPrefsOnButton", modifiers: "&&", def_value: None }]
constexpr ResetPlayerPrefsOnButton(ResetPlayerPrefsOnButton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResetPlayerPrefsOnButton(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ResetPlayerPrefsOnButton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResetPlayerPrefsOnButton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResetPlayerPrefsOnButton& operator=(ResetPlayerPrefsOnButton&& o) noexcept = default;
  constexpr ResetPlayerPrefsOnButton& operator=(ResetPlayerPrefsOnButton const& o) noexcept = default;
                


// Fields

 UnityEngine::KeyCode __declspec(property(get=__get__keyCode, put=__set__keyCode))  _keyCode;

constexpr void __set__keyCode(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get__keyCode() const;


// Methods

/// @brief Method Update addr 0x1f79f9c size 0x28 virtual false final false
 void Update() ;

static GlobalNamespace::ResetPlayerPrefsOnButton New_ctor() ;

/// @brief Method .ctor addr 0x1f79fc4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ResetPlayerPrefsOnButton);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResetPlayerPrefsOnButton, "", "ResetPlayerPrefsOnButton");
