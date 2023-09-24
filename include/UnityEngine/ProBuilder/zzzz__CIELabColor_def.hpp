#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::ProBuilder {
class XYZColor;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class CIELabColor;
}
// Type: UnityEngine.ProBuilder::CIELabColor
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12057))
// CS Name: UnityEngine.ProBuilder.CIELabColor
class CORDL_TYPE CIELabColor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CIELabColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "CIELabColor", modifiers: " const&", def_value: None }]
constexpr CIELabColor(CIELabColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CIELabColor", modifiers: "&&", def_value: None }]
constexpr CIELabColor(CIELabColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CIELabColor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CIELabColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CIELabColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CIELabColor& operator=(CIELabColor&& o) noexcept = default;
  constexpr CIELabColor& operator=(CIELabColor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_L, put=__set_L))  L;

constexpr void __set_L(float_t value) ;

constexpr float_t __get_L() const;

 float_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(float_t value) ;

constexpr float_t __get_a() const;

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;


// Methods

static UnityEngine::ProBuilder::CIELabColor New_ctor(float_t L, float_t a, float_t b) ;

/// @brief Method .ctor addr 0x29aa0d0 size 0x3c virtual false final false
 void _ctor(float_t L, float_t a, float_t b) ;

/// @brief Method FromXYZ addr 0x29aa10c size 0x54 virtual false final false
static UnityEngine::ProBuilder::CIELabColor FromXYZ(UnityEngine::ProBuilder::XYZColor xyz) ;

/// @brief Method FromRGB addr 0x29aa2c4 size 0x8c virtual false final false
static UnityEngine::ProBuilder::CIELabColor FromRGB(UnityEngine::Color col) ;

/// @brief Method ToString addr 0x29aa350 size 0xc4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::CIELabColor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::CIELabColor, "UnityEngine.ProBuilder", "CIELabColor");
