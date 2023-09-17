#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class BufferedLightColorGroupEffect;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedLightColorGroupEffectManager;
}
// Type: ::BufferedLightColorGroupEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5017))
// CS Name: BufferedLightColorGroupEffectManager
class CORDL_TYPE BufferedLightColorGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BufferedLightColorGroupEffectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffectManager", modifiers: " const&", def_value: None }]
constexpr BufferedLightColorGroupEffectManager(BufferedLightColorGroupEffectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedLightColorGroupEffectManager", modifiers: "&&", def_value: None }]
constexpr BufferedLightColorGroupEffectManager(BufferedLightColorGroupEffectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedLightColorGroupEffectManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BufferedLightColorGroupEffectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedLightColorGroupEffectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedLightColorGroupEffectManager& operator=(BufferedLightColorGroupEffectManager&& o) noexcept = default;
  constexpr BufferedLightColorGroupEffectManager& operator=(BufferedLightColorGroupEffectManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::LightGroup> __declspec(property(get=__get__lightGroups, put=__set__lightGroups))  _lightGroups;

constexpr void __set__lightGroups(::ArrayW<::GlobalNamespace::LightGroup> value) ;

constexpr ::ArrayW<::GlobalNamespace::LightGroup> __get__lightGroups() const;

 ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController> __declspec(property(get=__get__materialPropertyBlockControllers, put=__set__materialPropertyBlockControllers))  _materialPropertyBlockControllers;

constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController> value) ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController> __get__materialPropertyBlockControllers() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect> __declspec(property(get=__get__bufferedLightColorGroupEffects, put=__set__bufferedLightColorGroupEffects))  _bufferedLightColorGroupEffects;

constexpr void __set__bufferedLightColorGroupEffects(::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect> value) ;

constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect> __get__bufferedLightColorGroupEffects() const;


// Methods

/// @brief Method Start addr 0x225c9c8 size 0x1b8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x225cb80 size 0x5c virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit BufferedLightColorGroupEffectManager() ;

/// @brief Method .ctor addr 0x225cbdc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BufferedLightColorGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BufferedLightColorGroupEffectManager, "", "BufferedLightColorGroupEffectManager");
