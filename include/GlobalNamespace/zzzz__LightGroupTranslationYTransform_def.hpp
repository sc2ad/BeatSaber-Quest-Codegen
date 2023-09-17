#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class LightGroupTranslationYTransform;
}
// Type: ::LightGroupTranslationYTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5037))
// CS Name: LightGroupTranslationYTransform
class CORDL_TYPE LightGroupTranslationYTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightGroupTranslationYTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationYTransform", modifiers: " const&", def_value: None }]
constexpr LightGroupTranslationYTransform(LightGroupTranslationYTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationYTransform", modifiers: "&&", def_value: None }]
constexpr LightGroupTranslationYTransform(LightGroupTranslationYTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupTranslationYTransform(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupTranslationYTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupTranslationYTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupTranslationYTransform& operator=(LightGroupTranslationYTransform&& o) noexcept = default;
  constexpr LightGroupTranslationYTransform& operator=(LightGroupTranslationYTransform const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LightGroupTranslationYTransform() ;

/// @brief Method .ctor addr 0x225e80c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightGroupTranslationYTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupTranslationYTransform, "", "LightGroupTranslationYTransform");
