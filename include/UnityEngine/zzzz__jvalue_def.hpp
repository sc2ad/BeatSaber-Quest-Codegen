#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct jvalue;
}
// Type: UnityEngine::jvalue
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14885))
// CS Name: UnityEngine.jvalue
struct CORDL_TYPE jvalue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "z", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "b", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "c", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "s", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "j", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "l", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr jvalue(bool z, int8_t b, char16_t c, int16_t s, int32_t i, int64_t j, float_t f, double_t d, ::cordl_internals::intptr_t l) noexcept;


                    constexpr jvalue(jvalue const&) = default;
                    constexpr jvalue(jvalue&&) = default;
                    constexpr jvalue& operator=(jvalue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr jvalue& operator=(jvalue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit jvalue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(bool value) ;

constexpr bool __get_z() const;

 int8_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(int8_t value) ;

constexpr int8_t __get_b() const;

 char16_t __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(char16_t value) ;

constexpr char16_t __get_c() const;

 int16_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(int16_t value) ;

constexpr int16_t __get_s() const;

 int32_t __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(int32_t value) ;

constexpr int32_t __get_i() const;

 int64_t __declspec(property(get=__get_j, put=__set_j))  j;

constexpr void __set_j(int64_t value) ;

constexpr int64_t __get_j() const;

 float_t __declspec(property(get=__get_f, put=__set_f))  f;

constexpr void __set_f(float_t value) ;

constexpr float_t __get_f() const;

 double_t __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(double_t value) ;

constexpr double_t __get_d() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_l() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::jvalue, "UnityEngine", "jvalue");
