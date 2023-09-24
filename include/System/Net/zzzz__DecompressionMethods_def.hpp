#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net {
struct DecompressionMethods;
}
// Type: System.Net::DecompressionMethods
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8008))
// CS Name: System.Net.DecompressionMethods
struct CORDL_TYPE DecompressionMethods : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DecompressionMethods(int32_t value__) noexcept;


                    constexpr DecompressionMethods(DecompressionMethods const&) = default;
                    constexpr DecompressionMethods(DecompressionMethods&&) = default;
                    constexpr DecompressionMethods& operator=(DecompressionMethods const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DecompressionMethods& operator=(DecompressionMethods&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DecompressionMethods(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DecompressionMethods_Unwrapped : int32_t {
__None = 0,
__GZip = 1,
__Deflate = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DecompressionMethods_Unwrapped () const noexcept {
return std::bit_cast<__DecompressionMethods_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Net::DecompressionMethods const None;

/// @brief Field GZip offset 0
static System::Net::DecompressionMethods const GZip;

/// @brief Field Deflate offset 0
static System::Net::DecompressionMethods const Deflate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::DecompressionMethods, "System.Net", "DecompressionMethods");
