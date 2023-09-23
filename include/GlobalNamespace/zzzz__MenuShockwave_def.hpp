#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class ParticleSystem;
}
namespace VRUIControls {
class VRPointer;
}
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuShockwave;
}
// Type: ::MenuShockwave
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5580))
// CS Name: MenuShockwave
class CORDL_TYPE MenuShockwave : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~MenuShockwave() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuShockwave", modifiers: " const&", def_value: None }]
constexpr MenuShockwave(MenuShockwave const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuShockwave", modifiers: "&&", def_value: None }]
constexpr MenuShockwave(MenuShockwave&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuShockwave(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MenuShockwave& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuShockwave& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuShockwave& operator=(MenuShockwave&& o) noexcept = default;
  constexpr MenuShockwave& operator=(MenuShockwave const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__shockwavePS, put=__set__shockwavePS))  _shockwavePS;

constexpr void __set__shockwavePS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__shockwavePS() const;

 VRUIControls::VRPointer __declspec(property(get=__get__vrPointer, put=__set__vrPointer))  _vrPointer;

constexpr void __set__vrPointer(VRUIControls::VRPointer value) ;

constexpr VRUIControls::VRPointer __get__vrPointer() const;

 ::ArrayW<GlobalNamespace::Signal> __declspec(property(get=__get__buttonClickEvents, put=__set__buttonClickEvents))  _buttonClickEvents;

constexpr void __set__buttonClickEvents(::ArrayW<GlobalNamespace::Signal> value) ;

constexpr ::ArrayW<GlobalNamespace::Signal> __get__buttonClickEvents() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__shockwavePSEmitParams, put=__set__shockwavePSEmitParams))  _shockwavePSEmitParams;

constexpr void __set__shockwavePSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__shockwavePSEmitParams() const;


// Methods

/// @brief Method Awake addr 0x212f848 size 0x10 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x212f858 size 0xd4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x212f92c size 0xd4 virtual false final false
 void OnDisable() ;

/// @brief Method HandleButtonClickEvent addr 0x212fa00 size 0x28 virtual false final false
 void HandleButtonClickEvent() ;

/// @brief Method SpawnShockwave addr 0x212fa28 size 0xa4 virtual false final false
 void SpawnShockwave(UnityEngine::Vector3 pos) ;

// Ctor Parameters []
explicit MenuShockwave() ;

/// @brief Method .ctor addr 0x212facc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MenuShockwave);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuShockwave, "", "MenuShockwave");
