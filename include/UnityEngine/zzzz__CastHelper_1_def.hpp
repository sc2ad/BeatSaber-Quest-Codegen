#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
template<typename T>
struct CastHelper_1;
}
// Type: UnityEngine::CastHelper`1
namespace UnityEngine {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10147))
// CS Name: UnityEngine.CastHelper`1
struct CORDL_TYPE CastHelper_1 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "t", ty: "T", modifiers: "", def_value: None }, CppParam { name: "onePointerFurtherThanT", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr CastHelper_1(T t, ::cordl_internals::intptr_t onePointerFurtherThanT) noexcept;


                    constexpr CastHelper_1(CastHelper_1 const&) = default;
                    constexpr CastHelper_1(CastHelper_1&&) = default;
                    constexpr CastHelper_1& operator=(CastHelper_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CastHelper_1& operator=(CastHelper_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CastHelper_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(T value) ;

constexpr T __get_t() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_onePointerFurtherThanT, put=__set_onePointerFurtherThanT))  onePointerFurtherThanT;

constexpr void __set_onePointerFurtherThanT(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_onePointerFurtherThanT() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::CastHelper_1, "UnityEngine", "CastHelper`1");
