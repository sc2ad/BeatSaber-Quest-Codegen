#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct InputOriginInfo_t;
}
// Type: OVR.OpenVR::InputOriginInfo_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9507))
// CS Name: OVR.OpenVR.InputOriginInfo_t
struct CORDL_TYPE InputOriginInfo_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "devicePath", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName4", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName8", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName9", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName10", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName11", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName12", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName13", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName14", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName15", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName16", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName17", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName18", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName19", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName20", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName21", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName22", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName23", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName24", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName25", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName26", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName27", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName28", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName29", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName30", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName31", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName32", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName33", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName34", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName35", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName36", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName37", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName38", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName39", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName40", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName41", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName42", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName43", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName44", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName45", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName46", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName47", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName48", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName49", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName50", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName51", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName52", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName53", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName54", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName55", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName56", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName57", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName58", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName59", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName60", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName61", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName62", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName63", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName64", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName65", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName66", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName67", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName68", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName69", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName70", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName71", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName72", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName73", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName74", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName75", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName76", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName77", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName78", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName79", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName80", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName81", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName82", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName83", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName84", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName85", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName86", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName87", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName88", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName89", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName90", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName91", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName92", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName93", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName94", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName95", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName96", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName97", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName98", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName99", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName100", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName101", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName102", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName103", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName104", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName105", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName106", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName107", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName108", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName109", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName110", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName111", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName112", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName113", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName114", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName115", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName116", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName117", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName118", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName119", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName120", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName121", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName122", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName123", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName124", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName125", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName126", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName127", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr InputOriginInfo_t(uint64_t devicePath, uint32_t trackedDeviceIndex, uint8_t rchRenderModelComponentName0, uint8_t rchRenderModelComponentName1, uint8_t rchRenderModelComponentName2, uint8_t rchRenderModelComponentName3, uint8_t rchRenderModelComponentName4, uint8_t rchRenderModelComponentName5, uint8_t rchRenderModelComponentName6, uint8_t rchRenderModelComponentName7, uint8_t rchRenderModelComponentName8, uint8_t rchRenderModelComponentName9, uint8_t rchRenderModelComponentName10, uint8_t rchRenderModelComponentName11, uint8_t rchRenderModelComponentName12, uint8_t rchRenderModelComponentName13, uint8_t rchRenderModelComponentName14, uint8_t rchRenderModelComponentName15, uint8_t rchRenderModelComponentName16, uint8_t rchRenderModelComponentName17, uint8_t rchRenderModelComponentName18, uint8_t rchRenderModelComponentName19, uint8_t rchRenderModelComponentName20, uint8_t rchRenderModelComponentName21, uint8_t rchRenderModelComponentName22, uint8_t rchRenderModelComponentName23, uint8_t rchRenderModelComponentName24, uint8_t rchRenderModelComponentName25, uint8_t rchRenderModelComponentName26, uint8_t rchRenderModelComponentName27, uint8_t rchRenderModelComponentName28, uint8_t rchRenderModelComponentName29, uint8_t rchRenderModelComponentName30, uint8_t rchRenderModelComponentName31, uint8_t rchRenderModelComponentName32, uint8_t rchRenderModelComponentName33, uint8_t rchRenderModelComponentName34, uint8_t rchRenderModelComponentName35, uint8_t rchRenderModelComponentName36, uint8_t rchRenderModelComponentName37, uint8_t rchRenderModelComponentName38, uint8_t rchRenderModelComponentName39, uint8_t rchRenderModelComponentName40, uint8_t rchRenderModelComponentName41, uint8_t rchRenderModelComponentName42, uint8_t rchRenderModelComponentName43, uint8_t rchRenderModelComponentName44, uint8_t rchRenderModelComponentName45, uint8_t rchRenderModelComponentName46, uint8_t rchRenderModelComponentName47, uint8_t rchRenderModelComponentName48, uint8_t rchRenderModelComponentName49, uint8_t rchRenderModelComponentName50, uint8_t rchRenderModelComponentName51, uint8_t rchRenderModelComponentName52, uint8_t rchRenderModelComponentName53, uint8_t rchRenderModelComponentName54, uint8_t rchRenderModelComponentName55, uint8_t rchRenderModelComponentName56, uint8_t rchRenderModelComponentName57, uint8_t rchRenderModelComponentName58, uint8_t rchRenderModelComponentName59, uint8_t rchRenderModelComponentName60, uint8_t rchRenderModelComponentName61, uint8_t rchRenderModelComponentName62, uint8_t rchRenderModelComponentName63, uint8_t rchRenderModelComponentName64, uint8_t rchRenderModelComponentName65, uint8_t rchRenderModelComponentName66, uint8_t rchRenderModelComponentName67, uint8_t rchRenderModelComponentName68, uint8_t rchRenderModelComponentName69, uint8_t rchRenderModelComponentName70, uint8_t rchRenderModelComponentName71, uint8_t rchRenderModelComponentName72, uint8_t rchRenderModelComponentName73, uint8_t rchRenderModelComponentName74, uint8_t rchRenderModelComponentName75, uint8_t rchRenderModelComponentName76, uint8_t rchRenderModelComponentName77, uint8_t rchRenderModelComponentName78, uint8_t rchRenderModelComponentName79, uint8_t rchRenderModelComponentName80, uint8_t rchRenderModelComponentName81, uint8_t rchRenderModelComponentName82, uint8_t rchRenderModelComponentName83, uint8_t rchRenderModelComponentName84, uint8_t rchRenderModelComponentName85, uint8_t rchRenderModelComponentName86, uint8_t rchRenderModelComponentName87, uint8_t rchRenderModelComponentName88, uint8_t rchRenderModelComponentName89, uint8_t rchRenderModelComponentName90, uint8_t rchRenderModelComponentName91, uint8_t rchRenderModelComponentName92, uint8_t rchRenderModelComponentName93, uint8_t rchRenderModelComponentName94, uint8_t rchRenderModelComponentName95, uint8_t rchRenderModelComponentName96, uint8_t rchRenderModelComponentName97, uint8_t rchRenderModelComponentName98, uint8_t rchRenderModelComponentName99, uint8_t rchRenderModelComponentName100, uint8_t rchRenderModelComponentName101, uint8_t rchRenderModelComponentName102, uint8_t rchRenderModelComponentName103, uint8_t rchRenderModelComponentName104, uint8_t rchRenderModelComponentName105, uint8_t rchRenderModelComponentName106, uint8_t rchRenderModelComponentName107, uint8_t rchRenderModelComponentName108, uint8_t rchRenderModelComponentName109, uint8_t rchRenderModelComponentName110, uint8_t rchRenderModelComponentName111, uint8_t rchRenderModelComponentName112, uint8_t rchRenderModelComponentName113, uint8_t rchRenderModelComponentName114, uint8_t rchRenderModelComponentName115, uint8_t rchRenderModelComponentName116, uint8_t rchRenderModelComponentName117, uint8_t rchRenderModelComponentName118, uint8_t rchRenderModelComponentName119, uint8_t rchRenderModelComponentName120, uint8_t rchRenderModelComponentName121, uint8_t rchRenderModelComponentName122, uint8_t rchRenderModelComponentName123, uint8_t rchRenderModelComponentName124, uint8_t rchRenderModelComponentName125, uint8_t rchRenderModelComponentName126, uint8_t rchRenderModelComponentName127) noexcept;


                    constexpr InputOriginInfo_t(InputOriginInfo_t const&) = default;
                    constexpr InputOriginInfo_t(InputOriginInfo_t&&) = default;
                    constexpr InputOriginInfo_t& operator=(InputOriginInfo_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputOriginInfo_t& operator=(InputOriginInfo_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputOriginInfo_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_devicePath, put=__set_devicePath))  devicePath;

