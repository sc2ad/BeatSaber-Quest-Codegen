#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
struct PlatformEnviroment;
}
// Type: BeatSaberAPI.DataTransferObjects::PlatformEnviroment
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6183))
// CS Name: BeatSaberAPI.DataTransferObjects.PlatformEnviroment
struct CORDL_TYPE PlatformEnviroment : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr PlatformEnviroment(uint8_t value__) noexcept;


                    constexpr PlatformEnviroment(PlatformEnviroment const&) = default;
                    constexpr PlatformEnviroment(PlatformEnviroment&&) = default;
                    constexpr PlatformEnviroment& operator=(PlatformEnviroment const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlatformEnviroment& operator=(PlatformEnviroment&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlatformEnviroment(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PlatformEnviroment_Unwrapped : uint8_t {
__Test = 0u,
__Developer = 1u,
__Production = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformEnviroment_Unwrapped () const noexcept {
return std::bit_cast<__PlatformEnviroment_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Test offset 0
static BeatSaberAPI::DataTransferObjects::PlatformEnviroment const Test;

/// @brief Field Developer offset 0
static BeatSaberAPI::DataTransferObjects::PlatformEnviroment const Developer;

/// @brief Field Production offset 0
static BeatSaberAPI::DataTransferObjects::PlatformEnviroment const Production;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::PlatformEnviroment, "BeatSaberAPI.DataTransferObjects", "PlatformEnviroment");
