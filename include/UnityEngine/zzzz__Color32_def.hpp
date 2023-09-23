#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct Color32;
}
// Type: UnityEngine::Color32
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10191))
// CS Name: UnityEngine.Color32
struct CORDL_TYPE Color32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "rgba", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "r", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Color32(int32_t rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a) noexcept;


                    constexpr Color32(Color32 const&) = default;
                    constexpr Color32(Color32&&) = default;
                    constexpr Color32& operator=(Color32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Color32& operator=(Color32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Color32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_rgba, put=__set_rgba))  rgba;

constexpr void __set_rgba(int32_t value) ;

constexpr int32_t __get_rgba() const;

 uint8_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(uint8_t value) ;

constexpr uint8_t __get_r() const;

 uint8_t __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(uint8_t value) ;

constexpr uint8_t __get_g() const;

 uint8_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(uint8_t value) ;

constexpr uint8_t __get_b() const;

 uint8_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(uint8_t value) ;

constexpr uint8_t __get_a() const;


// Methods

/// @brief Method .ctor addr 0x2b63b38 size 0x14 virtual false final false
 void _ctor(uint8_t r, uint8_t g, uint8_t b, uint8_t a) ;

/// @brief Method op_Implicit addr 0x2b63b4c size 0x2c4 virtual false final false
static UnityEngine::Color32 op_Implicit_UnityEngine__Color32(UnityEngine::Color c) ;

/// @brief Method op_Implicit addr 0x2b63e10 size 0x3c virtual false final false
static UnityEngine::Color op_Implicit_UnityEngine__Color(UnityEngine::Color32 c) ;

/// @brief Method Lerp addr 0x2b63e4c size 0xdc virtual false final false
static UnityEngine::Color32 Lerp(UnityEngine::Color32 a, UnityEngine::Color32 b, float_t t) ;

/// @brief Method ToString addr 0x2b63f28 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b63f34 size 0x1dc virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Color32, "UnityEngine", "Color32");