constexpr void __set_devicePath(uint64_t value) ;

constexpr uint64_t __get_devicePath() const;

 uint32_t __declspec(property(get=__get_trackedDeviceIndex, put=__set_trackedDeviceIndex))  trackedDeviceIndex;

constexpr void __set_trackedDeviceIndex(uint32_t value) ;

constexpr uint32_t __get_trackedDeviceIndex() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName0, put=__set_rchRenderModelComponentName0))  rchRenderModelComponentName0;

constexpr void __set_rchRenderModelComponentName0(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName0() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName1, put=__set_rchRenderModelComponentName1))  rchRenderModelComponentName1;

constexpr void __set_rchRenderModelComponentName1(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName1() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName2, put=__set_rchRenderModelComponentName2))  rchRenderModelComponentName2;

constexpr void __set_rchRenderModelComponentName2(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName2() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName3, put=__set_rchRenderModelComponentName3))  rchRenderModelComponentName3;

constexpr void __set_rchRenderModelComponentName3(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName3() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName4, put=__set_rchRenderModelComponentName4))  rchRenderModelComponentName4;

constexpr void __set_rchRenderModelComponentName4(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName4() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName5, put=__set_rchRenderModelComponentName5))  rchRenderModelComponentName5;

constexpr void __set_rchRenderModelComponentName5(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName5() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName6, put=__set_rchRenderModelComponentName6))  rchRenderModelComponentName6;

