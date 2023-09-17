#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
// Type: ::MultiplayerUnavailableReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4524))
// CS Name: MultiplayerUnavailableReason
struct CORDL_TYPE MultiplayerUnavailableReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiplayerUnavailableReason(int32_t value__) noexcept;


                    constexpr MultiplayerUnavailableReason(MultiplayerUnavailableReason const&) = default;
                    constexpr MultiplayerUnavailableReason(MultiplayerUnavailableReason&&) = default;
                    constexpr MultiplayerUnavailableReason& operator=(MultiplayerUnavailableReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MultiplayerUnavailableReason& operator=(MultiplayerUnavailableReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MultiplayerUnavailableReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MultiplayerUnavailableReason_Unwrapped : int32_t {
__NetworkUnreachable = 1,
__UpdateRequired = 2,
__ServerOffline = 3,
__MaintenanceMode = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiplayerUnavailableReason_Unwrapped () const noexcept {
return std::bit_cast<__MultiplayerUnavailableReason_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NetworkUnreachable offset 0
static ::GlobalNamespace::MultiplayerUnavailableReason const NetworkUnreachable;

/// @brief Field UpdateRequired offset 0
static ::GlobalNamespace::MultiplayerUnavailableReason const UpdateRequired;

/// @brief Field ServerOffline offset 0
static ::GlobalNamespace::MultiplayerUnavailableReason const ServerOffline;

/// @brief Field MaintenanceMode offset 0
static ::GlobalNamespace::MultiplayerUnavailableReason const MaintenanceMode;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerUnavailableReason, "", "MultiplayerUnavailableReason");
