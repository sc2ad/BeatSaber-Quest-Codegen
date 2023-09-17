#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Chaperone_t;
}
// Type: OVR.OpenVR::VREvent_Chaperone_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9459))
// CS Name: OVR.OpenVR.VREvent_Chaperone_t
struct CORDL_TYPE VREvent_Chaperone_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_nPreviousUniverse", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_nCurrentUniverse", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_Chaperone_t(uint64_t m_nPreviousUniverse, uint64_t m_nCurrentUniverse) noexcept;


                    constexpr VREvent_Chaperone_t(VREvent_Chaperone_t const&) = default;
                    constexpr VREvent_Chaperone_t(VREvent_Chaperone_t&&) = default;
                    constexpr VREvent_Chaperone_t& operator=(VREvent_Chaperone_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Chaperone_t& operator=(VREvent_Chaperone_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Chaperone_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_m_nPreviousUniverse, put=__set_m_nPreviousUniverse))  m_nPreviousUniverse;

constexpr void __set_m_nPreviousUniverse(uint64_t value) ;

constexpr uint64_t __get_m_nPreviousUniverse() const;

 uint64_t __declspec(property(get=__get_m_nCurrentUniverse, put=__set_m_nCurrentUniverse))  m_nCurrentUniverse;

constexpr void __set_m_nCurrentUniverse(uint64_t value) ;

constexpr uint64_t __get_m_nCurrentUniverse() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Chaperone_t, "OVR.OpenVR", "VREvent_Chaperone_t");