constexpr void __set_rchRenderModelComponentName6(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName6() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName7, put=__set_rchRenderModelComponentName7))  rchRenderModelComponentName7;

constexpr void __set_rchRenderModelComponentName7(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName7() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName8, put=__set_rchRenderModelComponentName8))  rchRenderModelComponentName8;

constexpr void __set_rchRenderModelComponentName8(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName8() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName9, put=__set_rchRenderModelComponentName9))  rchRenderModelComponentName9;

constexpr void __set_rchRenderModelComponentName9(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName9() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName10, put=__set_rchRenderModelComponentName10))  rchRenderModelComponentName10;

constexpr void __set_rchRenderModelComponentName10(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName10() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName11, put=__set_rchRenderModelComponentName11))  rchRenderModelComponentName11;

constexpr void __set_rchRenderModelComponentName11(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName11() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName12, put=__set_rchRenderModelComponentName12))  rchRenderModelComponentName12;

constexpr void __set_rchRenderModelComponentName12(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName12() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName13, put=__set_rchRenderModelComponentName13))  rchRenderModelComponentName13;

constexpr void __set_rchRenderModelComponentName13(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName13() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName14, put=__set_rchRenderModelComponentName14))  rchRenderModelComponentName14;

constexpr void __set_rchRenderModelComponentName14(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName14() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName15, put=__set_rchRenderModelComponentName15))  rchRenderModelComponentName15;

constexpr void __set_rchRenderModelComponentName15(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName15() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName16, put=__set_rchRenderModelComponentName16))  rchRenderModelComponentName16;

constexpr void __set_rchRenderModelComponentName16(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName16() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName17, put=__set_rchRenderModelComponentName17))  rchRenderModelComponentName17;

constexpr void __set_rchRenderModelComponentName17(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName17() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName18, put=__set_rchRenderModelComponentName18))  rchRenderModelComponentName18;

constexpr void __set_rchRenderModelComponentName18(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName18() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName19, put=__set_rchRenderModelComponentName19))  rchRenderModelComponentName19;

constexpr void __set_rchRenderModelComponentName19(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName19() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName20, put=__set_rchRenderModelComponentName20))  rchRenderModelComponentName20;

constexpr void __set_rchRenderModelComponentName20(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName20() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName21, put=__set_rchRenderModelComponentName21))  rchRenderModelComponentName21;

constexpr void __set_rchRenderModelComponentName21(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName21() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName22, put=__set_rchRenderModelComponentName22))  rchRenderModelComponentName22;

constexpr void __set_rchRenderModelComponentName22(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName22() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName23, put=__set_rchRenderModelComponentName23))  rchRenderModelComponentName23;

constexpr void __set_rchRenderModelComponentName23(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName23() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName24, put=__set_rchRenderModelComponentName24))  rchRenderModelComponentName24;

constexpr void __set_rchRenderModelComponentName24(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName24() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName25, put=__set_rchRenderModelComponentName25))  rchRenderModelComponentName25;

