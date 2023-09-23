#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class LightGroupRotationXTransform;
}
// Type: ::LightGroupRotationXTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5032))
// CS Name: LightGroupRotationXTransform
class CORDL_TYPE LightGroupRotationXTransform : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightGroupRotationXTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationXTransform", modifiers: " const&", def_value: None }]
constexpr LightGroupRotationXTransform(LightGroupRotationXTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationXTransform", modifiers: "&&", def_value: None }]
constexpr LightGroupRotationXTransform(LightGroupRotationXTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupRotationXTransform(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupRotationXTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupRotationXTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupRotationXTransform& operator=(LightGroupRotationXTransform&& o) noexcept = default;
  constexpr LightGroupRotationXTransform& operator=(LightGroupRotationXTransform const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LightGroupRotationXTransform() ;

/// @brief Method .ctor addr 0x225e768 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightGroupRotationXTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightGroupRotationXTransform, "", "LightGroupRotationXTransform");
