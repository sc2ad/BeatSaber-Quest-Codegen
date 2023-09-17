#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class NoPostProcessMainEffectSO;
}
// Type: ::NoPostProcessMainEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15315))
// CS Name: NoPostProcessMainEffectSO
class CORDL_TYPE NoPostProcessMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NoPostProcessMainEffectSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoPostProcessMainEffectSO", modifiers: " const&", def_value: None }]
constexpr NoPostProcessMainEffectSO(NoPostProcessMainEffectSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoPostProcessMainEffectSO", modifiers: "&&", def_value: None }]
constexpr NoPostProcessMainEffectSO(NoPostProcessMainEffectSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoPostProcessMainEffectSO(void* ptr) noexcept : ::GlobalNamespace::MainEffectSO(ptr) {
}


  constexpr NoPostProcessMainEffectSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoPostProcessMainEffectSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoPostProcessMainEffectSO& operator=(NoPostProcessMainEffectSO&& o) noexcept = default;
  constexpr NoPostProcessMainEffectSO& operator=(NoPostProcessMainEffectSO const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Shader __declspec(property(get=__get__fadeShader, put=__set__fadeShader))  _fadeShader;

constexpr void __set__fadeShader(::UnityEngine::Shader value) ;

constexpr ::UnityEngine::Shader __get__fadeShader() const;

 float_t __declspec(property(get=__get__baseColorBoost, put=__set__baseColorBoost))  _baseColorBoost;

constexpr void __set__baseColorBoost(float_t value) ;

constexpr float_t __get__baseColorBoost() const;

 float_t __declspec(property(get=__get__baseColorBoostThreshold, put=__set__baseColorBoostThreshold))  _baseColorBoostThreshold;

constexpr void __set__baseColorBoostThreshold(float_t value) ;

constexpr float_t __get__baseColorBoostThreshold() const;

 ::UnityEngine::Material __declspec(property(get=__get__fadeMaterial, put=__set__fadeMaterial))  _fadeMaterial;

constexpr void __set__fadeMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__fadeMaterial() const;


// Properties

 bool __declspec(property(get=get_hasPostProcessEffect))  hasPostProcessEffect;


// Methods

/// @brief Method get_hasPostProcessEffect addr 0x26774bc size 0x8 virtual true final false
 bool get_hasPostProcessEffect() ;

/// @brief Method OnEnable addr 0x26774c4 size 0x80 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2677544 size 0xc virtual false final false
 void OnDisable() ;

/// @brief Method PreRender addr 0x2677550 size 0x64 virtual true final false
 void PreRender() ;

/// @brief Method PostRender addr 0x26775b4 size 0xc virtual true final false
 void PostRender(float_t fade) ;

/// @brief Method DrawFadeQuad addr 0x26775c0 size 0xec virtual false final false
 void DrawFadeQuad(float_t alpha) ;

// Ctor Parameters []
explicit NoPostProcessMainEffectSO() ;

/// @brief Method .ctor addr 0x26776ac size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NoPostProcessMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoPostProcessMainEffectSO, "", "NoPostProcessMainEffectSO");
