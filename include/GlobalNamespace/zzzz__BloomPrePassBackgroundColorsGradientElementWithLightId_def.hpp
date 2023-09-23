#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientElementWithLightId;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;
}
// Type: ::Elements
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14673))
// CS Name: BloomPrePassBackgroundColorsGradientElementWithLightId::Elements
class CORDL_TYPE GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements& operator=(GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements&& o) noexcept = default;
  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements& operator=(GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_elementNumber, put=__set_elementNumber))  elementNumber;

constexpr void __set_elementNumber(int32_t value) ;

constexpr int32_t __get_elementNumber() const;

 float_t __declspec(property(get=__get_intensity, put=__set_intensity))  intensity;

constexpr void __set_intensity(float_t value) ;

constexpr float_t __get_intensity() const;

 float_t __declspec(property(get=__get_minIntensity, put=__set_minIntensity))  minIntensity;

constexpr void __set_minIntensity(float_t value) ;

constexpr float_t __get_minIntensity() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements() ;

/// @brief Method .ctor addr 0x1f9c4dc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradientElementWithLightId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14674))
// CS Name: BloomPrePassBackgroundColorsGradientElementWithLightId
class CORDL_TYPE BloomPrePassBackgroundColorsGradientElementWithLightId : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using Elements = GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BloomPrePassBackgroundColorsGradientElementWithLightId() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientElementWithLightId", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradientElementWithLightId(BloomPrePassBackgroundColorsGradientElementWithLightId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientElementWithLightId", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradientElementWithLightId(BloomPrePassBackgroundColorsGradientElementWithLightId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundColorsGradientElementWithLightId(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr BloomPrePassBackgroundColorsGradientElementWithLightId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradientElementWithLightId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradientElementWithLightId& operator=(BloomPrePassBackgroundColorsGradientElementWithLightId&& o) noexcept = default;
  constexpr BloomPrePassBackgroundColorsGradientElementWithLightId& operator=(BloomPrePassBackgroundColorsGradientElementWithLightId const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassBackgroundColorsGradient __declspec(property(get=__get__bloomPrePassBackgroundColorsGradient, put=__set__bloomPrePassBackgroundColorsGradient))  _bloomPrePassBackgroundColorsGradient;

constexpr void __set__bloomPrePassBackgroundColorsGradient(GlobalNamespace::BloomPrePassBackgroundColorsGradient value) ;

constexpr GlobalNamespace::BloomPrePassBackgroundColorsGradient __get__bloomPrePassBackgroundColorsGradient() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements> __declspec(property(get=__get__elements, put=__set__elements))  _elements;

constexpr void __set__elements(::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements> __get__elements() const;


// Methods

/// @brief Method ColorWasSet addr 0x1f9c410 size 0xac virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

// Ctor Parameters []
explicit BloomPrePassBackgroundColorsGradientElementWithLightId() ;

/// @brief Method .ctor addr 0x1f9c4bc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradientElementWithLightId, "", "BloomPrePassBackgroundColorsGradientElementWithLightId");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradientElementWithLightId__Elements, "", "BloomPrePassBackgroundColorsGradientElementWithLightId/Elements");
