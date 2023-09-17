#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class LightGroupRotationYTransform;
}
// Type: ::LightGroupRotationYTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5033))
// CS Name: LightGroupRotationYTransform
class CORDL_TYPE LightGroupRotationYTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightGroupRotationYTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationYTransform", modifiers: " const&", def_value: None }]
constexpr LightGroupRotationYTransform(LightGroupRotationYTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationYTransform", modifiers: "&&", def_value: None }]
constexpr LightGroupRotationYTransform(LightGroupRotationYTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupRotationYTransform(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupRotationYTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupRotationYTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupRotationYTransform& operator=(LightGroupRotationYTransform&& o) noexcept = default;
  constexpr LightGroupRotationYTransform& operator=(LightGroupRotationYTransform const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LightGroupRotationYTransform() ;

/// @brief Method .ctor addr 0x225e770 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightGroupRotationYTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupRotationYTransform, "", "LightGroupRotationYTransform");
