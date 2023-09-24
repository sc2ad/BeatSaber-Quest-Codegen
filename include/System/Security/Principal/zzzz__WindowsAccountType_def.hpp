#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Principal {
struct WindowsAccountType;
}
// Type: System.Security.Principal::WindowsAccountType
namespace System::Security::Principal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3001))
// CS Name: System.Security.Principal.WindowsAccountType
struct CORDL_TYPE WindowsAccountType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WindowsAccountType(int32_t value__) noexcept;


                    constexpr WindowsAccountType(WindowsAccountType const&) = default;
                    constexpr WindowsAccountType(WindowsAccountType&&) = default;
                    constexpr WindowsAccountType& operator=(WindowsAccountType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WindowsAccountType& operator=(WindowsAccountType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WindowsAccountType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __WindowsAccountType_Unwrapped : int32_t {
__Normal = 0,
__Guest = 1,
__System = 2,
__Anonymous = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WindowsAccountType_Unwrapped () const noexcept {
return std::bit_cast<__WindowsAccountType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static System::Security::Principal::WindowsAccountType const Normal;

/// @brief Field Guest offset 0
static System::Security::Principal::WindowsAccountType const Guest;

/// @brief Field System offset 0
static System::Security::Principal::WindowsAccountType const System;

/// @brief Field Anonymous offset 0
static System::Security::Principal::WindowsAccountType const Anonymous;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Principal
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsAccountType, "System.Security.Principal", "WindowsAccountType");
