#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
// Type: Oculus.Platform::LeaderboardStartAt
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13192))
// CS Name: Oculus.Platform.LeaderboardStartAt
struct CORDL_TYPE LeaderboardStartAt : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaderboardStartAt(int32_t value__) noexcept;


                    constexpr LeaderboardStartAt(LeaderboardStartAt const&) = default;
                    constexpr LeaderboardStartAt(LeaderboardStartAt&&) = default;
                    constexpr LeaderboardStartAt& operator=(LeaderboardStartAt const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LeaderboardStartAt& operator=(LeaderboardStartAt&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LeaderboardStartAt(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LeaderboardStartAt_Unwrapped : int32_t {
__Top = 0,
__CenteredOnViewer = 1,
__CenteredOnViewerOrTop = 2,
__Unknown = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LeaderboardStartAt_Unwrapped () const noexcept {
return std::bit_cast<__LeaderboardStartAt_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Top offset 0
static Oculus::Platform::LeaderboardStartAt const Top;

/// @brief Field CenteredOnViewer offset 0
static Oculus::Platform::LeaderboardStartAt const CenteredOnViewer;

/// @brief Field CenteredOnViewerOrTop offset 0
static Oculus::Platform::LeaderboardStartAt const CenteredOnViewerOrTop;

/// @brief Field Unknown offset 0
static Oculus::Platform::LeaderboardStartAt const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LeaderboardStartAt, "Oculus.Platform", "LeaderboardStartAt");
