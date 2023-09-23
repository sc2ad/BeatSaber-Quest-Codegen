#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
// Type: Mono.Security.Protocol.Ntlm::NtlmAuthLevel
namespace Mono::Security::Protocol::Ntlm {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13977))
// CS Name: Mono.Security.Protocol.Ntlm.NtlmAuthLevel
struct CORDL_TYPE NtlmAuthLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NtlmAuthLevel(int32_t value__) noexcept;


                    constexpr NtlmAuthLevel(NtlmAuthLevel const&) = default;
                    constexpr NtlmAuthLevel(NtlmAuthLevel&&) = default;
                    constexpr NtlmAuthLevel& operator=(NtlmAuthLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NtlmAuthLevel& operator=(NtlmAuthLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NtlmAuthLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NtlmAuthLevel_Unwrapped : int32_t {
__LM_and_NTLM = 0,
__LM_and_NTLM_and_try_NTLMv2_Session = 1,
__NTLM_only = 2,
__NTLMv2_only = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtlmAuthLevel_Unwrapped () const noexcept {
return std::bit_cast<__NtlmAuthLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LM_and_NTLM offset 0
static Mono::Security::Protocol::Ntlm::NtlmAuthLevel const LM_and_NTLM;

/// @brief Field LM_and_NTLM_and_try_NTLMv2_Session offset 0
static Mono::Security::Protocol::Ntlm::NtlmAuthLevel const LM_and_NTLM_and_try_NTLMv2_Session;

/// @brief Field NTLM_only offset 0
static Mono::Security::Protocol::Ntlm::NtlmAuthLevel const NTLM_only;

/// @brief Field NTLMv2_only offset 0
static Mono::Security::Protocol::Ntlm::NtlmAuthLevel const NTLMv2_only;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "Mono.Security.Protocol.Ntlm", "NtlmAuthLevel");
