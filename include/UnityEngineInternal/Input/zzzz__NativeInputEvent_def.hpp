#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngineInternal::Input {
struct NativeInputEventType;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEvent;
}
// Type: UnityEngineInternal.Input::NativeInputEvent
namespace UnityEngineInternal::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15956))
// CS Name: UnityEngineInternal.Input.NativeInputEvent
struct CORDL_TYPE NativeInputEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngineInternal::Input::NativeInputEventType", modifiers: "", def_value: None }, CppParam { name: "sizeInBytes", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "eventId", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeInputEvent(::UnityEngineInternal::Input::NativeInputEventType type, uint16_t sizeInBytes, uint16_t deviceId, double_t time, int32_t eventId) noexcept;


                    constexpr NativeInputEvent(NativeInputEvent const&) = default;
                    constexpr NativeInputEvent(NativeInputEvent&&) = default;
                    constexpr NativeInputEvent& operator=(NativeInputEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeInputEvent& operator=(NativeInputEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeInputEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field structSize offset 0
static constexpr int32_t  structSize{20};

 ::UnityEngineInternal::Input::NativeInputEventType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::UnityEngineInternal::Input::NativeInputEventType value) ;

constexpr ::UnityEngineInternal::Input::NativeInputEventType __get_type() const;

 uint16_t __declspec(property(get=__get_sizeInBytes, put=__set_sizeInBytes))  sizeInBytes;

constexpr void __set_sizeInBytes(uint16_t value) ;

constexpr uint16_t __get_sizeInBytes() const;

 uint16_t __declspec(property(get=__get_deviceId, put=__set_deviceId))  deviceId;

constexpr void __set_deviceId(uint16_t value) ;

constexpr uint16_t __get_deviceId() const;

 double_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(double_t value) ;

constexpr double_t __get_time() const;

 int32_t __declspec(property(get=__get_eventId, put=__set_eventId))  eventId;

constexpr void __set_eventId(int32_t value) ;

constexpr int32_t __get_eventId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngineInternal::Input
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEvent, "UnityEngineInternal.Input", "NativeInputEvent");
