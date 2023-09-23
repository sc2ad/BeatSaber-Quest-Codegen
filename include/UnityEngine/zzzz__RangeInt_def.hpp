#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct RangeInt;
}
// Type: UnityEngine::RangeInt
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10139))
// CS Name: UnityEngine.RangeInt
struct CORDL_TYPE RangeInt : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RangeInt(int32_t start, int32_t length) noexcept;


                    constexpr RangeInt(RangeInt const&) = default;
                    constexpr RangeInt(RangeInt&&) = default;
                    constexpr RangeInt& operator=(RangeInt const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RangeInt& operator=(RangeInt&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RangeInt(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(int32_t value) ;

constexpr int32_t __get_start() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;


// Properties

 int32_t __declspec(property(get=get_end))  end;


// Methods

/// @brief Method get_end addr 0x2b57c50 size 0xc virtual false final false
 int32_t get_end() ;

/// @brief Method .ctor addr 0x2b57c5c size 0x8 virtual false final false
 void _ctor(int32_t start, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RangeInt, "UnityEngine", "RangeInt");
