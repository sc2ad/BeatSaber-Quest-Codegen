#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net::NetworkInformation::AixStructs {
struct System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_flags;
}
// Type: ::<ifr_name>e__FixedBuffer
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8154))
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_flags::<ifr_name>e__FixedBuffer
struct CORDL_TYPE System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer(System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer const&) = default;
                    constexpr System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer(System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer&&) = default;
                    constexpr System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer& operator=(System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer& operator=(System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
// Type: System.Net.NetworkInformation.AixStructs::ifreq_flags
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8155))
// CS Name: System.Net.NetworkInformation.AixStructs.ifreq_flags
struct CORDL_TYPE ifreq_flags : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _ifr_name_e__FixedBuffer = System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer;

// Ctor Parameters [CppParam { name: "ifr_name", ty: "System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "ifru_flags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ifreq_flags(System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer ifr_name, uint32_t ifru_flags) noexcept;


                    constexpr ifreq_flags(ifreq_flags const&) = default;
                    constexpr ifreq_flags(ifreq_flags&&) = default;
                    constexpr ifreq_flags& operator=(ifreq_flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ifreq_flags& operator=(ifreq_flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ifreq_flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer __declspec(property(get=__get_ifr_name, put=__set_ifr_name))  ifr_name;

constexpr void __set_ifr_name(System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer value) ;

constexpr System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer __get_ifr_name() const;

 uint32_t __declspec(property(get=__get_ifru_flags, put=__set_ifru_flags))  ifru_flags;

constexpr void __set_ifru_flags(uint32_t value) ;

constexpr uint32_t __get_ifru_flags() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AixStructs::System__Net__NetworkInformation__AixStructs__ifreq_flags___ifr_name_e__FixedBuffer, "System.Net.NetworkInformation.AixStructs", "ifreq_flags/<ifr_name>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AixStructs::ifreq_flags, "System.Net.NetworkInformation.AixStructs", "ifreq_flags");
