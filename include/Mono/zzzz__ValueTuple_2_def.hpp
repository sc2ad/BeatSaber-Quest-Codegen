#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace Mono {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Type: Mono::ValueTuple`2
namespace Mono {
// cpp template
template<typename T1,typename T2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2244))
// CS Name: Mono.ValueTuple`2
struct CORDL_TYPE ValueTuple_2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }]
constexpr ValueTuple_2(T1 Item1, T2 Item2) noexcept;


                    constexpr ValueTuple_2(ValueTuple_2 const&) = default;
                    constexpr ValueTuple_2(ValueTuple_2&&) = default;
                    constexpr ValueTuple_2& operator=(ValueTuple_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueTuple_2& operator=(ValueTuple_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueTuple_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T1 __declspec(property(get=__get_Item1, put=__set_Item1))  Item1;

constexpr void __set_Item1(T1 value) ;

constexpr T1 __get_Item1() const;

 T2 __declspec(property(get=__get_Item2, put=__set_Item2))  Item2;

constexpr void __set_Item2(T2 value) ;

constexpr T2 __get_Item2() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_2, "Mono", "ValueTuple`2");
