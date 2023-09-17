#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
// Type: Oculus.Platform::ChallengeViewerFilter
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13179))
// CS Name: Oculus.Platform.ChallengeViewerFilter
struct CORDL_TYPE ChallengeViewerFilter : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChallengeViewerFilter(int32_t value__) noexcept;


                    constexpr ChallengeViewerFilter(ChallengeViewerFilter const&) = default;
                    constexpr ChallengeViewerFilter(ChallengeViewerFilter&&) = default;
                    constexpr ChallengeViewerFilter& operator=(ChallengeViewerFilter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ChallengeViewerFilter& operator=(ChallengeViewerFilter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ChallengeViewerFilter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ChallengeViewerFilter_Unwrapped : int32_t {
__Unknown = 0,
__AllVisible = 1,
__Participating = 2,
__Invited = 3,
__ParticipatingOrInvited = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChallengeViewerFilter_Unwrapped () const noexcept {
return std::bit_cast<__ChallengeViewerFilter_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::ChallengeViewerFilter const Unknown;

/// @brief Field AllVisible offset 0
static ::Oculus::Platform::ChallengeViewerFilter const AllVisible;

/// @brief Field Participating offset 0
static ::Oculus::Platform::ChallengeViewerFilter const Participating;

/// @brief Field Invited offset 0
static ::Oculus::Platform::ChallengeViewerFilter const Invited;

/// @brief Field ParticipatingOrInvited offset 0
static ::Oculus::Platform::ChallengeViewerFilter const ParticipatingOrInvited;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeViewerFilter, "Oculus.Platform", "ChallengeViewerFilter");
