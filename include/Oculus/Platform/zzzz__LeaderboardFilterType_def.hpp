#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
// Type: Oculus.Platform::LeaderboardFilterType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13191))
// CS Name: Oculus.Platform.LeaderboardFilterType
struct CORDL_TYPE LeaderboardFilterType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaderboardFilterType(int32_t value__) noexcept;


                    constexpr LeaderboardFilterType(LeaderboardFilterType const&) = default;
                    constexpr LeaderboardFilterType(LeaderboardFilterType&&) = default;
                    constexpr LeaderboardFilterType& operator=(LeaderboardFilterType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LeaderboardFilterType& operator=(LeaderboardFilterType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LeaderboardFilterType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LeaderboardFilterType_Unwrapped : int32_t {
__None = 0,
__Friends = 1,
__Unknown = 2,
__UserIds = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LeaderboardFilterType_Unwrapped () const noexcept {
return std::bit_cast<__LeaderboardFilterType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Oculus::Platform::LeaderboardFilterType const None;

/// @brief Field Friends offset 0
static ::Oculus::Platform::LeaderboardFilterType const Friends;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::LeaderboardFilterType const Unknown;

/// @brief Field UserIds offset 0
static ::Oculus::Platform::LeaderboardFilterType const UserIds;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LeaderboardFilterType, "Oculus.Platform", "LeaderboardFilterType");
