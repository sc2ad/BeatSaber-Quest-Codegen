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
class HSVColor;
}
// Type: UnityEngine.ProBuilder::HSVColor
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12055))
// CS Name: UnityEngine.ProBuilder.HSVColor
class CORDL_TYPE HSVColor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HSVColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "HSVColor", modifiers: " const&", def_value: None }]
constexpr HSVColor(HSVColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HSVColor", modifiers: "&&", def_value: None }]
constexpr HSVColor(HSVColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HSVColor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HSVColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HSVColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HSVColor& operator=(HSVColor&& o) noexcept = default;
  constexpr HSVColor& operator=(HSVColor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(float_t value) ;

constexpr float_t __get_h() const;

 float_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(float_t value) ;

constexpr float_t __get_s() const;

 float_t __declspec(property(get=__get_v, put=__set_v))  v;

constexpr void __set_v(float_t value) ;

constexpr float_t __get_v() const;


// Methods

static UnityEngine::ProBuilder::HSVColor New_ctor(float_t h, float_t s, float_t v) ;

/// @brief Method .ctor addr 0x29a98a4 size 0x3c virtual false final false
 void _ctor(float_t h, float_t s, float_t v) ;

static UnityEngine::ProBuilder::HSVColor New_ctor(float_t h, float_t s, float_t v, float_t sv_modifier) ;

/// @brief Method .ctor addr 0x29a98e0 size 0x48 virtual false final false
 void _ctor(float_t h, float_t s, float_t v, float_t sv_modifier) ;

/// @brief Method FromRGB addr 0x29a9928 size 0x7c virtual false final false
static UnityEngine::ProBuilder::HSVColor FromRGB(UnityEngine::Color col) ;

/// @brief Method ToString addr 0x29a9bc4 size 0xc4 virtual true final false
 ::StringW ToString() ;

/// @brief Method SqrDistance addr 0x29a9c88 size 0x48 virtual false final false
 float_t SqrDistance(UnityEngine::ProBuilder::HSVColor InColor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::HSVColor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HSVColor, "UnityEngine.ProBuilder", "HSVColor");