constexpr void __set_rchRenderModelComponentName25(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName25() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName26, put=__set_rchRenderModelComponentName26))  rchRenderModelComponentName26;

constexpr void __set_rchRenderModelComponentName26(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName26() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName27, put=__set_rchRenderModelComponentName27))  rchRenderModelComponentName27;

constexpr void __set_rchRenderModelComponentName27(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName27() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName28, put=__set_rchRenderModelComponentName28))  rchRenderModelComponentName28;

constexpr void __set_rchRenderModelComponentName28(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName28() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName29, put=__set_rchRenderModelComponentName29))  rchRenderModelComponentName29;

constexpr void __set_rchRenderModelComponentName29(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName29() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName30, put=__set_rchRenderModelComponentName30))  rchRenderModelComponentName30;

constexpr void __set_rchRenderModelComponentName30(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName30() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName31, put=__set_rchRenderModelComponentName31))  rchRenderModelComponentName31;

constexpr void __set_rchRenderModelComponentName31(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName31() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName32, put=__set_rchRenderModelComponentName32))  rchRenderModelComponentName32;

constexpr void __set_rchRenderModelComponentName32(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName32() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName33, put=__set_rchRenderModelComponentName33))  rchRenderModelComponentName33;

constexpr void __set_rchRenderModelComponentName33(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName33() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName34, put=__set_rchRenderModelComponentName34))  rchRenderModelComponentName34;

constexpr void __set_rchRenderModelComponentName34(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName34() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName35, put=__set_rchRenderModelComponentName35))  rchRenderModelComponentName35;

constexpr void __set_rchRenderModelComponentName35(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName35() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName36, put=__set_rchRenderModelComponentName36))  rchRenderModelComponentName36;

constexpr void __set_rchRenderModelComponentName36(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName36() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName37, put=__set_rchRenderModelComponentName37))  rchRenderModelComponentName37;

constexpr void __set_rchRenderModelComponentName37(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName37() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName38, put=__set_rchRenderModelComponentName38))  rchRenderModelComponentName38;

constexpr void __set_rchRenderModelComponentName38(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName38() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName39, put=__set_rchRenderModelComponentName39))  rchRenderModelComponentName39;

constexpr void __set_rchRenderModelComponentName39(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName39() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName40, put=__set_rchRenderModelComponentName40))  rchRenderModelComponentName40;

constexpr void __set_rchRenderModelComponentName40(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName40() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName41, put=__set_rchRenderModelComponentName41))  rchRenderModelComponentName41;

constexpr void __set_rchRenderModelComponentName41(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName41() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName42, put=__set_rchRenderModelComponentName42))  rchRenderModelComponentName42;

constexpr void __set_rchRenderModelComponentName42(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName42() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName43, put=__set_rchRenderModelComponentName43))  rchRenderModelComponentName43;

constexpr void __set_rchRenderModelComponentName43(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName43() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName44, put=__set_rchRenderModelComponentName44))  rchRenderModelComponentName44;

constexpr void __set_rchRenderModelComponentName44(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName44() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName45, put=__set_rchRenderModelComponentName45))  rchRenderModelComponentName45;

constexpr void __set_rchRenderModelComponentName45(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName45() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName46, put=__set_rchRenderModelComponentName46))  rchRenderModelComponentName46;

constexpr void __set_rchRenderModelComponentName46(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName46() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName47, put=__set_rchRenderModelComponentName47))  rchRenderModelComponentName47;

constexpr void __set_rchRenderModelComponentName47(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName47() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName48, put=__set_rchRenderModelComponentName48))  rchRenderModelComponentName48;

constexpr void __set_rchRenderModelComponentName48(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName48() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName49, put=__set_rchRenderModelComponentName49))  rchRenderModelComponentName49;

constexpr void __set_rchRenderModelComponentName49(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName49() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName50, put=__set_rchRenderModelComponentName50))  rchRenderModelComponentName50;

constexpr void __set_rchRenderModelComponentName50(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName50() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName51, put=__set_rchRenderModelComponentName51))  rchRenderModelComponentName51;

constexpr void __set_rchRenderModelComponentName51(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName51() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName52, put=__set_rchRenderModelComponentName52))  rchRenderModelComponentName52;

