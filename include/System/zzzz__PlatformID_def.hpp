#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct PlatformID;
}
// Type: System::PlatformID
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2613))
// CS Name: System.PlatformID
struct CORDL_TYPE PlatformID : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlatformID(int32_t value__) noexcept;


                    constexpr PlatformID(PlatformID const&) = default;
                    constexpr PlatformID(PlatformID&&) = default;
                    constexpr PlatformID& operator=(PlatformID const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlatformID& operator=(PlatformID&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlatformID(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PlatformID_Unwrapped : int32_t {
__Win32S = 0,
__Win32Windows = 1,
__Win32NT = 2,
__WinCE = 3,
__Unix = 4,
__Xbox = 5,
__MacOSX = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformID_Unwrapped () const noexcept {
return std::bit_cast<__PlatformID_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Win32S offset 0
static ::System::PlatformID const Win32S;

/// @brief Field Win32Windows offset 0
static ::System::PlatformID const Win32Windows;

/// @brief Field Win32NT offset 0
static ::System::PlatformID const Win32NT;

/// @brief Field WinCE offset 0
static ::System::PlatformID const WinCE;

/// @brief Field Unix offset 0
static ::System::PlatformID const Unix;

/// @brief Field Xbox offset 0
static ::System::PlatformID const Xbox;

/// @brief Field MacOSX offset 0
static ::System::PlatformID const MacOSX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::PlatformID, "System", "PlatformID");
