#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class LightGroupTranslationZTransform;
}
// Type: ::LightGroupTranslationZTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5038))
// CS Name: LightGroupTranslationZTransform
class CORDL_TYPE LightGroupTranslationZTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightGroupTranslationZTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationZTransform", modifiers: " const&", def_value: None }]
constexpr LightGroupTranslationZTransform(LightGroupTranslationZTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationZTransform", modifiers: "&&", def_value: None }]
constexpr LightGroupTranslationZTransform(LightGroupTranslationZTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupTranslationZTransform(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupTranslationZTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupTranslationZTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupTranslationZTransform& operator=(LightGroupTranslationZTransform&& o) noexcept = default;
  constexpr LightGroupTranslationZTransform& operator=(LightGroupTranslationZTransform const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LightGroupTranslationZTransform() ;

/// @brief Method .ctor addr 0x225e814 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightGroupTranslationZTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupTranslationZTransform, "", "LightGroupTranslationZTransform");
