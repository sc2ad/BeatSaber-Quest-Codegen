#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class GaussianSeparableBlurRendererSO;
}
// Type: ::GaussianSeparableBlurRendererSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14660))
// CS Name: GaussianSeparableBlurRendererSO
class CORDL_TYPE GaussianSeparableBlurRendererSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GaussianSeparableBlurRendererSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "GaussianSeparableBlurRendererSO", modifiers: " const&", def_value: None }]
constexpr GaussianSeparableBlurRendererSO(GaussianSeparableBlurRendererSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GaussianSeparableBlurRendererSO", modifiers: "&&", def_value: None }]
constexpr GaussianSeparableBlurRendererSO(GaussianSeparableBlurRendererSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GaussianSeparableBlurRendererSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr GaussianSeparableBlurRendererSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GaussianSeparableBlurRendererSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GaussianSeparableBlurRendererSO& operator=(GaussianSeparableBlurRendererSO&& o) noexcept = default;
  constexpr GaussianSeparableBlurRendererSO& operator=(GaussianSeparableBlurRendererSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GaussianSeparableBlurRendererSO() ;

/// @brief Method .ctor addr 0x1f99d98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GaussianSeparableBlurRendererSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GaussianSeparableBlurRendererSO, "", "GaussianSeparableBlurRendererSO");
