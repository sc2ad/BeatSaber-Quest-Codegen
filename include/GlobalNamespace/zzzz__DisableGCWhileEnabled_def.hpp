#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class DisableGCWhileEnabled;
}
// Type: ::DisableGCWhileEnabled
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13788))
// CS Name: DisableGCWhileEnabled
class CORDL_TYPE DisableGCWhileEnabled : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DisableGCWhileEnabled() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableGCWhileEnabled", modifiers: " const&", def_value: None }]
constexpr DisableGCWhileEnabled(DisableGCWhileEnabled const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableGCWhileEnabled", modifiers: "&&", def_value: None }]
constexpr DisableGCWhileEnabled(DisableGCWhileEnabled&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableGCWhileEnabled(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableGCWhileEnabled& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableGCWhileEnabled& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableGCWhileEnabled& operator=(DisableGCWhileEnabled&& o) noexcept = default;
  constexpr DisableGCWhileEnabled& operator=(DisableGCWhileEnabled const& o) noexcept = default;
                


// Methods

/// @brief Method OnEnable addr 0x1f76840 size 0xc virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f7684c size 0xc virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit DisableGCWhileEnabled() ;

/// @brief Method .ctor addr 0x1f76858 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DisableGCWhileEnabled);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableGCWhileEnabled, "", "DisableGCWhileEnabled");
