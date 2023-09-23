#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct InputSkeletalActionData_t;
}
// Type: OVR.OpenVR::InputSkeletalActionData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9506))
// CS Name: OVR.OpenVR.InputSkeletalActionData_t
struct CORDL_TYPE InputSkeletalActionData_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "boneCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputSkeletalActionData_t(bool bActive, uint64_t activeOrigin, uint32_t boneCount) noexcept;


                    constexpr InputSkeletalActionData_t(InputSkeletalActionData_t const&) = default;
                    constexpr InputSkeletalActionData_t(InputSkeletalActionData_t&&) = default;
                    constexpr InputSkeletalActionData_t& operator=(InputSkeletalActionData_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputSkeletalActionData_t& operator=(InputSkeletalActionData_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputSkeletalActionData_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_bActive, put=__set_bActive))  bActive;

constexpr void __set_bActive(bool value) ;

constexpr bool __get_bActive() const;

 uint64_t __declspec(property(get=__get_activeOrigin, put=__set_activeOrigin))  activeOrigin;

constexpr void __set_activeOrigin(uint64_t value) ;

constexpr uint64_t __get_activeOrigin() const;

 uint32_t __declspec(property(get=__get_boneCount, put=__set_boneCount))  boneCount;

constexpr void __set_boneCount(uint32_t value) ;

constexpr uint32_t __get_boneCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputSkeletalActionData_t, "OVR.OpenVR", "InputSkeletalActionData_t");
