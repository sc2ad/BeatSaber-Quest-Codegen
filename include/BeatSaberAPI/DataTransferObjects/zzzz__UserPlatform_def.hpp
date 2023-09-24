#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
struct UserPlatform;
}
// Type: BeatSaberAPI.DataTransferObjects::UserPlatform
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6182))
// CS Name: BeatSaberAPI.DataTransferObjects.UserPlatform
struct CORDL_TYPE UserPlatform : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UserPlatform(uint8_t value__) noexcept;


                    constexpr UserPlatform(UserPlatform const&) = default;
                    constexpr UserPlatform(UserPlatform&&) = default;
                    constexpr UserPlatform& operator=(UserPlatform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UserPlatform& operator=(UserPlatform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UserPlatform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UserPlatform_Unwrapped : uint8_t {
__None = 0u,
__Test = 1u,
__Steam = 2u,
__PlayStation = 3u,
__OculusPC = 4u,
__OculusQuest = 5u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserPlatform_Unwrapped () const noexcept {
return std::bit_cast<__UserPlatform_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field None offset 0
static BeatSaberAPI::DataTransferObjects::UserPlatform const None;

/// @brief Field Test offset 0
static BeatSaberAPI::DataTransferObjects::UserPlatform const Test;

/// @brief Field Steam offset 0
static BeatSaberAPI::DataTransferObjects::UserPlatform const Steam;

/// @brief Field PlayStation offset 0
static BeatSaberAPI::DataTransferObjects::UserPlatform const PlayStation;

/// @brief Field OculusPC offset 0
static BeatSaberAPI::DataTransferObjects::UserPlatform const OculusPC;

/// @brief Field OculusQuest offset 0
static BeatSaberAPI::DataTransferObjects::UserPlatform const OculusQuest;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserPlatform, "BeatSaberAPI.DataTransferObjects", "UserPlatform");
