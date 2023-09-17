#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::InteropServices {
struct UnmanagedType;
}
// Type: System.Runtime.InteropServices::UnmanagedType
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3315))
// CS Name: System.Runtime.InteropServices.UnmanagedType
struct CORDL_TYPE UnmanagedType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnmanagedType(int32_t value__) noexcept;


                    constexpr UnmanagedType(UnmanagedType const&) = default;
                    constexpr UnmanagedType(UnmanagedType&&) = default;
                    constexpr UnmanagedType& operator=(UnmanagedType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnmanagedType& operator=(UnmanagedType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnmanagedType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnmanagedType_Unwrapped : int32_t {
__Bool = 2,
__I1 = 3,
__U1 = 4,
__I2 = 5,
__U2 = 6,
__I4 = 7,
__U4 = 8,
__I8 = 9,
__U8 = 10,
__R4 = 11,
__R8 = 12,
__Currency = 15,
__BStr = 19,
__LPStr = 20,
__LPWStr = 21,
__LPTStr = 22,
__ByValTStr = 23,
__IUnknown = 25,
__IDispatch = 26,
__Struct = 27,
__Interface = 28,
__SafeArray = 29,
__ByValArray = 30,
__SysInt = 31,
__SysUInt = 32,
__VBByRefStr = 34,
__AnsiBStr = 35,
__TBStr = 36,
__VariantBool = 37,
__FunctionPtr = 38,
__AsAny = 40,
__LPArray = 42,
__LPStruct = 43,
__CustomMarshaler = 44,
__Error = 45,
__IInspectable = 46,
__HString = 47,
__LPUTF8Str = 48,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnmanagedType_Unwrapped () const noexcept {
return std::bit_cast<__UnmanagedType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Bool offset 0
static ::System::Runtime::InteropServices::UnmanagedType const Bool;

/// @brief Field I1 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const I1;

/// @brief Field U1 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const U1;

/// @brief Field I2 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const I2;

/// @brief Field U2 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const U2;

/// @brief Field I4 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const I4;

/// @brief Field U4 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const U4;

/// @brief Field I8 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const I8;

/// @brief Field U8 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const U8;

/// @brief Field R4 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const R4;

/// @brief Field R8 offset 0
static ::System::Runtime::InteropServices::UnmanagedType const R8;

/// @brief Field Currency offset 0
static ::System::Runtime::InteropServices::UnmanagedType const Currency;

/// @brief Field BStr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const BStr;

/// @brief Field LPStr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const LPStr;

/// @brief Field LPWStr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const LPWStr;

/// @brief Field LPTStr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const LPTStr;

/// @brief Field ByValTStr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const ByValTStr;

/// @brief Field IUnknown offset 0
static ::System::Runtime::InteropServices::UnmanagedType const IUnknown;

/// @brief Field IDispatch offset 0
static ::System::Runtime::InteropServices::UnmanagedType const IDispatch;

/// @brief Field Struct offset 0
static ::System::Runtime::InteropServices::UnmanagedType const Struct;

/// @brief Field Interface offset 0
static ::System::Runtime::InteropServices::UnmanagedType const Interface;

/// @brief Field SafeArray offset 0
static ::System::Runtime::InteropServices::UnmanagedType const SafeArray;

/// @brief Field ByValArray offset 0
static ::System::Runtime::InteropServices::UnmanagedType const ByValArray;

/// @brief Field SysInt offset 0
static ::System::Runtime::InteropServices::UnmanagedType const SysInt;

/// @brief Field SysUInt offset 0
static ::System::Runtime::InteropServices::UnmanagedType const SysUInt;

/// @brief Field VBByRefStr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const VBByRefStr;

/// @brief Field AnsiBStr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const AnsiBStr;

/// @brief Field TBStr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const TBStr;

/// @brief Field VariantBool offset 0
static ::System::Runtime::InteropServices::UnmanagedType const VariantBool;

/// @brief Field FunctionPtr offset 0
static ::System::Runtime::InteropServices::UnmanagedType const FunctionPtr;

/// @brief Field AsAny offset 0
static ::System::Runtime::InteropServices::UnmanagedType const AsAny;

/// @brief Field LPArray offset 0
static ::System::Runtime::InteropServices::UnmanagedType const LPArray;

/// @brief Field LPStruct offset 0
static ::System::Runtime::InteropServices::UnmanagedType const LPStruct;

/// @brief Field CustomMarshaler offset 0
static ::System::Runtime::InteropServices::UnmanagedType const CustomMarshaler;

/// @brief Field Error offset 0
static ::System::Runtime::InteropServices::UnmanagedType const Error;

/// @brief Field IInspectable offset 0
static ::System::Runtime::InteropServices::UnmanagedType const IInspectable;

/// @brief Field HString offset 0
static ::System::Runtime::InteropServices::UnmanagedType const HString;

/// @brief Field LPUTF8Str offset 0
static ::System::Runtime::InteropServices::UnmanagedType const LPUTF8Str;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::UnmanagedType, "System.Runtime.InteropServices", "UnmanagedType");
