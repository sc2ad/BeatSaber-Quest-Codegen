#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
// Type: OVR.OpenVR::Compositor_CumulativeStats
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9488))
// CS Name: OVR.OpenVR.Compositor_CumulativeStats
struct CORDL_TYPE Compositor_CumulativeStats : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_nPid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresentsOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFramesOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresentsLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFramesLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresentsTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFramesTimedOut", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Compositor_CumulativeStats(uint32_t m_nPid, uint32_t m_nNumFramePresents, uint32_t m_nNumDroppedFrames, uint32_t m_nNumReprojectedFrames, uint32_t m_nNumFramePresentsOnStartup, uint32_t m_nNumDroppedFramesOnStartup, uint32_t m_nNumReprojectedFramesOnStartup, uint32_t m_nNumLoading, uint32_t m_nNumFramePresentsLoading, uint32_t m_nNumDroppedFramesLoading, uint32_t m_nNumReprojectedFramesLoading, uint32_t m_nNumTimedOut, uint32_t m_nNumFramePresentsTimedOut, uint32_t m_nNumDroppedFramesTimedOut, uint32_t m_nNumReprojectedFramesTimedOut) noexcept;


                    constexpr Compositor_CumulativeStats(Compositor_CumulativeStats const&) = default;
                    constexpr Compositor_CumulativeStats(Compositor_CumulativeStats&&) = default;
                    constexpr Compositor_CumulativeStats& operator=(Compositor_CumulativeStats const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Compositor_CumulativeStats& operator=(Compositor_CumulativeStats&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x3c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Compositor_CumulativeStats(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_nPid, put=__set_m_nPid))  m_nPid;

constexpr void __set_m_nPid(uint32_t value) ;

constexpr uint32_t __get_m_nPid() const;

 uint32_t __declspec(property(get=__get_m_nNumFramePresents, put=__set_m_nNumFramePresents))  m_nNumFramePresents;

constexpr void __set_m_nNumFramePresents(uint32_t value) ;

constexpr uint32_t __get_m_nNumFramePresents() const;

 uint32_t __declspec(property(get=__get_m_nNumDroppedFrames, put=__set_m_nNumDroppedFrames))  m_nNumDroppedFrames;

constexpr void __set_m_nNumDroppedFrames(uint32_t value) ;

constexpr uint32_t __get_m_nNumDroppedFrames() const;

 uint32_t __declspec(property(get=__get_m_nNumReprojectedFrames, put=__set_m_nNumReprojectedFrames))  m_nNumReprojectedFrames;

constexpr void __set_m_nNumReprojectedFrames(uint32_t value) ;

constexpr uint32_t __get_m_nNumReprojectedFrames() const;

 uint32_t __declspec(property(get=__get_m_nNumFramePresentsOnStartup, put=__set_m_nNumFramePresentsOnStartup))  m_nNumFramePresentsOnStartup;

constexpr void __set_m_nNumFramePresentsOnStartup(uint32_t value) ;

constexpr uint32_t __get_m_nNumFramePresentsOnStartup() const;

 uint32_t __declspec(property(get=__get_m_nNumDroppedFramesOnStartup, put=__set_m_nNumDroppedFramesOnStartup))  m_nNumDroppedFramesOnStartup;

constexpr void __set_m_nNumDroppedFramesOnStartup(uint32_t value) ;

constexpr uint32_t __get_m_nNumDroppedFramesOnStartup() const;

 uint32_t __declspec(property(get=__get_m_nNumReprojectedFramesOnStartup, put=__set_m_nNumReprojectedFramesOnStartup))  m_nNumReprojectedFramesOnStartup;

constexpr void __set_m_nNumReprojectedFramesOnStartup(uint32_t value) ;

constexpr uint32_t __get_m_nNumReprojectedFramesOnStartup() const;

 uint32_t __declspec(property(get=__get_m_nNumLoading, put=__set_m_nNumLoading))  m_nNumLoading;

constexpr void __set_m_nNumLoading(uint32_t value) ;

constexpr uint32_t __get_m_nNumLoading() const;

 uint32_t __declspec(property(get=__get_m_nNumFramePresentsLoading, put=__set_m_nNumFramePresentsLoading))  m_nNumFramePresentsLoading;

constexpr void __set_m_nNumFramePresentsLoading(uint32_t value) ;

constexpr uint32_t __get_m_nNumFramePresentsLoading() const;

 uint32_t __declspec(property(get=__get_m_nNumDroppedFramesLoading, put=__set_m_nNumDroppedFramesLoading))  m_nNumDroppedFramesLoading;

constexpr void __set_m_nNumDroppedFramesLoading(uint32_t value) ;

constexpr uint32_t __get_m_nNumDroppedFramesLoading() const;

 uint32_t __declspec(property(get=__get_m_nNumReprojectedFramesLoading, put=__set_m_nNumReprojectedFramesLoading))  m_nNumReprojectedFramesLoading;

constexpr void __set_m_nNumReprojectedFramesLoading(uint32_t value) ;

constexpr uint32_t __get_m_nNumReprojectedFramesLoading() const;

 uint32_t __declspec(property(get=__get_m_nNumTimedOut, put=__set_m_nNumTimedOut))  m_nNumTimedOut;

constexpr void __set_m_nNumTimedOut(uint32_t value) ;

constexpr uint32_t __get_m_nNumTimedOut() const;

 uint32_t __declspec(property(get=__get_m_nNumFramePresentsTimedOut, put=__set_m_nNumFramePresentsTimedOut))  m_nNumFramePresentsTimedOut;

constexpr void __set_m_nNumFramePresentsTimedOut(uint32_t value) ;

constexpr uint32_t __get_m_nNumFramePresentsTimedOut() const;

 uint32_t __declspec(property(get=__get_m_nNumDroppedFramesTimedOut, put=__set_m_nNumDroppedFramesTimedOut))  m_nNumDroppedFramesTimedOut;

constexpr void __set_m_nNumDroppedFramesTimedOut(uint32_t value) ;

constexpr uint32_t __get_m_nNumDroppedFramesTimedOut() const;

 uint32_t __declspec(property(get=__get_m_nNumReprojectedFramesTimedOut, put=__set_m_nNumReprojectedFramesTimedOut))  m_nNumReprojectedFramesTimedOut;

constexpr void __set_m_nNumReprojectedFramesTimedOut(uint32_t value) ;

constexpr uint32_t __get_m_nNumReprojectedFramesTimedOut() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::Compositor_CumulativeStats, "OVR.OpenVR", "Compositor_CumulativeStats");
