#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct Color;
}
// Type: UnityEngine::Color
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10192))
// CS Name: UnityEngine.Color
struct CORDL_TYPE Color : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Color>
constexpr operator  System::IEquatable_1<UnityEngine::Color>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }]
constexpr Color(float_t r, float_t g, float_t b, float_t a) noexcept;


                    constexpr Color(Color const&) = default;
                    constexpr Color(Color&&) = default;
                    constexpr Color& operator=(Color const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Color& operator=(Color&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Color(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(float_t value) ;

constexpr float_t __get_r() const;

 float_t __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(float_t value) ;

constexpr float_t __get_g() const;

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;

 float_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(float_t value) ;

constexpr float_t __get_a() const;


// Properties

static UnityEngine::Color __declspec(property(get=get_red))  red;

static UnityEngine::Color __declspec(property(get=get_green))  green;

static UnityEngine::Color __declspec(property(get=get_blue))  blue;

static UnityEngine::Color __declspec(property(get=get_white))  white;

static UnityEngine::Color __declspec(property(get=get_black))  black;

static UnityEngine::Color __declspec(property(get=get_yellow))  yellow;

static UnityEngine::Color __declspec(property(get=get_cyan))  cyan;

static UnityEngine::Color __declspec(property(get=get_magenta))  magenta;

static UnityEngine::Color __declspec(property(get=get_gray))  gray;

static UnityEngine::Color __declspec(property(get=get_grey))  grey;

static UnityEngine::Color __declspec(property(get=get_clear))  clear;

 float_t __declspec(property(get=get_grayscale))  grayscale;

 UnityEngine::Color __declspec(property(get=get_linear))  linear;

 float_t __declspec(property(get=get_maxColorComponent))  maxColorComponent;

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x2b64110 size 0xc virtual false final false
 void _ctor(float_t r, float_t g, float_t b, float_t a) ;

/// @brief Method .ctor addr 0x2b6411c size 0x14 virtual false final false
 void _ctor(float_t r, float_t g, float_t b) ;

/// @brief Method ToString addr 0x2b64130 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b64344 size 0x8 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2b6413c size 0x208 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method GetHashCode addr 0x2b6434c size 0x84 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b643d0 size 0xd4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b644a4 size 0x80 virtual true final true
 bool Equals(UnityEngine::Color other) ;

/// @brief Method op_Addition addr 0x2b64524 size 0x14 virtual false final false
static UnityEngine::Color op_Addition(UnityEngine::Color a, UnityEngine::Color b) ;

/// @brief Method op_Subtraction addr 0x2b64538 size 0x14 virtual false final false
static UnityEngine::Color op_Subtraction(UnityEngine::Color a, UnityEngine::Color b) ;

/// @brief Method op_Multiply addr 0x2b6454c size 0x14 virtual false final false
static UnityEngine::Color op_Multiply(UnityEngine::Color a, UnityEngine::Color b) ;

/// @brief Method op_Multiply addr 0x2b64560 size 0x14 virtual false final false
static UnityEngine::Color op_Multiply(UnityEngine::Color a, float_t b) ;

/// @brief Method op_Multiply addr 0x2b64574 size 0x18 virtual false final false
static UnityEngine::Color op_Multiply(float_t b, UnityEngine::Color a) ;

/// @brief Method op_Division addr 0x2b6458c size 0x14 virtual false final false
static UnityEngine::Color op_Division(UnityEngine::Color a, float_t b) ;

/// @brief Method op_Equality addr 0x2b645a0 size 0x40 virtual false final false
static bool op_Equality(UnityEngine::Color lhs, UnityEngine::Color rhs) ;

/// @brief Method op_Inequality addr 0x2b645e0 size 0x40 virtual false final false
static bool op_Inequality(UnityEngine::Color lhs, UnityEngine::Color rhs) ;

/// @brief Method Lerp addr 0x2b64620 size 0x4c virtual false final false
static UnityEngine::Color Lerp(UnityEngine::Color a, UnityEngine::Color b, float_t t) ;

/// @brief Method LerpUnclamped addr 0x2b6466c size 0x38 virtual false final false
static UnityEngine::Color LerpUnclamped(UnityEngine::Color a, UnityEngine::Color b, float_t t) ;

/// @brief Method RGBMultiplied addr 0x2b646a4 size 0x1c virtual false final false
 UnityEngine::Color RGBMultiplied(float_t multiplier) ;

/// @brief Method get_red addr 0x2b646c0 size 0x14 virtual false final false
static UnityEngine::Color get_red() ;

/// @brief Method get_green addr 0x2b646d4 size 0x14 virtual false final false
static UnityEngine::Color get_green() ;

/// @brief Method get_blue addr 0x2b646e8 size 0x14 virtual false final false
static UnityEngine::Color get_blue() ;

/// @brief Method get_white addr 0x2b646fc size 0x14 virtual false final false
static UnityEngine::Color get_white() ;

/// @brief Method get_black addr 0x2b64710 size 0x14 virtual false final false
static UnityEngine::Color get_black() ;

/// @brief Method get_yellow addr 0x2b64724 size 0x1c virtual false final false
static UnityEngine::Color get_yellow() ;

/// @brief Method get_cyan addr 0x2b64740 size 0x14 virtual false final false
static UnityEngine::Color get_cyan() ;

/// @brief Method get_magenta addr 0x2b64754 size 0x14 virtual false final false
static UnityEngine::Color get_magenta() ;

/// @brief Method get_gray addr 0x2b64768 size 0x14 virtual false final false
static UnityEngine::Color get_gray() ;

/// @brief Method get_grey addr 0x2b6477c size 0x14 virtual false final false
static UnityEngine::Color get_grey() ;

/// @brief Method get_clear addr 0x2b64790 size 0x14 virtual false final false
static UnityEngine::Color get_clear() ;

/// @brief Method get_grayscale addr 0x2b647a4 size 0x38 virtual false final false
 float_t get_grayscale() ;

/// @brief Method get_linear addr 0x2b647dc size 0xb0 virtual false final false
 UnityEngine::Color get_linear() ;

/// @brief Method get_maxColorComponent addr 0x2b648c4 size 0x1c virtual false final false
 float_t get_maxColorComponent() ;

/// @brief Method op_Implicit addr 0x2b648e0 size 0x4 virtual false final false
static UnityEngine::Vector4 op_Implicit_UnityEngine__Vector4(UnityEngine::Color c) ;

/// @brief Method op_Implicit addr 0x2b648e4 size 0x4 virtual false final false
static UnityEngine::Color op_Implicit_UnityEngine__Color(UnityEngine::Vector4 v) ;

/// @brief Method get_Item addr 0x2b648e8 size 0xd8 virtual false final false
 float_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2b649c0 size 0xd8 virtual false final false
 void set_Item(int32_t index, float_t value) ;

/// @brief Method RGBToHSV addr 0x2b64a98 size 0x114 virtual false final false
static void RGBToHSV(UnityEngine::Color rgbColor, ByRef<float_t> H, ByRef<float_t> S, ByRef<float_t> V) ;

/// @brief Method RGBToHSVHelper addr 0x2b64bac size 0x70 virtual false final false
static void RGBToHSVHelper(float_t offset, float_t dominantcolor, float_t colorone, float_t colortwo, ByRef<float_t> H, ByRef<float_t> S, ByRef<float_t> V) ;

/// @brief Method HSVToRGB addr 0x2b64c1c size 0x8 virtual false final false
static UnityEngine::Color HSVToRGB(float_t H, float_t S, float_t V) ;

/// @brief Method HSVToRGB addr 0x2b64c24 size 0x14c virtual false final false
static UnityEngine::Color HSVToRGB(float_t H, float_t S, float_t V, bool hdr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Color, "UnityEngine", "Color");
