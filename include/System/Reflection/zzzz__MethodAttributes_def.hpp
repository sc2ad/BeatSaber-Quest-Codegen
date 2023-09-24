#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct MethodAttributes;
}
// Type: System.Reflection::MethodAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3468))
// CS Name: System.Reflection.MethodAttributes
struct CORDL_TYPE MethodAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MethodAttributes(int32_t value__) noexcept;


                    constexpr MethodAttributes(MethodAttributes const&) = default;
                    constexpr MethodAttributes(MethodAttributes&&) = default;
                    constexpr MethodAttributes& operator=(MethodAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MethodAttributes& operator=(MethodAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MethodAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MethodAttributes_Unwrapped : int32_t {
__MemberAccessMask = 7,
__PrivateScope = 0,
__Private = 1,
__FamANDAssem = 2,
__Assembly = 3,
__Family = 4,
__FamORAssem = 5,
__Public = 6,
__Static = 16,
__Final = 32,
__Virtual = 64,
__HideBySig = 128,
__CheckAccessOnOverride = 512,
__VtableLayoutMask = 256,
__ReuseSlot = 0,
__NewSlot = 256,
__Abstract = 1024,
__SpecialName = 2048,
__PinvokeImpl = 8192,
__UnmanagedExport = 8,
__RTSpecialName = 4096,
__HasSecurity = 16384,
__RequireSecObject = 32768,
__ReservedMask = 53248,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MethodAttributes_Unwrapped () const noexcept {
return std::bit_cast<__MethodAttributes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MemberAccessMask offset 0
static System::Reflection::MethodAttributes const MemberAccessMask;

/// @brief Field PrivateScope offset 0
static System::Reflection::MethodAttributes const PrivateScope;

/// @brief Field Private offset 0
static System::Reflection::MethodAttributes const Private;

/// @brief Field FamANDAssem offset 0
static System::Reflection::MethodAttributes const FamANDAssem;

/// @brief Field Assembly offset 0
static System::Reflection::MethodAttributes const Assembly;

/// @brief Field Family offset 0
static System::Reflection::MethodAttributes const Family;

/// @brief Field FamORAssem offset 0
static System::Reflection::MethodAttributes const FamORAssem;

/// @brief Field Public offset 0
static System::Reflection::MethodAttributes const Public;

/// @brief Field Static offset 0
static System::Reflection::MethodAttributes const Static;

/// @brief Field Final offset 0
static System::Reflection::MethodAttributes const Final;

/// @brief Field Virtual offset 0
static System::Reflection::MethodAttributes const Virtual;

/// @brief Field HideBySig offset 0
static System::Reflection::MethodAttributes const HideBySig;

/// @brief Field CheckAccessOnOverride offset 0
static System::Reflection::MethodAttributes const CheckAccessOnOverride;

/// @brief Field VtableLayoutMask offset 0
static System::Reflection::MethodAttributes const VtableLayoutMask;

/// @brief Field ReuseSlot offset 0
static System::Reflection::MethodAttributes const ReuseSlot;

/// @brief Field NewSlot offset 0
static System::Reflection::MethodAttributes const NewSlot;

/// @brief Field Abstract offset 0
static System::Reflection::MethodAttributes const Abstract;

/// @brief Field SpecialName offset 0
static System::Reflection::MethodAttributes const SpecialName;

/// @brief Field PinvokeImpl offset 0
static System::Reflection::MethodAttributes const PinvokeImpl;

/// @brief Field UnmanagedExport offset 0
static System::Reflection::MethodAttributes const UnmanagedExport;

/// @brief Field RTSpecialName offset 0
static System::Reflection::MethodAttributes const RTSpecialName;

/// @brief Field HasSecurity offset 0
static System::Reflection::MethodAttributes const HasSecurity;

/// @brief Field RequireSecObject offset 0
static System::Reflection::MethodAttributes const RequireSecObject;

/// @brief Field ReservedMask offset 0
static System::Reflection::MethodAttributes const ReservedMask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodAttributes, "System.Reflection", "MethodAttributes");
