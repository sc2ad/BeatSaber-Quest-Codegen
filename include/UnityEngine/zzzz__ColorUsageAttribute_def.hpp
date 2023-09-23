#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine {
class ColorUsageAttribute;
}
// Type: UnityEngine::ColorUsageAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10122))
// CS Name: UnityEngine.ColorUsageAttribute
class CORDL_TYPE ColorUsageAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ColorUsageAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorUsageAttribute", modifiers: " const&", def_value: None }]
constexpr ColorUsageAttribute(ColorUsageAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorUsageAttribute", modifiers: "&&", def_value: None }]
constexpr ColorUsageAttribute(ColorUsageAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorUsageAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr ColorUsageAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorUsageAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorUsageAttribute& operator=(ColorUsageAttribute&& o) noexcept = default;
  constexpr ColorUsageAttribute& operator=(ColorUsageAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_showAlpha, put=__set_showAlpha))  showAlpha;

constexpr void __set_showAlpha(bool value) ;

constexpr bool __get_showAlpha() const;

 bool __declspec(property(get=__get_hdr, put=__set_hdr))  hdr;

constexpr void __set_hdr(bool value) ;

constexpr bool __get_hdr() const;

 float_t __declspec(property(get=__get_minBrightness, put=__set_minBrightness))  minBrightness;

constexpr void __set_minBrightness(float_t value) ;

constexpr float_t __get_minBrightness() const;

 float_t __declspec(property(get=__get_maxBrightness, put=__set_maxBrightness))  maxBrightness;

constexpr void __set_maxBrightness(float_t value) ;

constexpr float_t __get_maxBrightness() const;

 float_t __declspec(property(get=__get_minExposureValue, put=__set_minExposureValue))  minExposureValue;

constexpr void __set_minExposureValue(float_t value) ;

constexpr float_t __get_minExposureValue() const;

 float_t __declspec(property(get=__get_maxExposureValue, put=__set_maxExposureValue))  maxExposureValue;

constexpr void __set_maxExposureValue(float_t value) ;

constexpr float_t __get_maxExposureValue() const;


// Methods

// Ctor Parameters [CppParam { name: "showAlpha", ty: "bool", modifiers: "", def_value: None }]
explicit ColorUsageAttribute(bool showAlpha) ;

/// @brief Method .ctor addr 0x2b54f64 size 0x3c virtual false final false
 void _ctor(bool showAlpha) ;

// Ctor Parameters [CppParam { name: "showAlpha", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hdr", ty: "bool", modifiers: "", def_value: None }]
explicit ColorUsageAttribute(bool showAlpha, bool hdr) ;

/// @brief Method .ctor addr 0x2b54fa0 size 0x44 virtual false final false
 void _ctor(bool showAlpha, bool hdr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ColorUsageAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ColorUsageAttribute, "UnityEngine", "ColorUsageAttribute");
