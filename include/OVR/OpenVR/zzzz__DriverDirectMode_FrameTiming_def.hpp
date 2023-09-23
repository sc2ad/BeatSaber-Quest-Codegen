#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct DriverDirectMode_FrameTiming;
}
// Type: OVR.OpenVR::DriverDirectMode_FrameTiming
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9484))
// CS Name: OVR.OpenVR.DriverDirectMode_FrameTiming
struct CORDL_TYPE DriverDirectMode_FrameTiming : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr DriverDirectMode_FrameTiming(uint32_t m_nSize, uint32_t m_nNumFramePresents, uint32_t m_nNumMisPresented, uint32_t m_nNumDroppedFrames, uint32_t m_nReprojectionFlags) noexcept;


                    constexpr DriverDirectMode_FrameTiming(DriverDirectMode_FrameTiming const&) = default;
                    constexpr DriverDirectMode_FrameTiming(DriverDirectMode_FrameTiming&&) = default;
                    constexpr DriverDirectMode_FrameTiming& operator=(DriverDirectMode_FrameTiming const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DriverDirectMode_FrameTiming& operator=(DriverDirectMode_FrameTiming&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DriverDirectMode_FrameTiming(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_nSize, put=__set_m_nSize))  m_nSize;

constexpr void __set_m_nSize(uint32_t value) ;

constexpr uint32_t __get_m_nSize() const;

 uint32_t __declspec(property(get=__get_m_nNumFramePresents, put=__set_m_nNumFramePresents))  m_nNumFramePresents;

constexpr void __set_m_nNumFramePresents(uint32_t value) ;

constexpr uint32_t __get_m_nNumFramePresents() const;

 uint32_t __declspec(property(get=__get_m_nNumMisPresented, put=__set_m_nNumMisPresented))  m_nNumMisPresented;

constexpr void __set_m_nNumMisPresented(uint32_t value) ;

constexpr uint32_t __get_m_nNumMisPresented() const;

 uint32_t __declspec(property(get=__get_m_nNumDroppedFrames, put=__set_m_nNumDroppedFrames))  m_nNumDroppedFrames;

constexpr void __set_m_nNumDroppedFrames(uint32_t value) ;

constexpr uint32_t __get_m_nNumDroppedFrames() const;

 uint32_t __declspec(property(get=__get_m_nReprojectionFlags, put=__set_m_nReprojectionFlags))  m_nReprojectionFlags;

constexpr void __set_m_nReprojectionFlags(uint32_t value) ;

constexpr uint32_t __get_m_nReprojectionFlags() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::DriverDirectMode_FrameTiming, "OVR.OpenVR", "DriverDirectMode_FrameTiming");
