#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableRendererWithLightId;
}
// Type: ::EnableRendererWithLightId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14688))
// CS Name: EnableRendererWithLightId
class CORDL_TYPE EnableRendererWithLightId : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnableRendererWithLightId() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableRendererWithLightId", modifiers: " const&", def_value: None }]
constexpr EnableRendererWithLightId(EnableRendererWithLightId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableRendererWithLightId", modifiers: "&&", def_value: None }]
constexpr EnableRendererWithLightId(EnableRendererWithLightId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnableRendererWithLightId(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr EnableRendererWithLightId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnableRendererWithLightId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnableRendererWithLightId& operator=(EnableRendererWithLightId&& o) noexcept = default;
  constexpr EnableRendererWithLightId& operator=(EnableRendererWithLightId const& o) noexcept = default;
                


// Fields

 UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(UnityEngine::Renderer value) ;

constexpr UnityEngine::Renderer __get__renderer() const;

 float_t __declspec(property(get=__get__hideAlphaRangeMin, put=__set__hideAlphaRangeMin))  _hideAlphaRangeMin;

constexpr void __set__hideAlphaRangeMin(float_t value) ;

constexpr float_t __get__hideAlphaRangeMin() const;

 float_t __declspec(property(get=__get__hideAlphaRangeMax, put=__set__hideAlphaRangeMax))  _hideAlphaRangeMax;

constexpr void __set__hideAlphaRangeMax(float_t value) ;

constexpr float_t __get__hideAlphaRangeMax() const;


// Methods

/// @brief Method ColorWasSet addr 0x1f9ccf8 size 0x44 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

static GlobalNamespace::EnableRendererWithLightId New_ctor() ;

/// @brief Method .ctor addr 0x1f9cd3c size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnableRendererWithLightId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableRendererWithLightId, "", "EnableRendererWithLightId");
