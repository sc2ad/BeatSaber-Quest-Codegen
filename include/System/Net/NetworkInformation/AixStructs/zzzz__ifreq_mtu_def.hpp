#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu;
}
// Type: ::<ifr_name>e__FixedBuffer
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8156))
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_mtu::<ifr_name>e__FixedBuffer
struct CORDL_TYPE System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer(System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer const&) = default;
                    constexpr System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer(System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer&&) = default;
                    constexpr System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer& operator=(System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer& operator=(System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::AixStructs
// Type: System.Net.NetworkInformation.AixStructs::ifreq_mtu
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8157))
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_mtu
struct CORDL_TYPE ifreq_mtu : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _ifr_name_e__FixedBuffer = System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer;

// Ctor Parameters [CppParam { name: "ifr_name", ty: "System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "ifru_mtu", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ifreq_mtu(System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer ifr_name, int32_t ifru_mtu) noexcept;


                    constexpr ifreq_mtu(ifreq_mtu const&) = default;
                    constexpr ifreq_mtu(ifreq_mtu&&) = default;
                    constexpr ifreq_mtu& operator=(ifreq_mtu const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ifreq_mtu& operator=(ifreq_mtu&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ifreq_mtu(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer __declspec(property(get=__get_ifr_name, put=__set_ifr_name))  ifr_name;

constexpr void __set_ifr_name(System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer value) ;

constexpr System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer __get_ifr_name() const;

 int32_t __declspec(property(get=__get_ifru_mtu, put=__set_ifru_mtu))  ifru_mtu;

constexpr void __set_ifru_mtu(int32_t value) ;

constexpr int32_t __get_ifru_mtu() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_mtu___ifr_name_e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu/<ifr_name>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AixStructs::ifreq_mtu, "System.Net.NetworkInformation.AixStructs", "ifreq_mtu");
