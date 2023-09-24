#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
struct CallingConvention;
}
// Type: System.Runtime.InteropServices::CallingConvention
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3327))
// CS Name: System.Runtime.InteropServices.CallingConvention
struct CORDL_TYPE CallingConvention : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CallingConvention(int32_t value__) noexcept;


                    constexpr CallingConvention(CallingConvention const&) = default;
                    constexpr CallingConvention(CallingConvention&&) = default;
                    constexpr CallingConvention& operator=(CallingConvention const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CallingConvention& operator=(CallingConvention&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CallingConvention(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CallingConvention_Unwrapped : int32_t {
__Winapi = 1,
__Cdecl = 2,
__StdCall = 3,
__ThisCall = 4,
__FastCall = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CallingConvention_Unwrapped () const noexcept {
return std::bit_cast<__CallingConvention_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Winapi offset 0
static System::Runtime::InteropServices::CallingConvention const Winapi;

/// @brief Field Cdecl offset 0
static System::Runtime::InteropServices::CallingConvention const Cdecl;

/// @brief Field StdCall offset 0
static System::Runtime::InteropServices::CallingConvention const StdCall;

/// @brief Field ThisCall offset 0
static System::Runtime::InteropServices::CallingConvention const ThisCall;

/// @brief Field FastCall offset 0
static System::Runtime::InteropServices::CallingConvention const FastCall;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::CallingConvention, "System.Runtime.InteropServices", "CallingConvention");
