#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
// Type: ::BloomPrePassLightTypeSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14637))
// CS Name: BloomPrePassLightTypeSO
class CORDL_TYPE BloomPrePassLightTypeSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BloomPrePassLightTypeSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightTypeSO", modifiers: " const&", def_value: None }]
constexpr BloomPrePassLightTypeSO(BloomPrePassLightTypeSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightTypeSO", modifiers: "&&", def_value: None }]
constexpr BloomPrePassLightTypeSO(BloomPrePassLightTypeSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassLightTypeSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BloomPrePassLightTypeSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassLightTypeSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassLightTypeSO& operator=(BloomPrePassLightTypeSO&& o) noexcept = default;
  constexpr BloomPrePassLightTypeSO& operator=(BloomPrePassLightTypeSO const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__renderingPriority, put=__set__renderingPriority))  _renderingPriority;

constexpr void __set__renderingPriority(int32_t value) ;

constexpr int32_t __get__renderingPriority() const;

 UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material() const;


// Properties

 int32_t __declspec(property(get=get_renderingPriority))  renderingPriority;

 UnityEngine::Material __declspec(property(get=get_material))  material;


// Methods

/// @brief Method get_renderingPriority addr 0x1f94eac size 0x8 virtual false final false
 int32_t get_renderingPriority() ;

/// @brief Method get_material addr 0x1f94eb4 size 0x8 virtual false final false
 UnityEngine::Material get_material() ;

static GlobalNamespace::BloomPrePassLightTypeSO New_ctor() ;

/// @brief Method .ctor addr 0x1f94ebc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassLightTypeSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLightTypeSO, "", "BloomPrePassLightTypeSO");
