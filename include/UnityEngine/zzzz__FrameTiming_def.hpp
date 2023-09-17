#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct FrameTiming;
}
// Type: UnityEngine::FrameTiming
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10074))
// CS Name: UnityEngine.FrameTiming
struct CORDL_TYPE FrameTiming : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "cpuTimePresentCalled", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "cpuFrameTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "cpuTimeFrameComplete", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "gpuFrameTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "syncInterval", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FrameTiming(uint64_t cpuTimePresentCalled, double_t cpuFrameTime, uint64_t cpuTimeFrameComplete, double_t gpuFrameTime, float_t heightScale, float_t widthScale, uint32_t syncInterval) noexcept;


                    constexpr FrameTiming(FrameTiming const&) = default;
                    constexpr FrameTiming(FrameTiming&&) = default;
                    constexpr FrameTiming& operator=(FrameTiming const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FrameTiming& operator=(FrameTiming&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FrameTiming(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_cpuTimePresentCalled, put=__set_cpuTimePresentCalled))  cpuTimePresentCalled;

constexpr void __set_cpuTimePresentCalled(uint64_t value) ;

constexpr uint64_t __get_cpuTimePresentCalled() const;

 double_t __declspec(property(get=__get_cpuFrameTime, put=__set_cpuFrameTime))  cpuFrameTime;

constexpr void __set_cpuFrameTime(double_t value) ;

constexpr double_t __get_cpuFrameTime() const;

 uint64_t __declspec(property(get=__get_cpuTimeFrameComplete, put=__set_cpuTimeFrameComplete))  cpuTimeFrameComplete;

constexpr void __set_cpuTimeFrameComplete(uint64_t value) ;

constexpr uint64_t __get_cpuTimeFrameComplete() const;

 double_t __declspec(property(get=__get_gpuFrameTime, put=__set_gpuFrameTime))  gpuFrameTime;

constexpr void __set_gpuFrameTime(double_t value) ;

constexpr double_t __get_gpuFrameTime() const;

 float_t __declspec(property(get=__get_heightScale, put=__set_heightScale))  heightScale;

constexpr void __set_heightScale(float_t value) ;

constexpr float_t __get_heightScale() const;

 float_t __declspec(property(get=__get_widthScale, put=__set_widthScale))  widthScale;

constexpr void __set_widthScale(float_t value) ;

constexpr float_t __get_widthScale() const;

 uint32_t __declspec(property(get=__get_syncInterval, put=__set_syncInterval))  syncInterval;

constexpr void __set_syncInterval(uint32_t value) ;

constexpr uint32_t __get_syncInterval() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTiming, "UnityEngine", "FrameTiming");
