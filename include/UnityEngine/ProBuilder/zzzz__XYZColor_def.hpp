#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class XYZColor;
}
// Type: UnityEngine.ProBuilder::XYZColor
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12056))
// CS Name: UnityEngine.ProBuilder.XYZColor
class CORDL_TYPE XYZColor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XYZColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "XYZColor", modifiers: " const&", def_value: None }]
constexpr XYZColor(XYZColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XYZColor", modifiers: "&&", def_value: None }]
constexpr XYZColor(XYZColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XYZColor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XYZColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XYZColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XYZColor& operator=(XYZColor&& o) noexcept = default;
  constexpr XYZColor& operator=(XYZColor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(float_t value) ;

constexpr float_t __get_z() const;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
explicit XYZColor(float_t x, float_t y, float_t z) ;

/// @brief Method .ctor addr 0x29a9cd0 size 0x3c virtual false final false
 void _ctor(float_t x, float_t y, float_t z) ;

/// @brief Method FromRGB addr 0x29a9d0c size 0x7c virtual false final false
static UnityEngine::ProBuilder::XYZColor FromRGB(UnityEngine::Color col) ;

/// @brief Method FromRGB addr 0x29a9dfc size 0x74 virtual false final false
static UnityEngine::ProBuilder::XYZColor FromRGB(float_t R, float_t G, float_t B) ;

/// @brief Method ToString addr 0x29aa00c size 0xc4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::XYZColor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::XYZColor, "UnityEngine.ProBuilder", "XYZColor");
