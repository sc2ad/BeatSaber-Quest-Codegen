#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct LivestreamingAudience;
}
// Type: Oculus.Platform::LivestreamingAudience
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13193))
// CS Name: Oculus.Platform.LivestreamingAudience
struct CORDL_TYPE LivestreamingAudience : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LivestreamingAudience(int32_t value__) noexcept;


                    constexpr LivestreamingAudience(LivestreamingAudience const&) = default;
                    constexpr LivestreamingAudience(LivestreamingAudience&&) = default;
                    constexpr LivestreamingAudience& operator=(LivestreamingAudience const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LivestreamingAudience& operator=(LivestreamingAudience&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LivestreamingAudience(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LivestreamingAudience_Unwrapped : int32_t {
__Unknown = 0,
__Public = 1,
__Friends = 2,
__OnlyMe = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LivestreamingAudience_Unwrapped () const noexcept {
return std::bit_cast<__LivestreamingAudience_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::LivestreamingAudience const Unknown;

/// @brief Field Public offset 0
static Oculus::Platform::LivestreamingAudience const Public;

/// @brief Field Friends offset 0
static Oculus::Platform::LivestreamingAudience const Friends;

/// @brief Field OnlyMe offset 0
static Oculus::Platform::LivestreamingAudience const OnlyMe;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LivestreamingAudience, "Oculus.Platform", "LivestreamingAudience");
