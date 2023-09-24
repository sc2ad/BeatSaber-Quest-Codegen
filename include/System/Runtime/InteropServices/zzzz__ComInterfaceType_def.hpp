#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
struct ComInterfaceType;
}
// Type: System.Runtime.InteropServices::ComInterfaceType
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3308))
// CS Name: System.Runtime.InteropServices.ComInterfaceType
struct CORDL_TYPE ComInterfaceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ComInterfaceType(int32_t value__) noexcept;


                    constexpr ComInterfaceType(ComInterfaceType const&) = default;
                    constexpr ComInterfaceType(ComInterfaceType&&) = default;
                    constexpr ComInterfaceType& operator=(ComInterfaceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ComInterfaceType& operator=(ComInterfaceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ComInterfaceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ComInterfaceType_Unwrapped : int32_t {
__InterfaceIsDual = 0,
__InterfaceIsIUnknown = 1,
__InterfaceIsIDispatch = 2,
__InterfaceIsIInspectable = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ComInterfaceType_Unwrapped () const noexcept {
return std::bit_cast<__ComInterfaceType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field InterfaceIsDual offset 0
static System::Runtime::InteropServices::ComInterfaceType const InterfaceIsDual;

/// @brief Field InterfaceIsIUnknown offset 0
static System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIUnknown;

/// @brief Field InterfaceIsIDispatch offset 0
static System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIDispatch;

/// @brief Field InterfaceIsIInspectable offset 0
static System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIInspectable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComInterfaceType, "System.Runtime.InteropServices", "ComInterfaceType");
