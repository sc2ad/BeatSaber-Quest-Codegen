#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
struct CspProviderFlags;
}
// Type: System.Security.Cryptography::CspProviderFlags
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2922))
// CS Name: System.Security.Cryptography.CspProviderFlags
struct CORDL_TYPE CspProviderFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CspProviderFlags(int32_t value__) noexcept;


                    constexpr CspProviderFlags(CspProviderFlags const&) = default;
                    constexpr CspProviderFlags(CspProviderFlags&&) = default;
                    constexpr CspProviderFlags& operator=(CspProviderFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CspProviderFlags& operator=(CspProviderFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CspProviderFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CspProviderFlags_Unwrapped : int32_t {
__NoFlags = 0,
__UseMachineKeyStore = 1,
__UseDefaultKeyContainer = 2,
__UseNonExportableKey = 4,
__UseExistingKey = 8,
__UseArchivableKey = 16,
__UseUserProtectedKey = 32,
__NoPrompt = 64,
__CreateEphemeralKey = 128,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CspProviderFlags_Unwrapped () const noexcept {
return std::bit_cast<__CspProviderFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoFlags offset 0
static System::Security::Cryptography::CspProviderFlags const NoFlags;

/// @brief Field UseMachineKeyStore offset 0
static System::Security::Cryptography::CspProviderFlags const UseMachineKeyStore;

/// @brief Field UseDefaultKeyContainer offset 0
static System::Security::Cryptography::CspProviderFlags const UseDefaultKeyContainer;

/// @brief Field UseNonExportableKey offset 0
static System::Security::Cryptography::CspProviderFlags const UseNonExportableKey;

/// @brief Field UseExistingKey offset 0
static System::Security::Cryptography::CspProviderFlags const UseExistingKey;

/// @brief Field UseArchivableKey offset 0
static System::Security::Cryptography::CspProviderFlags const UseArchivableKey;

/// @brief Field UseUserProtectedKey offset 0
static System::Security::Cryptography::CspProviderFlags const UseUserProtectedKey;

/// @brief Field NoPrompt offset 0
static System::Security::Cryptography::CspProviderFlags const NoPrompt;

/// @brief Field CreateEphemeralKey offset 0
static System::Security::Cryptography::CspProviderFlags const CreateEphemeralKey;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CspProviderFlags, "System.Security.Cryptography", "CspProviderFlags");
