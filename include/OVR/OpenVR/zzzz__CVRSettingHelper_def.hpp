#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct CVRSettingHelper;
}
// Type: OVR.OpenVR::CVRSettingHelper
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9502))
// CS Name: OVR.OpenVR.CVRSettingHelper
struct CORDL_TYPE CVRSettingHelper : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_pSettings", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr CVRSettingHelper(::cordl_internals::intptr_t m_pSettings) noexcept;


                    constexpr CVRSettingHelper(CVRSettingHelper const&) = default;
                    constexpr CVRSettingHelper(CVRSettingHelper&&) = default;
                    constexpr CVRSettingHelper& operator=(CVRSettingHelper const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CVRSettingHelper& operator=(CVRSettingHelper&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CVRSettingHelper(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pSettings, put=__set_m_pSettings))  m_pSettings;

constexpr void __set_m_pSettings(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pSettings() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSettingHelper, "OVR.OpenVR", "CVRSettingHelper");
