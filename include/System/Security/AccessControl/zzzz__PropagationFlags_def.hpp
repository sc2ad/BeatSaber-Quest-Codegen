#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::AccessControl {
struct PropagationFlags;
}
// Type: System.Security.AccessControl::PropagationFlags
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3041))
// CS Name: System.Security.AccessControl.PropagationFlags
struct CORDL_TYPE PropagationFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropagationFlags(int32_t value__) noexcept;


                    constexpr PropagationFlags(PropagationFlags const&) = default;
                    constexpr PropagationFlags(PropagationFlags&&) = default;
                    constexpr PropagationFlags& operator=(PropagationFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PropagationFlags& operator=(PropagationFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PropagationFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PropagationFlags_Unwrapped : int32_t {
__None = 0,
__NoPropagateInherit = 1,
__InheritOnly = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PropagationFlags_Unwrapped () const noexcept {
return std::bit_cast<__PropagationFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Security::AccessControl::PropagationFlags const None;

/// @brief Field NoPropagateInherit offset 0
static System::Security::AccessControl::PropagationFlags const NoPropagateInherit;

/// @brief Field InheritOnly offset 0
static System::Security::AccessControl::PropagationFlags const InheritOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::PropagationFlags, "System.Security.AccessControl", "PropagationFlags");
