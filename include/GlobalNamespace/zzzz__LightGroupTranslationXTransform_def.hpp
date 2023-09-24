#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class LightGroupTranslationXTransform;
}
// Type: ::LightGroupTranslationXTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5036))
// CS Name: LightGroupTranslationXTransform
class CORDL_TYPE LightGroupTranslationXTransform : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightGroupTranslationXTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationXTransform", modifiers: " const&", def_value: None }]
constexpr LightGroupTranslationXTransform(LightGroupTranslationXTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationXTransform", modifiers: "&&", def_value: None }]
constexpr LightGroupTranslationXTransform(LightGroupTranslationXTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupTranslationXTransform(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupTranslationXTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupTranslationXTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupTranslationXTransform& operator=(LightGroupTranslationXTransform&& o) noexcept = default;
  constexpr LightGroupTranslationXTransform& operator=(LightGroupTranslationXTransform const& o) noexcept = default;
                


// Methods

static GlobalNamespace::LightGroupTranslationXTransform New_ctor() ;

/// @brief Method .ctor addr 0x225e804 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightGroupTranslationXTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightGroupTranslationXTransform, "", "LightGroupTranslationXTransform");
