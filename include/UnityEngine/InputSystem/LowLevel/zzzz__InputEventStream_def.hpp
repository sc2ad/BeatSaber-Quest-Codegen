#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventStream;
}
// Type: UnityEngine.InputSystem.LowLevel::InputEventStream
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6620))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventStream
struct CORDL_TYPE InputEventStream : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_NativeBuffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CurrentNativeEventReadPtr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentNativeEventWritePtr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_RemainingNativeEventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxAppendedEvents", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AppendBuffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CurrentAppendEventReadPtr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentAppendEventWritePtr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_RemainingAppendEventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NumEventsRetainedInBuffer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IsOpen", ty: "bool", modifiers: "", def_value: None }]
constexpr InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_NativeBuffer, void* m_CurrentNativeEventReadPtr, void* m_CurrentNativeEventWritePtr, int32_t m_RemainingNativeEventCount, int32_t m_MaxAppendedEvents, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_AppendBuffer, void* m_CurrentAppendEventReadPtr, void* m_CurrentAppendEventWritePtr, int32_t m_RemainingAppendEventCount, int32_t m_NumEventsRetainedInBuffer, bool m_IsOpen) noexcept;


                    constexpr InputEventStream(InputEventStream const&) = default;
                    constexpr InputEventStream(InputEventStream&&) = default;
                    constexpr InputEventStream& operator=(InputEventStream const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputEventStream& operator=(InputEventStream&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x78};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputEventStream(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::LowLevel::InputEventBuffer __declspec(property(get=__get_m_NativeBuffer, put=__set_m_NativeBuffer))  m_NativeBuffer;

constexpr void __set_m_NativeBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer __get_m_NativeBuffer() const;

 void* __declspec(property(get=__get_m_CurrentNativeEventReadPtr, put=__set_m_CurrentNativeEventReadPtr))  m_CurrentNativeEventReadPtr;

constexpr void __set_m_CurrentNativeEventReadPtr(void* value) ;

constexpr void* __get_m_CurrentNativeEventReadPtr() const;

 void* __declspec(property(get=__get_m_CurrentNativeEventWritePtr, put=__set_m_CurrentNativeEventWritePtr))  m_CurrentNativeEventWritePtr;

constexpr void __set_m_CurrentNativeEventWritePtr(void* value) ;

constexpr void* __get_m_CurrentNativeEventWritePtr() const;

 int32_t __declspec(property(get=__get_m_RemainingNativeEventCount, put=__set_m_RemainingNativeEventCount))  m_RemainingNativeEventCount;

constexpr void __set_m_RemainingNativeEventCount(int32_t value) ;

constexpr int32_t __get_m_RemainingNativeEventCount() const;

 int32_t __declspec(property(get=__get_m_MaxAppendedEvents, put=__set_m_MaxAppendedEvents))  m_MaxAppendedEvents;

constexpr void __set_m_MaxAppendedEvents(int32_t value) ;

constexpr int32_t __get_m_MaxAppendedEvents() const;

 ::UnityEngine::InputSystem::LowLevel::InputEventBuffer __declspec(property(get=__get_m_AppendBuffer, put=__set_m_AppendBuffer))  m_AppendBuffer;

constexpr void __set_m_AppendBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer __get_m_AppendBuffer() const;

 void* __declspec(property(get=__get_m_CurrentAppendEventReadPtr, put=__set_m_CurrentAppendEventReadPtr))  m_CurrentAppendEventReadPtr;

constexpr void __set_m_CurrentAppendEventReadPtr(void* value) ;

constexpr void* __get_m_CurrentAppendEventReadPtr() const;

 void* __declspec(property(get=__get_m_CurrentAppendEventWritePtr, put=__set_m_CurrentAppendEventWritePtr))  m_CurrentAppendEventWritePtr;

constexpr void __set_m_CurrentAppendEventWritePtr(void* value) ;

constexpr void* __get_m_CurrentAppendEventWritePtr() const;

 int32_t __declspec(property(get=__get_m_RemainingAppendEventCount, put=__set_m_RemainingAppendEventCount))  m_RemainingAppendEventCount;

constexpr void __set_m_RemainingAppendEventCount(int32_t value) ;

constexpr int32_t __get_m_RemainingAppendEventCount() const;

 int32_t __declspec(property(get=__get_m_NumEventsRetainedInBuffer, put=__set_m_NumEventsRetainedInBuffer))  m_NumEventsRetainedInBuffer;

constexpr void __set_m_NumEventsRetainedInBuffer(int32_t value) ;

constexpr int32_t __get_m_NumEventsRetainedInBuffer() const;

 bool __declspec(property(get=__get_m_IsOpen, put=__set_m_IsOpen))  m_IsOpen;

constexpr void __set_m_IsOpen(bool value) ;

constexpr bool __get_m_IsOpen() const;


// Properties

 bool __declspec(property(get=get_isOpen))  isOpen;

 int32_t __declspec(property(get=get_remainingEventCount))  remainingEventCount;

 int32_t __declspec(property(get=get_numEventsRetainedInBuffer))  numEventsRetainedInBuffer;

 void* __declspec(property(get=get_currentEventPtr))  currentEventPtr;

 uint32_t __declspec(property(get=get_numBytesRetainedInBuffer))  numBytesRetainedInBuffer;


// Methods

/// @brief Method get_isOpen addr 0x295951c size 0x8 virtual false final false
 bool get_isOpen() ;

/// @brief Method get_remainingEventCount addr 0x2959524 size 0x10 virtual false final false
 int32_t get_remainingEventCount() ;

/// @brief Method get_numEventsRetainedInBuffer addr 0x2959534 size 0x8 virtual false final false
 int32_t get_numEventsRetainedInBuffer() ;

/// @brief Method get_currentEventPtr addr 0x295953c size 0x34 virtual false final false
 void* get_currentEventPtr() ;

/// @brief Method get_numBytesRetainedInBuffer addr 0x2959570 size 0x54 virtual false final false
 uint32_t get_numBytesRetainedInBuffer() ;

/// @brief Method .ctor addr 0x29595c4 size 0x8c virtual false final false
 void _ctor(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, int32_t maxAppendedEvents) ;

/// @brief Method Close addr 0x2959650 size 0x114 virtual false final false
 void Close(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer) ;

/// @brief Method CleanUpAfterException addr 0x2959764 size 0x90 virtual false final false
 void CleanUpAfterException() ;

/// @brief Method Write addr 0x29597f4 size 0x1b0 virtual false final false
 void Write(void* eventPtr) ;

/// @brief Method Advance addr 0x29599a4 size 0xa4 virtual false final false
 void* Advance(bool leaveEventInBuffer) ;

/// @brief Method Peek addr 0x2959a48 size 0x64 virtual false final false
 void* Peek() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventStream, "UnityEngine.InputSystem.LowLevel", "InputEventStream");