constexpr void __set_rchRenderModelComponentName52(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName52() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName53, put=__set_rchRenderModelComponentName53))  rchRenderModelComponentName53;

constexpr void __set_rchRenderModelComponentName53(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName53() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName54, put=__set_rchRenderModelComponentName54))  rchRenderModelComponentName54;

constexpr void __set_rchRenderModelComponentName54(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName54() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName55, put=__set_rchRenderModelComponentName55))  rchRenderModelComponentName55;

constexpr void __set_rchRenderModelComponentName55(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName55() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName56, put=__set_rchRenderModelComponentName56))  rchRenderModelComponentName56;

constexpr void __set_rchRenderModelComponentName56(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName56() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName57, put=__set_rchRenderModelComponentName57))  rchRenderModelComponentName57;

constexpr void __set_rchRenderModelComponentName57(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName57() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName58, put=__set_rchRenderModelComponentName58))  rchRenderModelComponentName58;

constexpr void __set_rchRenderModelComponentName58(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName58() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName59, put=__set_rchRenderModelComponentName59))  rchRenderModelComponentName59;

constexpr void __set_rchRenderModelComponentName59(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName59() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName60, put=__set_rchRenderModelComponentName60))  rchRenderModelComponentName60;

constexpr void __set_rchRenderModelComponentName60(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName60() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName61, put=__set_rchRenderModelComponentName61))  rchRenderModelComponentName61;

constexpr void __set_rchRenderModelComponentName61(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName61() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName62, put=__set_rchRenderModelComponentName62))  rchRenderModelComponentName62;

constexpr void __set_rchRenderModelComponentName62(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName62() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName63, put=__set_rchRenderModelComponentName63))  rchRenderModelComponentName63;

constexpr void __set_rchRenderModelComponentName63(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName63() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName64, put=__set_rchRenderModelComponentName64))  rchRenderModelComponentName64;

constexpr void __set_rchRenderModelComponentName64(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName64() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName65, put=__set_rchRenderModelComponentName65))  rchRenderModelComponentName65;

constexpr void __set_rchRenderModelComponentName65(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName65() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName66, put=__set_rchRenderModelComponentName66))  rchRenderModelComponentName66;

constexpr void __set_rchRenderModelComponentName66(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName66() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName67, put=__set_rchRenderModelComponentName67))  rchRenderModelComponentName67;

constexpr void __set_rchRenderModelComponentName67(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName67() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName68, put=__set_rchRenderModelComponentName68))  rchRenderModelComponentName68;

constexpr void __set_rchRenderModelComponentName68(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName68() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName69, put=__set_rchRenderModelComponentName69))  rchRenderModelComponentName69;

constexpr void __set_rchRenderModelComponentName69(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName69() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName70, put=__set_rchRenderModelComponentName70))  rchRenderModelComponentName70;

constexpr void __set_rchRenderModelComponentName70(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName70() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName71, put=__set_rchRenderModelComponentName71))  rchRenderModelComponentName71;

constexpr void __set_rchRenderModelComponentName71(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName71() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName72, put=__set_rchRenderModelComponentName72))  rchRenderModelComponentName72;

constexpr void __set_rchRenderModelComponentName72(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName72() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName73, put=__set_rchRenderModelComponentName73))  rchRenderModelComponentName73;

constexpr void __set_rchRenderModelComponentName73(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName73() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName74, put=__set_rchRenderModelComponentName74))  rchRenderModelComponentName74;

constexpr void __set_rchRenderModelComponentName74(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName74() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName75, put=__set_rchRenderModelComponentName75))  rchRenderModelComponentName75;

constexpr void __set_rchRenderModelComponentName75(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName75() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName76, put=__set_rchRenderModelComponentName76))  rchRenderModelComponentName76;

constexpr void __set_rchRenderModelComponentName76(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName76() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName77, put=__set_rchRenderModelComponentName77))  rchRenderModelComponentName77;

constexpr void __set_rchRenderModelComponentName77(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName77() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName78, put=__set_rchRenderModelComponentName78))  rchRenderModelComponentName78;

