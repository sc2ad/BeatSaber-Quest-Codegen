#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class BlocksBlade;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SetBlocksBladeSaberGlowColor;
}
// Type: ::SetBlocksBladeSaberGlowColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5392))
// CS Name: SetBlocksBladeSaberGlowColor
class CORDL_TYPE SetBlocksBladeSaberGlowColor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SetBlocksBladeSaberGlowColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetBlocksBladeSaberGlowColor", modifiers: " const&", def_value: None }]
constexpr SetBlocksBladeSaberGlowColor(SetBlocksBladeSaberGlowColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetBlocksBladeSaberGlowColor", modifiers: "&&", def_value: None }]
constexpr SetBlocksBladeSaberGlowColor(SetBlocksBladeSaberGlowColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetBlocksBladeSaberGlowColor(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SetBlocksBladeSaberGlowColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetBlocksBladeSaberGlowColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetBlocksBladeSaberGlowColor& operator=(SetBlocksBladeSaberGlowColor&& o) noexcept = default;
  constexpr SetBlocksBladeSaberGlowColor& operator=(SetBlocksBladeSaberGlowColor const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::SaberTypeObject __declspec(property(get=__get__saber, put=__set__saber))  _saber;

constexpr void __set__saber(::GlobalNamespace::SaberTypeObject value) ;

constexpr ::GlobalNamespace::SaberTypeObject __get__saber() const;

 ::GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager value) ;

constexpr ::GlobalNamespace::ColorManager __get__colorManager() const;

 ::GlobalNamespace::BlocksBlade __declspec(property(get=__get__blocksBlade, put=__set__blocksBlade))  _blocksBlade;

constexpr void __set__blocksBlade(::GlobalNamespace::BlocksBlade value) ;

constexpr ::GlobalNamespace::BlocksBlade __get__blocksBlade() const;


// Methods

/// @brief Method Start addr 0x210c9e8 size 0x40 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit SetBlocksBladeSaberGlowColor() ;

/// @brief Method .ctor addr 0x210ca28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SetBlocksBladeSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetBlocksBladeSaberGlowColor, "", "SetBlocksBladeSaberGlowColor");
