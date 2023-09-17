#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Reserved_t;
}
// Type: OVR.OpenVR::VREvent_Reserved_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9460))
// CS Name: OVR.OpenVR.VREvent_Reserved_t
struct CORDL_TYPE VREvent_Reserved_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "reserved0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "reserved1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "reserved2", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "reserved3", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_Reserved_t(uint64_t reserved0, uint64_t reserved1, uint64_t reserved2, uint64_t reserved3) noexcept;


                    constexpr VREvent_Reserved_t(VREvent_Reserved_t const&) = default;
                    constexpr VREvent_Reserved_t(VREvent_Reserved_t&&) = default;
                    constexpr VREvent_Reserved_t& operator=(VREvent_Reserved_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Reserved_t& operator=(VREvent_Reserved_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Reserved_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_reserved0, put=__set_reserved0))  reserved0;

constexpr void __set_reserved0(uint64_t value) ;

constexpr uint64_t __get_reserved0() const;

 uint64_t __declspec(property(get=__get_reserved1, put=__set_reserved1))  reserved1;

constexpr void __set_reserved1(uint64_t value) ;

constexpr uint64_t __get_reserved1() const;

 uint64_t __declspec(property(get=__get_reserved2, put=__set_reserved2))  reserved2;

constexpr void __set_reserved2(uint64_t value) ;

constexpr uint64_t __get_reserved2() const;

 uint64_t __declspec(property(get=__get_reserved3, put=__set_reserved3))  reserved3;

constexpr void __set_reserved3(uint64_t value) ;

constexpr uint64_t __get_reserved3() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Reserved_t, "OVR.OpenVR", "VREvent_Reserved_t");
