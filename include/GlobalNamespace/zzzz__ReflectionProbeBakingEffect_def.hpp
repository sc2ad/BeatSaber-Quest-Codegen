#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class ReflectionProbeBakingEffect;
}
// Type: ::ReflectionProbeBakingEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14663))
// CS Name: ReflectionProbeBakingEffect
class CORDL_TYPE ReflectionProbeBakingEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ReflectionProbeBakingEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingEffect", modifiers: " const&", def_value: None }]
constexpr ReflectionProbeBakingEffect(ReflectionProbeBakingEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingEffect", modifiers: "&&", def_value: None }]
constexpr ReflectionProbeBakingEffect(ReflectionProbeBakingEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionProbeBakingEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ReflectionProbeBakingEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionProbeBakingEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionProbeBakingEffect& operator=(ReflectionProbeBakingEffect&& o) noexcept = default;
  constexpr ReflectionProbeBakingEffect& operator=(ReflectionProbeBakingEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material() const;


// Methods

/// @brief Method OnRenderImage addr 0x1f99f44 size 0x74 virtual false final false
 void OnRenderImage(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest) ;

static GlobalNamespace::ReflectionProbeBakingEffect New_ctor() ;

/// @brief Method .ctor addr 0x1f99fb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ReflectionProbeBakingEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReflectionProbeBakingEffect, "", "ReflectionProbeBakingEffect");
