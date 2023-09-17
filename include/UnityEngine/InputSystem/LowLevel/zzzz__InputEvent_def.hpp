#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngineInternal::Input {
struct NativeInputEvent;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Type: UnityEngine.InputSystem.LowLevel::InputEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6613))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEvent
struct CORDL_TYPE InputEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngineInternal::Input::NativeInputEvent", modifiers: "", def_value: None }]
constexpr InputEvent(::UnityEngineInternal::Input::NativeInputEvent m_Event) noexcept;


                    constexpr InputEvent(InputEvent const&) = default;
                    constexpr InputEvent(InputEvent&&) = default;
                    constexpr InputEvent& operator=(InputEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputEvent& operator=(InputEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kHandledMask offset 0
static constexpr uint32_t  kHandledMask{2147483648u};

/// @brief Field kIdMask offset 0
static constexpr uint32_t  kIdMask{2147483647u};

/// @brief Field kBaseEventSize offset 0
static constexpr int32_t  kBaseEventSize{20};

/// @brief Field InvalidEventId offset 0
static constexpr int32_t  InvalidEventId{0};

/// @brief Field kAlignment offset 0
static constexpr int32_t  kAlignment{4};

 ::UnityEngineInternal::Input::NativeInputEvent __declspec(property(get=__get_m_Event, put=__set_m_Event))  m_Event;

constexpr void __set_m_Event(::UnityEngineInternal::Input::NativeInputEvent value) ;

constexpr ::UnityEngineInternal::Input::NativeInputEvent __get_m_Event() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_type, put=set_type))  type;

 uint32_t __declspec(property(get=get_sizeInBytes, put=set_sizeInBytes))  sizeInBytes;

 int32_t __declspec(property(get=get_eventId, put=set_eventId))  eventId;

 int32_t __declspec(property(get=get_deviceId, put=set_deviceId))  deviceId;

 double_t __declspec(property(get=get_time, put=set_time))  time;

 double_t __declspec(property(get=get_internalTime, put=set_internalTime))  internalTime;

 bool __declspec(property(get=get_handled, put=set_handled))  handled;


// Methods

/// @brief Method get_type addr 0x2957764 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Utilities::FourCC get_type() ;

/// @brief Method set_type addr 0x295776c size 0x8 virtual false final false
 void set_type(::UnityEngine::InputSystem::Utilities::FourCC value) ;

/// @brief Method get_sizeInBytes addr 0x29568c4 size 0x8 virtual false final false
 uint32_t get_sizeInBytes() ;

/// @brief Method set_sizeInBytes addr 0x2957774 size 0xa8 virtual false final false
 void set_sizeInBytes(uint32_t value) ;

/// @brief Method get_eventId addr 0x295781c size 0xc virtual false final false
 int32_t get_eventId() ;

/// @brief Method set_eventId addr 0x2957828 size 0x14 virtual false final false
 void set_eventId(int32_t value) ;

/// @brief Method get_deviceId addr 0x295783c size 0x8 virtual false final false
 int32_t get_deviceId() ;

/// @brief Method set_deviceId addr 0x2957844 size 0x8 virtual false final false
 void set_deviceId(int32_t value) ;

/// @brief Method get_time addr 0x295784c size 0x54 virtual false final false
 double_t get_time() ;

/// @brief Method set_time addr 0x29578a0 size 0x60 virtual false final false
 void set_time(double_t value) ;

/// @brief Method get_internalTime addr 0x2957900 size 0x8 virtual false final false
 double_t get_internalTime() ;

/// @brief Method set_internalTime addr 0x2957908 size 0x8 virtual false final false
 void set_internalTime(double_t value) ;

/// @brief Method .ctor addr 0x2957094 size 0x104 virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes, int32_t deviceId, double_t time) ;

/// @brief Method get_handled addr 0x2957910 size 0xc virtual false final false
 bool get_handled() ;

/// @brief Method set_handled addr 0x295791c size 0x1c virtual false final false
 void set_handled(bool value) ;

/// @brief Method ToString addr 0x2957938 size 0x264 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetNextInMemory addr 0x2957b9c size 0x20 virtual false final false
static void* GetNextInMemory(void* currentPtr) ;

/// @brief Method GetNextInMemoryChecked addr 0x2957bbc size 0xf0 virtual false final false
static void* GetNextInMemoryChecked(void* currentPtr, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> buffer) ;

/// @brief Method Equals addr 0x2957d34 size 0x54 virtual false final false
static bool Equals(void* first, void* second) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEvent, "UnityEngine.InputSystem.LowLevel", "InputEvent");
