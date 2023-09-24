#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class LightGroupRotationZTransform;
}
// Type: ::LightGroupRotationZTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5034))
// CS Name: LightGroupRotationZTransform
class CORDL_TYPE LightGroupRotationZTransform : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightGroupRotationZTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationZTransform", modifiers: " const&", def_value: None }]
constexpr LightGroupRotationZTransform(LightGroupRotationZTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationZTransform", modifiers: "&&", def_value: None }]
constexpr LightGroupRotationZTransform(LightGroupRotationZTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupRotationZTransform(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupRotationZTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupRotationZTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupRotationZTransform& operator=(LightGroupRotationZTransform&& o) noexcept = default;
  constexpr LightGroupRotationZTransform& operator=(LightGroupRotationZTransform const& o) noexcept = default;
                


// Methods

static GlobalNamespace::LightGroupRotationZTransform New_ctor() ;

/// @brief Method .ctor addr 0x225e778 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightGroupRotationZTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightGroupRotationZTransform, "", "LightGroupRotationZTransform");
