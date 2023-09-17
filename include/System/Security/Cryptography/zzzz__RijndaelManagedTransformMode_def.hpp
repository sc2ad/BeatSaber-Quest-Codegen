#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Cryptography {
struct RijndaelManagedTransformMode;
}
// Type: System.Security.Cryptography::RijndaelManagedTransformMode
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2947))
// CS Name: System.Security.Cryptography.RijndaelManagedTransformMode
struct CORDL_TYPE RijndaelManagedTransformMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RijndaelManagedTransformMode(int32_t value__) noexcept;


                    constexpr RijndaelManagedTransformMode(RijndaelManagedTransformMode const&) = default;
                    constexpr RijndaelManagedTransformMode(RijndaelManagedTransformMode&&) = default;
                    constexpr RijndaelManagedTransformMode& operator=(RijndaelManagedTransformMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RijndaelManagedTransformMode& operator=(RijndaelManagedTransformMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RijndaelManagedTransformMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RijndaelManagedTransformMode_Unwrapped : int32_t {
__Encrypt = 0,
__Decrypt = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RijndaelManagedTransformMode_Unwrapped () const noexcept {
return std::bit_cast<__RijndaelManagedTransformMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Encrypt offset 0
static ::System::Security::Cryptography::RijndaelManagedTransformMode const Encrypt;

/// @brief Field Decrypt offset 0
static ::System::Security::Cryptography::RijndaelManagedTransformMode const Decrypt;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RijndaelManagedTransformMode, "System.Security.Cryptography", "RijndaelManagedTransformMode");
