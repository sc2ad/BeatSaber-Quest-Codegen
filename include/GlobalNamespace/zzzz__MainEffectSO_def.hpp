#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectSO;
}
// Type: ::MainEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15314))
// CS Name: MainEffectSO
class CORDL_TYPE MainEffectSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MainEffectSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectSO", modifiers: " const&", def_value: None }]
constexpr MainEffectSO(MainEffectSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectSO", modifiers: "&&", def_value: None }]
constexpr MainEffectSO(MainEffectSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainEffectSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MainEffectSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainEffectSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainEffectSO& operator=(MainEffectSO&& o) noexcept = default;
  constexpr MainEffectSO& operator=(MainEffectSO const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_hasPostProcessEffect))  hasPostProcessEffect;


// Methods

/// @brief Method PreRender addr 0x26774a8 size 0x4 virtual true final false
 void PreRender() ;

/// @brief Method Render addr 0x26774ac size 0x4 virtual true final false
 void Render(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, float_t fade) ;

/// @brief Method PostRender addr 0x26774b0 size 0x4 virtual true final false
 void PostRender(float_t fade) ;

/// @brief Method get_hasPostProcessEffect addr 0x26774b4 size 0x8 virtual true final false
 bool get_hasPostProcessEffect() ;

static GlobalNamespace::MainEffectSO New_ctor() ;

/// @brief Method .ctor addr 0x2676cb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectSO, "", "MainEffectSO");
