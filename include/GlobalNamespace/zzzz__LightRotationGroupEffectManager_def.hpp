#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class LightRotationGroup;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class LightRotationGroupEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationGroupEffectManager;
}
// Type: ::LightRotationGroupEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5042))
// CS Name: LightRotationGroupEffectManager
class CORDL_TYPE LightRotationGroupEffectManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LightRotationGroupEffectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffectManager", modifiers: " const&", def_value: None }]
constexpr LightRotationGroupEffectManager(LightRotationGroupEffectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffectManager", modifiers: "&&", def_value: None }]
constexpr LightRotationGroupEffectManager(LightRotationGroupEffectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightRotationGroupEffectManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightRotationGroupEffectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightRotationGroupEffectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightRotationGroupEffectManager& operator=(LightRotationGroupEffectManager&& o) noexcept = default;
  constexpr LightRotationGroupEffectManager& operator=(LightRotationGroupEffectManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::LightRotationGroup> __declspec(property(get=__get__lightRotationGroups, put=__set__lightRotationGroups))  _lightRotationGroups;

constexpr void __set__lightRotationGroups(::ArrayW<GlobalNamespace::LightRotationGroup> value) ;

constexpr ::ArrayW<GlobalNamespace::LightRotationGroup> __get__lightRotationGroups() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Collections::Generic::List_1<GlobalNamespace::LightRotationGroupEffect> __declspec(property(get=__get__lightRotationGroupEffects, put=__set__lightRotationGroupEffects))  _lightRotationGroupEffects;

constexpr void __set__lightRotationGroupEffects(System::Collections::Generic::List_1<GlobalNamespace::LightRotationGroupEffect> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::LightRotationGroupEffect> __get__lightRotationGroupEffects() const;


// Methods

/// @brief Method Start addr 0x225eeb4 size 0x564 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x225f418 size 0x148 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit LightRotationGroupEffectManager() ;

/// @brief Method .ctor addr 0x225f560 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightRotationGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightRotationGroupEffectManager, "", "LightRotationGroupEffectManager");
