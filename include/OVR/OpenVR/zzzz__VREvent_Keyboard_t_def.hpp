#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Keyboard_t;
}
// Type: OVR.OpenVR::VREvent_Keyboard_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9457))
// CS Name: OVR.OpenVR.VREvent_Keyboard_t
struct CORDL_TYPE VREvent_Keyboard_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "cNewInput0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput4", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "uUserValue", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_Keyboard_t(uint8_t cNewInput0, uint8_t cNewInput1, uint8_t cNewInput2, uint8_t cNewInput3, uint8_t cNewInput4, uint8_t cNewInput5, uint8_t cNewInput6, uint8_t cNewInput7, uint64_t uUserValue) noexcept;


                    constexpr VREvent_Keyboard_t(VREvent_Keyboard_t const&) = default;
                    constexpr VREvent_Keyboard_t(VREvent_Keyboard_t&&) = default;
                    constexpr VREvent_Keyboard_t& operator=(VREvent_Keyboard_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Keyboard_t& operator=(VREvent_Keyboard_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Keyboard_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_cNewInput0, put=__set_cNewInput0))  cNewInput0;

constexpr void __set_cNewInput0(uint8_t value) ;

constexpr uint8_t __get_cNewInput0() const;

 uint8_t __declspec(property(get=__get_cNewInput1, put=__set_cNewInput1))  cNewInput1;

constexpr void __set_cNewInput1(uint8_t value) ;

constexpr uint8_t __get_cNewInput1() const;

 uint8_t __declspec(property(get=__get_cNewInput2, put=__set_cNewInput2))  cNewInput2;

constexpr void __set_cNewInput2(uint8_t value) ;

constexpr uint8_t __get_cNewInput2() const;

 uint8_t __declspec(property(get=__get_cNewInput3, put=__set_cNewInput3))  cNewInput3;

constexpr void __set_cNewInput3(uint8_t value) ;

constexpr uint8_t __get_cNewInput3() const;

 uint8_t __declspec(property(get=__get_cNewInput4, put=__set_cNewInput4))  cNewInput4;

constexpr void __set_cNewInput4(uint8_t value) ;

constexpr uint8_t __get_cNewInput4() const;

 uint8_t __declspec(property(get=__get_cNewInput5, put=__set_cNewInput5))  cNewInput5;

constexpr void __set_cNewInput5(uint8_t value) ;

constexpr uint8_t __get_cNewInput5() const;

 uint8_t __declspec(property(get=__get_cNewInput6, put=__set_cNewInput6))  cNewInput6;

constexpr void __set_cNewInput6(uint8_t value) ;

constexpr uint8_t __get_cNewInput6() const;

 uint8_t __declspec(property(get=__get_cNewInput7, put=__set_cNewInput7))  cNewInput7;

constexpr void __set_cNewInput7(uint8_t value) ;

constexpr uint8_t __get_cNewInput7() const;

 uint64_t __declspec(property(get=__get_uUserValue, put=__set_uUserValue))  uUserValue;

constexpr void __set_uUserValue(uint64_t value) ;

constexpr uint64_t __get_uUserValue() const;


// Properties

 ::StringW __declspec(property(get=get_cNewInput))  cNewInput;


// Methods

/// @brief Method get_cNewInput addr 0x2668de8 size 0xec virtual false final false
 ::StringW get_cNewInput() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Keyboard_t, "OVR.OpenVR", "VREvent_Keyboard_t");