constexpr void __set_rchRenderModelComponentName78(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName78() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName79, put=__set_rchRenderModelComponentName79))  rchRenderModelComponentName79;

constexpr void __set_rchRenderModelComponentName79(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName79() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName80, put=__set_rchRenderModelComponentName80))  rchRenderModelComponentName80;

constexpr void __set_rchRenderModelComponentName80(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName80() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName81, put=__set_rchRenderModelComponentName81))  rchRenderModelComponentName81;

constexpr void __set_rchRenderModelComponentName81(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName81() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName82, put=__set_rchRenderModelComponentName82))  rchRenderModelComponentName82;

constexpr void __set_rchRenderModelComponentName82(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName82() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName83, put=__set_rchRenderModelComponentName83))  rchRenderModelComponentName83;

constexpr void __set_rchRenderModelComponentName83(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName83() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName84, put=__set_rchRenderModelComponentName84))  rchRenderModelComponentName84;

constexpr void __set_rchRenderModelComponentName84(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName84() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName85, put=__set_rchRenderModelComponentName85))  rchRenderModelComponentName85;

constexpr void __set_rchRenderModelComponentName85(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName85() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName86, put=__set_rchRenderModelComponentName86))  rchRenderModelComponentName86;

constexpr void __set_rchRenderModelComponentName86(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName86() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName87, put=__set_rchRenderModelComponentName87))  rchRenderModelComponentName87;

constexpr void __set_rchRenderModelComponentName87(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName87() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName88, put=__set_rchRenderModelComponentName88))  rchRenderModelComponentName88;

constexpr void __set_rchRenderModelComponentName88(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName88() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName89, put=__set_rchRenderModelComponentName89))  rchRenderModelComponentName89;

constexpr void __set_rchRenderModelComponentName89(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName89() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName90, put=__set_rchRenderModelComponentName90))  rchRenderModelComponentName90;

constexpr void __set_rchRenderModelComponentName90(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName90() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName91, put=__set_rchRenderModelComponentName91))  rchRenderModelComponentName91;

constexpr void __set_rchRenderModelComponentName91(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName91() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName92, put=__set_rchRenderModelComponentName92))  rchRenderModelComponentName92;

constexpr void __set_rchRenderModelComponentName92(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName92() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName93, put=__set_rchRenderModelComponentName93))  rchRenderModelComponentName93;

constexpr void __set_rchRenderModelComponentName93(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName93() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName94, put=__set_rchRenderModelComponentName94))  rchRenderModelComponentName94;

constexpr void __set_rchRenderModelComponentName94(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName94() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName95, put=__set_rchRenderModelComponentName95))  rchRenderModelComponentName95;

constexpr void __set_rchRenderModelComponentName95(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName95() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName96, put=__set_rchRenderModelComponentName96))  rchRenderModelComponentName96;

constexpr void __set_rchRenderModelComponentName96(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName96() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName97, put=__set_rchRenderModelComponentName97))  rchRenderModelComponentName97;

constexpr void __set_rchRenderModelComponentName97(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName97() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName98, put=__set_rchRenderModelComponentName98))  rchRenderModelComponentName98;

constexpr void __set_rchRenderModelComponentName98(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName98() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName99, put=__set_rchRenderModelComponentName99))  rchRenderModelComponentName99;

constexpr void __set_rchRenderModelComponentName99(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName99() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName100, put=__set_rchRenderModelComponentName100))  rchRenderModelComponentName100;

constexpr void __set_rchRenderModelComponentName100(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName100() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName101, put=__set_rchRenderModelComponentName101))  rchRenderModelComponentName101;

constexpr void __set_rchRenderModelComponentName101(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName101() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName102, put=__set_rchRenderModelComponentName102))  rchRenderModelComponentName102;

constexpr void __set_rchRenderModelComponentName102(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName102() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName103, put=__set_rchRenderModelComponentName103))  rchRenderModelComponentName103;

constexpr void __set_rchRenderModelComponentName103(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName103() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName104, put=__set_rchRenderModelComponentName104))  rchRenderModelComponentName104;

