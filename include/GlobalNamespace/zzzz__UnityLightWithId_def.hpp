#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityLightWithId;
}
// Type: ::UnityLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14720))
// CS Name: UnityLightWithId
class CORDL_TYPE UnityLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityLightWithId", modifiers: " const&", def_value: None }]
constexpr UnityLightWithId(UnityLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityLightWithId", modifiers: "&&", def_value: None }]
constexpr UnityLightWithId(UnityLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityLightWithId(void* ptr) noexcept : ::GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr UnityLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityLightWithId& operator=(UnityLightWithId&& o) noexcept = default;
  constexpr UnityLightWithId& operator=(UnityLightWithId const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Light __declspec(property(get=__get__light, put=__set__light))  _light;

constexpr void __set__light(::UnityEngine::Light value) ;

constexpr ::UnityEngine::Light __get__light() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__minAlpha, put=__set__minAlpha))  _minAlpha;

constexpr void __set__minAlpha(float_t value) ;

constexpr float_t __get__minAlpha() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x1fa1764 size 0x1c virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x1fa1780 size 0x4c virtual true final false
 void ColorWasSet(::UnityEngine::Color color) ;

// Ctor Parameters []
explicit UnityLightWithId() ;

/// @brief Method .ctor addr 0x1fa17cc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::UnityLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityLightWithId, "", "UnityLightWithId");
