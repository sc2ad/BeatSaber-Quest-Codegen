#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class WhiteColorOrAlphaGroupEffect;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class WhiteColorOrAlphaGroupEffectManager;
}
// Type: ::WhiteColorOrAlphaGroupEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5026))
// CS Name: WhiteColorOrAlphaGroupEffectManager
class CORDL_TYPE WhiteColorOrAlphaGroupEffectManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~WhiteColorOrAlphaGroupEffectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffectManager", modifiers: " const&", def_value: None }]
constexpr WhiteColorOrAlphaGroupEffectManager(WhiteColorOrAlphaGroupEffectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffectManager", modifiers: "&&", def_value: None }]
constexpr WhiteColorOrAlphaGroupEffectManager(WhiteColorOrAlphaGroupEffectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WhiteColorOrAlphaGroupEffectManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr WhiteColorOrAlphaGroupEffectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WhiteColorOrAlphaGroupEffectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WhiteColorOrAlphaGroupEffectManager& operator=(WhiteColorOrAlphaGroupEffectManager&& o) noexcept = default;
  constexpr WhiteColorOrAlphaGroupEffectManager& operator=(WhiteColorOrAlphaGroupEffectManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::LightGroup> __declspec(property(get=__get__lightGroup, put=__set__lightGroup))  _lightGroup;

constexpr void __set__lightGroup(::ArrayW<GlobalNamespace::LightGroup> value) ;

constexpr ::ArrayW<GlobalNamespace::LightGroup> __get__lightGroup() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Collections::Generic::List_1<GlobalNamespace::WhiteColorOrAlphaGroupEffect> __declspec(property(get=__get__whiteColorOrAlphaEffects, put=__set__whiteColorOrAlphaEffects))  _whiteColorOrAlphaEffects;

constexpr void __set__whiteColorOrAlphaEffects(System::Collections::Generic::List_1<GlobalNamespace::WhiteColorOrAlphaGroupEffect> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::WhiteColorOrAlphaGroupEffect> __get__whiteColorOrAlphaEffects() const;


// Methods

/// @brief Method Start addr 0x225e15c size 0x280 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x225e3dc size 0x148 virtual false final false
 void OnDestroy() ;

static GlobalNamespace::WhiteColorOrAlphaGroupEffectManager New_ctor() ;

/// @brief Method .ctor addr 0x225e524 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::WhiteColorOrAlphaGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, "", "WhiteColorOrAlphaGroupEffectManager");
