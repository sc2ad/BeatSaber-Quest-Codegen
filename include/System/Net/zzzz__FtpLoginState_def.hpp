#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
struct FtpLoginState;
}
// Type: System.Net::FtpLoginState
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7890))
// CS Name: System.Net.FtpLoginState
struct CORDL_TYPE FtpLoginState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr FtpLoginState(uint8_t value__) noexcept;


                    constexpr FtpLoginState(FtpLoginState const&) = default;
                    constexpr FtpLoginState(FtpLoginState&&) = default;
                    constexpr FtpLoginState& operator=(FtpLoginState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FtpLoginState& operator=(FtpLoginState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FtpLoginState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FtpLoginState_Unwrapped : uint8_t {
__NotLoggedIn = 0u,
__LoggedIn = 1u,
__LoggedInButNeedsRelogin = 2u,
__ReloginFailed = 3u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpLoginState_Unwrapped () const noexcept {
return std::bit_cast<__FtpLoginState_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field NotLoggedIn offset 0
static ::System::Net::FtpLoginState const NotLoggedIn;

/// @brief Field LoggedIn offset 0
static ::System::Net::FtpLoginState const LoggedIn;

/// @brief Field LoggedInButNeedsRelogin offset 0
static ::System::Net::FtpLoginState const LoggedInButNeedsRelogin;

/// @brief Field ReloginFailed offset 0
static ::System::Net::FtpLoginState const ReloginFailed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpLoginState, "System.Net", "FtpLoginState");
