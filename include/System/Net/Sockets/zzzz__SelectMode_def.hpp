#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct SelectMode;
}
// Type: System.Net.Sockets::SelectMode
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8195))
// CS Name: System.Net.Sockets.SelectMode
struct CORDL_TYPE SelectMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SelectMode(int32_t value__) noexcept;


                    constexpr SelectMode(SelectMode const&) = default;
                    constexpr SelectMode(SelectMode&&) = default;
                    constexpr SelectMode& operator=(SelectMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SelectMode& operator=(SelectMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SelectMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SelectMode_Unwrapped : int32_t {
__SelectRead = 0,
__SelectWrite = 1,
__SelectError = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SelectMode_Unwrapped () const noexcept {
return std::bit_cast<__SelectMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SelectRead offset 0
static System::Net::Sockets::SelectMode const SelectRead;

/// @brief Field SelectWrite offset 0
static System::Net::Sockets::SelectMode const SelectWrite;

/// @brief Field SelectError offset 0
static System::Net::Sockets::SelectMode const SelectError;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SelectMode, "System.Net.Sockets", "SelectMode");
