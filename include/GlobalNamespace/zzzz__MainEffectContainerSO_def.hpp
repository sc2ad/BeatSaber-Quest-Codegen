#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace {
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class MainEffectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectContainerSO;
}
// Type: ::MainEffectContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15311))
// CS Name: MainEffectContainerSO
class CORDL_TYPE MainEffectContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MainEffectContainerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectContainerSO", modifiers: " const&", def_value: None }]
constexpr MainEffectContainerSO(MainEffectContainerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectContainerSO", modifiers: "&&", def_value: None }]
constexpr MainEffectContainerSO(MainEffectContainerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainEffectContainerSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MainEffectContainerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainEffectContainerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainEffectContainerSO& operator=(MainEffectContainerSO&& o) noexcept = default;
  constexpr MainEffectContainerSO& operator=(MainEffectContainerSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MainEffectSO __declspec(property(get=__get__mainEffect, put=__set__mainEffect))  _mainEffect;

constexpr void __set__mainEffect(::GlobalNamespace::MainEffectSO value) ;

constexpr ::GlobalNamespace::MainEffectSO __get__mainEffect() const;

 ::GlobalNamespace::BoolSO __declspec(property(get=__get__postProcessEnabled, put=__set__postProcessEnabled))  _postProcessEnabled;

constexpr void __set__postProcessEnabled(::GlobalNamespace::BoolSO value) ;

constexpr ::GlobalNamespace::BoolSO __get__postProcessEnabled() const;


// Properties

 ::GlobalNamespace::MainEffectSO __declspec(property(get=get_mainEffect))  mainEffect;


// Methods

/// @brief Method get_mainEffect addr 0x2676d80 size 0x8 virtual false final false
 ::GlobalNamespace::MainEffectSO get_mainEffect() ;

/// @brief Method OnEnable addr 0x2676d88 size 0x78 virtual true final false
 void OnEnable() ;

/// @brief Method Init addr 0x2676e00 size 0x74 virtual false final false
 void Init(::GlobalNamespace::MainEffectSO mainEffect) ;

// Ctor Parameters []
explicit MainEffectContainerSO() ;

/// @brief Method .ctor addr 0x2676e74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MainEffectContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectContainerSO, "", "MainEffectContainerSO");
