#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
// Type: ::BloomPrePassEffectContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14630))
// CS Name: BloomPrePassEffectContainerSO
class CORDL_TYPE BloomPrePassEffectContainerSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BloomPrePassEffectContainerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectContainerSO", modifiers: " const&", def_value: None }]
constexpr BloomPrePassEffectContainerSO(BloomPrePassEffectContainerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectContainerSO", modifiers: "&&", def_value: None }]
constexpr BloomPrePassEffectContainerSO(BloomPrePassEffectContainerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassEffectContainerSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BloomPrePassEffectContainerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassEffectContainerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassEffectContainerSO& operator=(BloomPrePassEffectContainerSO&& o) noexcept = default;
  constexpr BloomPrePassEffectContainerSO& operator=(BloomPrePassEffectContainerSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassEffectSO __declspec(property(get=__get__bloomPrePassEffect, put=__set__bloomPrePassEffect))  _bloomPrePassEffect;

constexpr void __set__bloomPrePassEffect(GlobalNamespace::BloomPrePassEffectSO value) ;

constexpr GlobalNamespace::BloomPrePassEffectSO __get__bloomPrePassEffect() const;


// Properties

 GlobalNamespace::BloomPrePassEffectSO __declspec(property(get=get_bloomPrePassEffect))  bloomPrePassEffect;


// Methods

/// @brief Method get_bloomPrePassEffect addr 0x1f94608 size 0x8 virtual false final false
 GlobalNamespace::BloomPrePassEffectSO get_bloomPrePassEffect() ;

/// @brief Method Init addr 0x1f94610 size 0x8 virtual false final false
 void Init(GlobalNamespace::BloomPrePassEffectSO bloomPrePassEffect) ;

// Ctor Parameters []
explicit BloomPrePassEffectContainerSO() ;

/// @brief Method .ctor addr 0x1f94618 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassEffectContainerSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassEffectContainerSO, "", "BloomPrePassEffectContainerSO");
