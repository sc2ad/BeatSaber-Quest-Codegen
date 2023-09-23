#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class DirectionalLight;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithId;
}
// Type: ::DirectionalLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14681))
// CS Name: DirectionalLightWithId
class CORDL_TYPE DirectionalLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DirectionalLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithId", modifiers: " const&", def_value: None }]
constexpr DirectionalLightWithId(DirectionalLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithId", modifiers: "&&", def_value: None }]
constexpr DirectionalLightWithId(DirectionalLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectionalLightWithId(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr DirectionalLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectionalLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectionalLightWithId& operator=(DirectionalLightWithId&& o) noexcept = default;
  constexpr DirectionalLightWithId& operator=(DirectionalLightWithId const& o) noexcept = default;
                


// Fields

 GlobalNamespace::DirectionalLight __declspec(property(get=__get__light, put=__set__light))  _light;

constexpr void __set__light(GlobalNamespace::DirectionalLight value) ;

constexpr GlobalNamespace::DirectionalLight __get__light() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__minIntensity, put=__set__minIntensity))  _minIntensity;

constexpr void __set__minIntensity(float_t value) ;

constexpr float_t __get__minIntensity() const;


// Methods

/// @brief Method ColorWasSet addr 0x1f9cb8c size 0x34 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

// Ctor Parameters []
explicit DirectionalLightWithId() ;

/// @brief Method .ctor addr 0x1f9cbc0 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DirectionalLightWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLightWithId, "", "DirectionalLightWithId");
