#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSettingsError;
}
// Type: OVR.OpenVR::EVRSettingsError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9419))
// CS Name: OVR.OpenVR.EVRSettingsError
struct CORDL_TYPE EVRSettingsError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRSettingsError(int32_t value__) noexcept;


                    constexpr EVRSettingsError(EVRSettingsError const&) = default;
                    constexpr EVRSettingsError(EVRSettingsError&&) = default;
                    constexpr EVRSettingsError& operator=(EVRSettingsError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRSettingsError& operator=(EVRSettingsError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRSettingsError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRSettingsError_Unwrapped : int32_t {
__None = 0,
__IPCFailed = 1,
__WriteFailed = 2,
__ReadFailed = 3,
__JsonParseFailed = 4,
__UnsetSettingHasNoDefault = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRSettingsError_Unwrapped () const noexcept {
return std::bit_cast<__EVRSettingsError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVRSettingsError const None;

/// @brief Field IPCFailed offset 0
static OVR::OpenVR::EVRSettingsError const IPCFailed;

/// @brief Field WriteFailed offset 0
static OVR::OpenVR::EVRSettingsError const WriteFailed;

/// @brief Field ReadFailed offset 0
static OVR::OpenVR::EVRSettingsError const ReadFailed;

/// @brief Field JsonParseFailed offset 0
static OVR::OpenVR::EVRSettingsError const JsonParseFailed;

/// @brief Field UnsetSettingHasNoDefault offset 0
static OVR::OpenVR::EVRSettingsError const UnsetSettingHasNoDefault;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRSettingsError, "OVR.OpenVR", "EVRSettingsError");
