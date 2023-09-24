#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct MethodImplAttributes;
}
// Type: System.Reflection::MethodImplAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3470))
// CS Name: System.Reflection.MethodImplAttributes
struct CORDL_TYPE MethodImplAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MethodImplAttributes(int32_t value__) noexcept;


                    constexpr MethodImplAttributes(MethodImplAttributes const&) = default;
                    constexpr MethodImplAttributes(MethodImplAttributes&&) = default;
                    constexpr MethodImplAttributes& operator=(MethodImplAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MethodImplAttributes& operator=(MethodImplAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MethodImplAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MethodImplAttributes_Unwrapped : int32_t {
__CodeTypeMask = 3,
__IL = 0,
__Native = 1,
__OPTIL = 2,
__Runtime = 3,
__ManagedMask = 4,
__Unmanaged = 4,
__Managed = 0,
__ForwardRef = 16,
__PreserveSig = 128,
__InternalCall = 4096,
__Synchronized = 32,
__NoInlining = 8,
__AggressiveInlining = 256,
__NoOptimization = 64,
__MaxMethodImplVal = 65535,
__SecurityMitigations = 1024,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MethodImplAttributes_Unwrapped () const noexcept {
return std::bit_cast<__MethodImplAttributes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CodeTypeMask offset 0
static System::Reflection::MethodImplAttributes const CodeTypeMask;

/// @brief Field IL offset 0
static System::Reflection::MethodImplAttributes const IL;

/// @brief Field Native offset 0
static System::Reflection::MethodImplAttributes const Native;

/// @brief Field OPTIL offset 0
static System::Reflection::MethodImplAttributes const OPTIL;

/// @brief Field Runtime offset 0
static System::Reflection::MethodImplAttributes const Runtime;

/// @brief Field ManagedMask offset 0
static System::Reflection::MethodImplAttributes const ManagedMask;

/// @brief Field Unmanaged offset 0
static System::Reflection::MethodImplAttributes const Unmanaged;

/// @brief Field Managed offset 0
static System::Reflection::MethodImplAttributes const Managed;

/// @brief Field ForwardRef offset 0
static System::Reflection::MethodImplAttributes const ForwardRef;

/// @brief Field PreserveSig offset 0
static System::Reflection::MethodImplAttributes const PreserveSig;

/// @brief Field InternalCall offset 0
static System::Reflection::MethodImplAttributes const InternalCall;

/// @brief Field Synchronized offset 0
static System::Reflection::MethodImplAttributes const Synchronized;

/// @brief Field NoInlining offset 0
static System::Reflection::MethodImplAttributes const NoInlining;

/// @brief Field AggressiveInlining offset 0
static System::Reflection::MethodImplAttributes const AggressiveInlining;

/// @brief Field NoOptimization offset 0
static System::Reflection::MethodImplAttributes const NoOptimization;

/// @brief Field MaxMethodImplVal offset 0
static System::Reflection::MethodImplAttributes const MaxMethodImplVal;

/// @brief Field SecurityMitigations offset 0
static System::Reflection::MethodImplAttributes const SecurityMitigations;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodImplAttributes, "System.Reflection", "MethodImplAttributes");
