#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct PInvokeAttributes;
}
// Type: System.Reflection::PInvokeAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3500))
// CS Name: System.Reflection.PInvokeAttributes
struct CORDL_TYPE PInvokeAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PInvokeAttributes(int32_t value__) noexcept;


                    constexpr PInvokeAttributes(PInvokeAttributes const&) = default;
                    constexpr PInvokeAttributes(PInvokeAttributes&&) = default;
                    constexpr PInvokeAttributes& operator=(PInvokeAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PInvokeAttributes& operator=(PInvokeAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PInvokeAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PInvokeAttributes_Unwrapped : int32_t {
__NoMangle = 1,
__CharSetMask = 6,
__CharSetNotSpec = 0,
__CharSetAnsi = 2,
__CharSetUnicode = 4,
__CharSetAuto = 6,
__BestFitUseAssem = 0,
__BestFitEnabled = 16,
__BestFitDisabled = 32,
__BestFitMask = 48,
__ThrowOnUnmappableCharUseAssem = 0,
__ThrowOnUnmappableCharEnabled = 4096,
__ThrowOnUnmappableCharDisabled = 8192,
__ThrowOnUnmappableCharMask = 12288,
__SupportsLastError = 64,
__CallConvMask = 1792,
__CallConvWinapi = 256,
__CallConvCdecl = 512,
__CallConvStdcall = 768,
__CallConvThiscall = 1024,
__CallConvFastcall = 1280,
__MaxValue = 65535,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PInvokeAttributes_Unwrapped () const noexcept {
return std::bit_cast<__PInvokeAttributes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoMangle offset 0
static System::Reflection::PInvokeAttributes const NoMangle;

/// @brief Field CharSetMask offset 0
static System::Reflection::PInvokeAttributes const CharSetMask;

/// @brief Field CharSetNotSpec offset 0
static System::Reflection::PInvokeAttributes const CharSetNotSpec;

/// @brief Field CharSetAnsi offset 0
static System::Reflection::PInvokeAttributes const CharSetAnsi;

/// @brief Field CharSetUnicode offset 0
static System::Reflection::PInvokeAttributes const CharSetUnicode;

/// @brief Field CharSetAuto offset 0
static System::Reflection::PInvokeAttributes const CharSetAuto;

/// @brief Field BestFitUseAssem offset 0
static System::Reflection::PInvokeAttributes const BestFitUseAssem;

/// @brief Field BestFitEnabled offset 0
static System::Reflection::PInvokeAttributes const BestFitEnabled;

/// @brief Field BestFitDisabled offset 0
static System::Reflection::PInvokeAttributes const BestFitDisabled;

/// @brief Field BestFitMask offset 0
static System::Reflection::PInvokeAttributes const BestFitMask;

/// @brief Field ThrowOnUnmappableCharUseAssem offset 0
static System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharUseAssem;

/// @brief Field ThrowOnUnmappableCharEnabled offset 0
static System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharEnabled;

/// @brief Field ThrowOnUnmappableCharDisabled offset 0
static System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharDisabled;

/// @brief Field ThrowOnUnmappableCharMask offset 0
static System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharMask;

/// @brief Field SupportsLastError offset 0
static System::Reflection::PInvokeAttributes const SupportsLastError;

/// @brief Field CallConvMask offset 0
static System::Reflection::PInvokeAttributes const CallConvMask;

/// @brief Field CallConvWinapi offset 0
static System::Reflection::PInvokeAttributes const CallConvWinapi;

/// @brief Field CallConvCdecl offset 0
static System::Reflection::PInvokeAttributes const CallConvCdecl;

/// @brief Field CallConvStdcall offset 0
static System::Reflection::PInvokeAttributes const CallConvStdcall;

/// @brief Field CallConvThiscall offset 0
static System::Reflection::PInvokeAttributes const CallConvThiscall;

/// @brief Field CallConvFastcall offset 0
static System::Reflection::PInvokeAttributes const CallConvFastcall;

/// @brief Field MaxValue offset 0
static System::Reflection::PInvokeAttributes const MaxValue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PInvokeAttributes, "System.Reflection", "PInvokeAttributes");
