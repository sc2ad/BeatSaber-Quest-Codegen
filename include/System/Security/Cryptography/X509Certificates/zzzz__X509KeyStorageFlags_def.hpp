#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
// Type: System.Security.Cryptography.X509Certificates::X509KeyStorageFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2986))
// CS Name: System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct CORDL_TYPE X509KeyStorageFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509KeyStorageFlags(int32_t value__) noexcept;


                    constexpr X509KeyStorageFlags(X509KeyStorageFlags const&) = default;
                    constexpr X509KeyStorageFlags(X509KeyStorageFlags&&) = default;
                    constexpr X509KeyStorageFlags& operator=(X509KeyStorageFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509KeyStorageFlags& operator=(X509KeyStorageFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509KeyStorageFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509KeyStorageFlags_Unwrapped : int32_t {
__DefaultKeySet = 0,
__UserKeySet = 1,
__MachineKeySet = 2,
__Exportable = 4,
__UserProtected = 8,
__PersistKeySet = 16,
__EphemeralKeySet = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509KeyStorageFlags_Unwrapped () const noexcept {
return std::bit_cast<__X509KeyStorageFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DefaultKeySet offset 0
static System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const DefaultKeySet;

/// @brief Field UserKeySet offset 0
static System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const UserKeySet;

/// @brief Field MachineKeySet offset 0
static System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const MachineKeySet;

/// @brief Field Exportable offset 0
static System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const Exportable;

/// @brief Field UserProtected offset 0
static System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const UserProtected;

/// @brief Field PersistKeySet offset 0
static System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const PersistKeySet;

/// @brief Field EphemeralKeySet offset 0
static System::Security::Cryptography::X509Certificates::X509KeyStorageFlags const EphemeralKeySet;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, "System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags");
