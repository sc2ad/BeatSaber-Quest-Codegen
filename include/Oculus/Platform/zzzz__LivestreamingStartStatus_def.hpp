#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
// Type: Oculus.Platform::LivestreamingStartStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13195))
// CS Name: Oculus.Platform.LivestreamingStartStatus
struct CORDL_TYPE LivestreamingStartStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LivestreamingStartStatus(int32_t value__) noexcept;


                    constexpr LivestreamingStartStatus(LivestreamingStartStatus const&) = default;
                    constexpr LivestreamingStartStatus(LivestreamingStartStatus&&) = default;
                    constexpr LivestreamingStartStatus& operator=(LivestreamingStartStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LivestreamingStartStatus& operator=(LivestreamingStartStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LivestreamingStartStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LivestreamingStartStatus_Unwrapped : int32_t {
__Success = 1,
__Unknown = 0,
__NoPackageSet = -1,
__NoFbConnect = -2,
__NoSessionId = -3,
__MissingParameters = -4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LivestreamingStartStatus_Unwrapped () const noexcept {
return std::bit_cast<__LivestreamingStartStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static Oculus::Platform::LivestreamingStartStatus const Success;

/// @brief Field Unknown offset 0
static Oculus::Platform::LivestreamingStartStatus const Unknown;

/// @brief Field NoPackageSet offset 0
static Oculus::Platform::LivestreamingStartStatus const NoPackageSet;

/// @brief Field NoFbConnect offset 0
static Oculus::Platform::LivestreamingStartStatus const NoFbConnect;

/// @brief Field NoSessionId offset 0
static Oculus::Platform::LivestreamingStartStatus const NoSessionId;

/// @brief Field MissingParameters offset 0
static Oculus::Platform::LivestreamingStartStatus const MissingParameters;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LivestreamingStartStatus, "Oculus.Platform", "LivestreamingStartStatus");
