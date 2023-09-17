#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
// Type: OVR.OpenVR::AppOverrideKeys_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9486))
// CS Name: OVR.OpenVR.AppOverrideKeys_t
struct CORDL_TYPE AppOverrideKeys_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pchKey", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "pchValue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr AppOverrideKeys_t(::cordl_internals::intptr_t pchKey, ::cordl_internals::intptr_t pchValue) noexcept;


                    constexpr AppOverrideKeys_t(AppOverrideKeys_t const&) = default;
                    constexpr AppOverrideKeys_t(AppOverrideKeys_t&&) = default;
                    constexpr AppOverrideKeys_t& operator=(AppOverrideKeys_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AppOverrideKeys_t& operator=(AppOverrideKeys_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AppOverrideKeys_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_pchKey, put=__set_pchKey))  pchKey;

constexpr void __set_pchKey(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_pchKey() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_pchValue, put=__set_pchValue))  pchValue;

constexpr void __set_pchValue(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_pchValue() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::AppOverrideKeys_t, "OVR.OpenVR", "AppOverrideKeys_t");
