#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class ColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SetTubeBloomPrePassLightColor;
}
// Type: ::SetTubeBloomPrePassLightColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5399))
// CS Name: SetTubeBloomPrePassLightColor
class CORDL_TYPE SetTubeBloomPrePassLightColor : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SetTubeBloomPrePassLightColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetTubeBloomPrePassLightColor", modifiers: " const&", def_value: None }]
constexpr SetTubeBloomPrePassLightColor(SetTubeBloomPrePassLightColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetTubeBloomPrePassLightColor", modifiers: "&&", def_value: None }]
constexpr SetTubeBloomPrePassLightColor(SetTubeBloomPrePassLightColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetTubeBloomPrePassLightColor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SetTubeBloomPrePassLightColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetTubeBloomPrePassLightColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetTubeBloomPrePassLightColor& operator=(SetTubeBloomPrePassLightColor&& o) noexcept = default;
  constexpr SetTubeBloomPrePassLightColor& operator=(SetTubeBloomPrePassLightColor const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSO __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__color() const;

 ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__tubeLights, put=__set__tubeLights))  _tubeLights;

constexpr void __set__tubeLights(::ArrayW<GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __get__tubeLights() const;


// Methods

/// @brief Method Start addr 0x210ce5c size 0x70 virtual false final false
 void Start() ;

static GlobalNamespace::SetTubeBloomPrePassLightColor New_ctor() ;

/// @brief Method .ctor addr 0x210cecc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SetTubeBloomPrePassLightColor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetTubeBloomPrePassLightColor, "", "SetTubeBloomPrePassLightColor");