constexpr void __set_rchRenderModelComponentName104(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName104() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName105, put=__set_rchRenderModelComponentName105))  rchRenderModelComponentName105;

constexpr void __set_rchRenderModelComponentName105(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName105() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName106, put=__set_rchRenderModelComponentName106))  rchRenderModelComponentName106;

constexpr void __set_rchRenderModelComponentName106(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName106() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName107, put=__set_rchRenderModelComponentName107))  rchRenderModelComponentName107;

constexpr void __set_rchRenderModelComponentName107(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName107() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName108, put=__set_rchRenderModelComponentName108))  rchRenderModelComponentName108;

constexpr void __set_rchRenderModelComponentName108(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName108() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName109, put=__set_rchRenderModelComponentName109))  rchRenderModelComponentName109;

constexpr void __set_rchRenderModelComponentName109(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName109() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName110, put=__set_rchRenderModelComponentName110))  rchRenderModelComponentName110;

constexpr void __set_rchRenderModelComponentName110(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName110() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName111, put=__set_rchRenderModelComponentName111))  rchRenderModelComponentName111;

constexpr void __set_rchRenderModelComponentName111(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName111() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName112, put=__set_rchRenderModelComponentName112))  rchRenderModelComponentName112;

constexpr void __set_rchRenderModelComponentName112(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName112() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName113, put=__set_rchRenderModelComponentName113))  rchRenderModelComponentName113;

constexpr void __set_rchRenderModelComponentName113(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName113() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName114, put=__set_rchRenderModelComponentName114))  rchRenderModelComponentName114;

constexpr void __set_rchRenderModelComponentName114(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName114() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName115, put=__set_rchRenderModelComponentName115))  rchRenderModelComponentName115;

constexpr void __set_rchRenderModelComponentName115(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName115() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName116, put=__set_rchRenderModelComponentName116))  rchRenderModelComponentName116;

constexpr void __set_rchRenderModelComponentName116(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName116() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName117, put=__set_rchRenderModelComponentName117))  rchRenderModelComponentName117;

constexpr void __set_rchRenderModelComponentName117(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName117() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName118, put=__set_rchRenderModelComponentName118))  rchRenderModelComponentName118;

constexpr void __set_rchRenderModelComponentName118(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName118() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName119, put=__set_rchRenderModelComponentName119))  rchRenderModelComponentName119;

constexpr void __set_rchRenderModelComponentName119(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName119() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName120, put=__set_rchRenderModelComponentName120))  rchRenderModelComponentName120;

constexpr void __set_rchRenderModelComponentName120(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName120() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName121, put=__set_rchRenderModelComponentName121))  rchRenderModelComponentName121;

constexpr void __set_rchRenderModelComponentName121(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName121() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName122, put=__set_rchRenderModelComponentName122))  rchRenderModelComponentName122;

constexpr void __set_rchRenderModelComponentName122(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName122() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName123, put=__set_rchRenderModelComponentName123))  rchRenderModelComponentName123;

constexpr void __set_rchRenderModelComponentName123(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName123() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName124, put=__set_rchRenderModelComponentName124))  rchRenderModelComponentName124;

constexpr void __set_rchRenderModelComponentName124(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName124() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName125, put=__set_rchRenderModelComponentName125))  rchRenderModelComponentName125;

constexpr void __set_rchRenderModelComponentName125(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName125() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName126, put=__set_rchRenderModelComponentName126))  rchRenderModelComponentName126;

constexpr void __set_rchRenderModelComponentName126(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName126() const;

 uint8_t __declspec(property(get=__get_rchRenderModelComponentName127, put=__set_rchRenderModelComponentName127))  rchRenderModelComponentName127;

constexpr void __set_rchRenderModelComponentName127(uint8_t value) ;

constexpr uint8_t __get_rchRenderModelComponentName127() const;


// Properties

 ::StringW __declspec(property(get=get_rchRenderModelComponentName))  rchRenderModelComponentName;


// Methods

/// @brief Method get_rchRenderModelComponentName addr 0x2668f8c size 0x86c virtual false final false
 ::StringW get_rchRenderModelComponentName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputOriginInfo_t, "OVR.OpenVR", "InputOriginInfo_t");
