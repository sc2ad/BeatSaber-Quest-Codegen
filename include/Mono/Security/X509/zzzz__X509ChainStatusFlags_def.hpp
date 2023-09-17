#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Security::X509 {
struct X509ChainStatusFlags;
}
// Type: Mono.Security.X509::X509ChainStatusFlags
namespace Mono::Security::X509 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13966))
// CS Name: Mono.Security.X509.X509ChainStatusFlags
struct CORDL_TYPE X509ChainStatusFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509ChainStatusFlags(int32_t value__) noexcept;


                    constexpr X509ChainStatusFlags(X509ChainStatusFlags const&) = default;
                    constexpr X509ChainStatusFlags(X509ChainStatusFlags&&) = default;
                    constexpr X509ChainStatusFlags& operator=(X509ChainStatusFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509ChainStatusFlags& operator=(X509ChainStatusFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509ChainStatusFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509ChainStatusFlags_Unwrapped : int32_t {
__InvalidBasicConstraints = 1024,
__NoError = 0,
__NotSignatureValid = 8,
__NotTimeNested = 2,
__NotTimeValid = 1,
__PartialChain = 65536,
__UntrustedRoot = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509ChainStatusFlags_Unwrapped () const noexcept {
return std::bit_cast<__X509ChainStatusFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field InvalidBasicConstraints offset 0
static ::Mono::Security::X509::X509ChainStatusFlags const InvalidBasicConstraints;

/// @brief Field NoError offset 0
static ::Mono::Security::X509::X509ChainStatusFlags const NoError;

/// @brief Field NotSignatureValid offset 0
static ::Mono::Security::X509::X509ChainStatusFlags const NotSignatureValid;

/// @brief Field NotTimeNested offset 0
static ::Mono::Security::X509::X509ChainStatusFlags const NotTimeNested;

/// @brief Field NotTimeValid offset 0
static ::Mono::Security::X509::X509ChainStatusFlags const NotTimeValid;

/// @brief Field PartialChain offset 0
static ::Mono::Security::X509::X509ChainStatusFlags const PartialChain;

/// @brief Field UntrustedRoot offset 0
static ::Mono::Security::X509::X509ChainStatusFlags const UntrustedRoot;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509ChainStatusFlags, "Mono.Security.X509", "X509ChainStatusFlags");
