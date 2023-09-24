#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class DuplicateMirrorForReflectionProbe;
}
// Type: ::DuplicateMirrorForReflectionProbe
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5946))
// CS Name: DuplicateMirrorForReflectionProbe
class CORDL_TYPE DuplicateMirrorForReflectionProbe : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DuplicateMirrorForReflectionProbe() = default;

// Ctor Parameters [CppParam { name: "", ty: "DuplicateMirrorForReflectionProbe", modifiers: " const&", def_value: None }]
constexpr DuplicateMirrorForReflectionProbe(DuplicateMirrorForReflectionProbe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DuplicateMirrorForReflectionProbe", modifiers: "&&", def_value: None }]
constexpr DuplicateMirrorForReflectionProbe(DuplicateMirrorForReflectionProbe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DuplicateMirrorForReflectionProbe(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DuplicateMirrorForReflectionProbe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DuplicateMirrorForReflectionProbe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DuplicateMirrorForReflectionProbe& operator=(DuplicateMirrorForReflectionProbe&& o) noexcept = default;
  constexpr DuplicateMirrorForReflectionProbe& operator=(DuplicateMirrorForReflectionProbe const& o) noexcept = default;
                


// Methods

static GlobalNamespace::DuplicateMirrorForReflectionProbe New_ctor() ;

/// @brief Method .ctor addr 0x219c42c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DuplicateMirrorForReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DuplicateMirrorForReflectionProbe, "", "DuplicateMirrorForReflectionProbe");
