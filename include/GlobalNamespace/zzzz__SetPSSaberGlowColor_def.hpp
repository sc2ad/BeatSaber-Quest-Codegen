#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SetPSSaberGlowColor;
}
// Type: ::SetPSSaberGlowColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5393))
// CS Name: SetPSSaberGlowColor
class CORDL_TYPE SetPSSaberGlowColor : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SetPSSaberGlowColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetPSSaberGlowColor", modifiers: " const&", def_value: None }]
constexpr SetPSSaberGlowColor(SetPSSaberGlowColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetPSSaberGlowColor", modifiers: "&&", def_value: None }]
constexpr SetPSSaberGlowColor(SetPSSaberGlowColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetPSSaberGlowColor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SetPSSaberGlowColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetPSSaberGlowColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetPSSaberGlowColor& operator=(SetPSSaberGlowColor&& o) noexcept = default;
  constexpr SetPSSaberGlowColor& operator=(SetPSSaberGlowColor const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SaberTypeObject __declspec(property(get=__get__saber, put=__set__saber))  _saber;

constexpr void __set__saber(GlobalNamespace::SaberTypeObject value) ;

constexpr GlobalNamespace::SaberTypeObject __get__saber() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;


// Methods

/// @brief Method Start addr 0x210ca30 size 0x84 virtual false final false
 void Start() ;

static GlobalNamespace::SetPSSaberGlowColor New_ctor() ;

/// @brief Method .ctor addr 0x210cab4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SetPSSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetPSSaberGlowColor, "", "SetPSSaberGlowColor");
