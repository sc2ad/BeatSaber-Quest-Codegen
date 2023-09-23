#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class LightTranslationGroupEffect;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class LightTranslationGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationGroupEffectManager;
}
// Type: ::LightTranslationGroupEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5048))
// CS Name: LightTranslationGroupEffectManager
class CORDL_TYPE LightTranslationGroupEffectManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LightTranslationGroupEffectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffectManager", modifiers: " const&", def_value: None }]
constexpr LightTranslationGroupEffectManager(LightTranslationGroupEffectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffectManager", modifiers: "&&", def_value: None }]
constexpr LightTranslationGroupEffectManager(LightTranslationGroupEffectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightTranslationGroupEffectManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightTranslationGroupEffectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightTranslationGroupEffectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightTranslationGroupEffectManager& operator=(LightTranslationGroupEffectManager&& o) noexcept = default;
  constexpr LightTranslationGroupEffectManager& operator=(LightTranslationGroupEffectManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::LightTranslationGroup> __declspec(property(get=__get__lightTranslationGroups, put=__set__lightTranslationGroups))  _lightTranslationGroups;

constexpr void __set__lightTranslationGroups(::ArrayW<GlobalNamespace::LightTranslationGroup> value) ;

constexpr ::ArrayW<GlobalNamespace::LightTranslationGroup> __get__lightTranslationGroups() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Collections::Generic::List_1<GlobalNamespace::LightTranslationGroupEffect> __declspec(property(get=__get__lightTranslationGroupEffects, put=__set__lightTranslationGroupEffects))  _lightTranslationGroupEffects;

constexpr void __set__lightTranslationGroupEffects(System::Collections::Generic::List_1<GlobalNamespace::LightTranslationGroupEffect> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::LightTranslationGroupEffect> __get__lightTranslationGroupEffects() const;


// Methods

/// @brief Method Start addr 0x2260978 size 0x3f4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2260d6c size 0x148 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit LightTranslationGroupEffectManager() ;

/// @brief Method .ctor addr 0x2260eb4 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightTranslationGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightTranslationGroupEffectManager, "", "LightTranslationGroupEffectManager");
