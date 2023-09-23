#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct NotificationBitmap_t;
}
// Type: OVR.OpenVR::NotificationBitmap_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9501))
// CS Name: OVR.OpenVR.NotificationBitmap_t
struct CORDL_TYPE NotificationBitmap_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_pImageData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_nWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nBytesPerPixel", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NotificationBitmap_t(::cordl_internals::intptr_t m_pImageData, int32_t m_nWidth, int32_t m_nHeight, int32_t m_nBytesPerPixel) noexcept;


                    constexpr NotificationBitmap_t(NotificationBitmap_t const&) = default;
                    constexpr NotificationBitmap_t(NotificationBitmap_t&&) = default;
                    constexpr NotificationBitmap_t& operator=(NotificationBitmap_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NotificationBitmap_t& operator=(NotificationBitmap_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NotificationBitmap_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_pImageData, put=__set_m_pImageData))  m_pImageData;

constexpr void __set_m_pImageData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_pImageData() const;

 int32_t __declspec(property(get=__get_m_nWidth, put=__set_m_nWidth))  m_nWidth;

constexpr void __set_m_nWidth(int32_t value) ;

constexpr int32_t __get_m_nWidth() const;

 int32_t __declspec(property(get=__get_m_nHeight, put=__set_m_nHeight))  m_nHeight;

constexpr void __set_m_nHeight(int32_t value) ;

constexpr int32_t __get_m_nHeight() const;

 int32_t __declspec(property(get=__get_m_nBytesPerPixel, put=__set_m_nBytesPerPixel))  m_nBytesPerPixel;

constexpr void __set_m_nBytesPerPixel(int32_t value) ;

constexpr int32_t __get_m_nBytesPerPixel() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::NotificationBitmap_t, "OVR.OpenVR", "NotificationBitmap_t");
