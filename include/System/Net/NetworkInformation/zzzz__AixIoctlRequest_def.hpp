#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation {
struct AixIoctlRequest;
}
// Type: System.Net.NetworkInformation::AixIoctlRequest
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8115))
// CS Name: System.Net.NetworkInformation.AixIoctlRequest
struct CORDL_TYPE AixIoctlRequest : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AixIoctlRequest(uint32_t value__) noexcept;


                    constexpr AixIoctlRequest(AixIoctlRequest const&) = default;
                    constexpr AixIoctlRequest(AixIoctlRequest&&) = default;
                    constexpr AixIoctlRequest& operator=(AixIoctlRequest const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AixIoctlRequest& operator=(AixIoctlRequest&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AixIoctlRequest(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AixIoctlRequest_Unwrapped : uint32_t {
__SIOCGSIZIFCONF = 1074030954u,
__SIOCGIFCONF = 3222300997u,
__SIOCGIFFLAGS = 3223873809u,
__SIOCGIFNETMASK = 3223873829u,
__SIOCGIFMTU = 3223873878u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AixIoctlRequest_Unwrapped () const noexcept {
return std::bit_cast<__AixIoctlRequest_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint32_t;


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field SIOCGSIZIFCONF offset 0
static System::Net::NetworkInformation::AixIoctlRequest const SIOCGSIZIFCONF;

/// @brief Field SIOCGIFCONF offset 0
static System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFCONF;

/// @brief Field SIOCGIFFLAGS offset 0
static System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFFLAGS;

/// @brief Field SIOCGIFNETMASK offset 0
static System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFNETMASK;

/// @brief Field SIOCGIFMTU offset 0
static System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFMTU;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AixIoctlRequest, "System.Net.NetworkInformation", "AixIoctlRequest");
