#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class ICloneable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator;
}
// Type: ::Enumerator
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6614))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventBuffer::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentEvent", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator(void* m_Buffer, int32_t m_EventCount, void* m_CurrentEvent, int32_t m_CurrentIndex) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator(UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator(UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_EventCount, put=__set_m_EventCount))  m_EventCount;

constexpr void __set_m_EventCount(int32_t value) ;

constexpr int32_t __get_m_EventCount() const;

 void* __declspec(property(get=__get_m_CurrentEvent, put=__set_m_CurrentEvent))  m_CurrentEvent;

constexpr void __set_m_CurrentEvent(void* value) ;

constexpr void* __get_m_CurrentEvent() const;

 int32_t __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex))  m_CurrentIndex;

constexpr void __set_m_CurrentIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentIndex() const;


// Properties

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x29585ec size 0x38 virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputEventBuffer buffer) ;

/// @brief Method MoveNext addr 0x29587dc size 0x6c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2958848 size 0xc virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x2958854 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method get_Current addr 0x2958858 size 0x8 virtual true final true
 UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2958860 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputEventBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6615))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventBuffer
struct CORDL_TYPE InputEventBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_SizeInBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_WeOwnTheBuffer", ty: "bool", modifiers: "", def_value: None }]
constexpr InputEventBuffer(Unity::Collections::NativeArray_1<uint8_t> m_Buffer, int64_t m_SizeInBytes, int32_t m_EventCount, bool m_WeOwnTheBuffer) noexcept;


                    constexpr InputEventBuffer(InputEventBuffer const&) = default;
                    constexpr InputEventBuffer(InputEventBuffer&&) = default;
                    constexpr InputEventBuffer& operator=(InputEventBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputEventBuffer& operator=(InputEventBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputEventBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field BufferSizeUnknown offset 0
static constexpr int64_t  BufferSizeUnknown{-1};

 Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(Unity::Collections::NativeArray_1<uint8_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint8_t> __get_m_Buffer() const;

 int64_t __declspec(property(get=__get_m_SizeInBytes, put=__set_m_SizeInBytes))  m_SizeInBytes;

constexpr void __set_m_SizeInBytes(int64_t value) ;

constexpr int64_t __get_m_SizeInBytes() const;

 int32_t __declspec(property(get=__get_m_EventCount, put=__set_m_EventCount))  m_EventCount;

constexpr void __set_m_EventCount(int32_t value) ;

constexpr int32_t __get_m_EventCount() const;

 bool __declspec(property(get=__get_m_WeOwnTheBuffer, put=__set_m_WeOwnTheBuffer))  m_WeOwnTheBuffer;

constexpr void __set_m_WeOwnTheBuffer(bool value) ;

constexpr bool __get_m_WeOwnTheBuffer() const;


// Properties

 int32_t __declspec(property(get=get_eventCount))  eventCount;

 int64_t __declspec(property(get=get_sizeInBytes))  sizeInBytes;

 int64_t __declspec(property(get=get_capacityInBytes))  capacityInBytes;

 Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=get_data))  data;

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=get_bufferPtr))  bufferPtr;


// Methods

/// @brief Method get_eventCount addr 0x2957d88 size 0x8 virtual false final false
 int32_t get_eventCount() ;

/// @brief Method get_sizeInBytes addr 0x2957d90 size 0x8 virtual false final false
 int64_t get_sizeInBytes() ;

/// @brief Method get_capacityInBytes addr 0x2957d98 size 0x5c virtual false final false
 int64_t get_capacityInBytes() ;

/// @brief Method get_data addr 0x2957df4 size 0xc virtual false final false
 Unity::Collections::NativeArray_1<uint8_t> get_data() ;

/// @brief Method get_bufferPtr addr 0x2957e00 size 0x48 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputEventPtr get_bufferPtr() ;

/// @brief Method .ctor addr 0x2957e4c size 0x1c0 virtual false final false
 void _ctor(void* eventPtr, int32_t eventCount, int32_t sizeInBytes, int32_t capacityInBytes) ;

/// @brief Method .ctor addr 0x295800c size 0x14c virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<uint8_t> buffer, int32_t eventCount, int32_t sizeInBytes, bool transferNativeArrayOwnership) ;

/// @brief Method AppendEvent addr 0x2958158 size 0x80 virtual false final false
 void AppendEvent(void* eventPtr, int32_t capacityIncrementInBytes, Unity::Collections::Allocator allocator) ;

/// @brief Method AllocateEvent addr 0x29581d8 size 0x2c8 virtual false final false
 void* AllocateEvent(int32_t sizeInBytes, int32_t capacityIncrementInBytes, Unity::Collections::Allocator allocator) ;

/// @brief Method Contains addr 0x2957cac size 0x88 virtual false final false
 bool Contains(void* eventPtr) ;

/// @brief Method Reset addr 0x29584a0 size 0x18 virtual false final false
 void Reset() ;

/// @brief Method AdvanceToNextEvent addr 0x29584b8 size 0xc0 virtual false final false
 void AdvanceToNextEvent(ByRef<void*> currentReadPos, ByRef<void*> currentWritePos, ByRef<int32_t> numEventsRetainedInBuffer, ByRef<int32_t> numRemainingEvents, bool leaveEventInBuffer) ;

/// @brief Method GetEnumerator addr 0x2958578 size 0x74 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2958624 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dispose addr 0x2958628 size 0x60 virtual true final true
 void Dispose() ;

/// @brief Method Clone addr 0x2958688 size 0xe8 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputEventBuffer Clone() ;

/// @brief Method System.ICloneable.Clone addr 0x2958770 size 0x68 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputEventBuffer, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventBuffer__Enumerator, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer/Enumerator");
