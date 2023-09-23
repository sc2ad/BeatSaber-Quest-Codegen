#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlExtensions__Enumerate;
}
namespace UnityEngine::InputSystem {
class InputControlExtensions;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlExtensions__ControlBuilder;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator;
}
// Type: ::Enumerate
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6300))
// CS Name: UnityEngine.InputSystem.InputControlExtensions::Enumerate
struct CORDL_TYPE UnityEngine__InputSystem__InputControlExtensions__Enumerate : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlExtensions__Enumerate(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlExtensions__Enumerate(UnityEngine__InputSystem__InputControlExtensions__Enumerate const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__Enumerate(UnityEngine__InputSystem__InputControlExtensions__Enumerate&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__Enumerate& operator=(UnityEngine__InputSystem__InputControlExtensions__Enumerate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlExtensions__Enumerate& operator=(UnityEngine__InputSystem__InputControlExtensions__Enumerate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlExtensions__Enumerate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputControlExtensions__Enumerate_Unwrapped : int32_t {
__IgnoreControlsInDefaultState = 1,
__IgnoreControlsInCurrentState = 2,
__IncludeSyntheticControls = 4,
__IncludeNoisyControls = 8,
__IncludeNonLeafControls = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputControlExtensions__Enumerate_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputControlExtensions__Enumerate_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IgnoreControlsInDefaultState offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate const IgnoreControlsInDefaultState;

/// @brief Field IgnoreControlsInCurrentState offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate const IgnoreControlsInCurrentState;

/// @brief Field IncludeSyntheticControls offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate const IncludeSyntheticControls;

/// @brief Field IncludeNoisyControls offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate const IncludeNoisyControls;

/// @brief Field IncludeNonLeafControls offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate const IncludeNonLeafControls;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::InputEventControlCollection
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6301))
// CS Name: UnityEngine.InputSystem.InputControlExtensions::InputEventControlCollection
struct CORDL_TYPE UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "m_Device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }, CppParam { name: "m_EventPtr", ty: "UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate", modifiers: "", def_value: None }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection(UnityEngine::InputSystem::InputDevice m_Device, UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate m_Flags, float_t m_MagnitudeThreshold) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection(UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection(UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection& operator=(UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection& operator=(UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get_m_Device, put=__set_m_Device))  m_Device;

constexpr void __set_m_Device(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get_m_Device() const;

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=__get_m_EventPtr, put=__set_m_EventPtr))  m_EventPtr;

constexpr void __set_m_EventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr __get_m_EventPtr() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate __get_m_Flags() const;

 float_t __declspec(property(get=__get_m_MagnitudeThreshold, put=__set_m_MagnitudeThreshold))  m_MagnitudeThreshold;

constexpr void __set_m_MagnitudeThreshold(float_t value) ;

constexpr float_t __get_m_MagnitudeThreshold() const;


// Properties

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=get_eventPtr))  eventPtr;


// Methods

/// @brief Method get_eventPtr addr 0x28d2cd0 size 0x8 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputEventPtr get_eventPtr() ;

/// @brief Method GetEnumerator addr 0x28d25bc size 0x28 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator addr 0x28d2e34 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl> System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28d2ed8 size 0xa4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::InputEventControlEnumerator
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6302))
// CS Name: UnityEngine.InputSystem.InputControlExtensions::InputEventControlEnumerator
struct CORDL_TYPE UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Flags", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate", modifiers: "", def_value: None }, CppParam { name: "m_Device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }, CppParam { name: "m_StateOffsetToControlIndex", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_StateOffsetToControlIndexLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllControls", ty: "::ArrayW<UnityEngine::InputSystem::InputControl>", modifiers: "", def_value: None }, CppParam { name: "m_DefaultState", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentState", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_NoiseMask", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_EventPtr", ty: "UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None }, CppParam { name: "m_CurrentControl", ty: "UnityEngine::InputSystem::InputControl", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndexInStateOffsetToControlIndexMap", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentControlStateBitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_EventState", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentBitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_EndBitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate m_Flags, UnityEngine::InputSystem::InputDevice m_Device, ::ArrayW<uint32_t> m_StateOffsetToControlIndex, int32_t m_StateOffsetToControlIndexLength, ::ArrayW<UnityEngine::InputSystem::InputControl> m_AllControls, void* m_DefaultState, void* m_CurrentState, void* m_NoiseMask, UnityEngine::InputSystem::LowLevel::InputEventPtr m_EventPtr, UnityEngine::InputSystem::InputControl m_CurrentControl, int32_t m_CurrentIndexInStateOffsetToControlIndexMap, uint32_t m_CurrentControlStateBitOffset, void* m_EventState, uint32_t m_CurrentBitOffset, uint32_t m_EndBitOffset, float_t m_MagnitudeThreshold) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator(UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator(UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator& operator=(UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator& operator=(UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate __get_m_Flags() const;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get_m_Device, put=__set_m_Device))  m_Device;

constexpr void __set_m_Device(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get_m_Device() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_StateOffsetToControlIndex, put=__set_m_StateOffsetToControlIndex))  m_StateOffsetToControlIndex;

constexpr void __set_m_StateOffsetToControlIndex(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_StateOffsetToControlIndex() const;

 int32_t __declspec(property(get=__get_m_StateOffsetToControlIndexLength, put=__set_m_StateOffsetToControlIndexLength))  m_StateOffsetToControlIndexLength;

constexpr void __set_m_StateOffsetToControlIndexLength(int32_t value) ;

constexpr int32_t __get_m_StateOffsetToControlIndexLength() const;

 ::ArrayW<UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_AllControls, put=__set_m_AllControls))  m_AllControls;

constexpr void __set_m_AllControls(::ArrayW<UnityEngine::InputSystem::InputControl> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> __get_m_AllControls() const;

 void* __declspec(property(get=__get_m_DefaultState, put=__set_m_DefaultState))  m_DefaultState;

constexpr void __set_m_DefaultState(void* value) ;

constexpr void* __get_m_DefaultState() const;

 void* __declspec(property(get=__get_m_CurrentState, put=__set_m_CurrentState))  m_CurrentState;

constexpr void __set_m_CurrentState(void* value) ;

constexpr void* __get_m_CurrentState() const;

 void* __declspec(property(get=__get_m_NoiseMask, put=__set_m_NoiseMask))  m_NoiseMask;

constexpr void __set_m_NoiseMask(void* value) ;

constexpr void* __get_m_NoiseMask() const;

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=__get_m_EventPtr, put=__set_m_EventPtr))  m_EventPtr;

constexpr void __set_m_EventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr __get_m_EventPtr() const;

 UnityEngine::InputSystem::InputControl __declspec(property(get=__get_m_CurrentControl, put=__set_m_CurrentControl))  m_CurrentControl;

constexpr void __set_m_CurrentControl(UnityEngine::InputSystem::InputControl value) ;

constexpr UnityEngine::InputSystem::InputControl __get_m_CurrentControl() const;

 int32_t __declspec(property(get=__get_m_CurrentIndexInStateOffsetToControlIndexMap, put=__set_m_CurrentIndexInStateOffsetToControlIndexMap))  m_CurrentIndexInStateOffsetToControlIndexMap;

constexpr void __set_m_CurrentIndexInStateOffsetToControlIndexMap(int32_t value) ;

constexpr int32_t __get_m_CurrentIndexInStateOffsetToControlIndexMap() const;

 uint32_t __declspec(property(get=__get_m_CurrentControlStateBitOffset, put=__set_m_CurrentControlStateBitOffset))  m_CurrentControlStateBitOffset;

constexpr void __set_m_CurrentControlStateBitOffset(uint32_t value) ;

constexpr uint32_t __get_m_CurrentControlStateBitOffset() const;

 void* __declspec(property(get=__get_m_EventState, put=__set_m_EventState))  m_EventState;

constexpr void __set_m_EventState(void* value) ;

constexpr void* __get_m_EventState() const;

 uint32_t __declspec(property(get=__get_m_CurrentBitOffset, put=__set_m_CurrentBitOffset))  m_CurrentBitOffset;

constexpr void __set_m_CurrentBitOffset(uint32_t value) ;

constexpr uint32_t __get_m_CurrentBitOffset() const;

 uint32_t __declspec(property(get=__get_m_EndBitOffset, put=__set_m_EndBitOffset))  m_EndBitOffset;

constexpr void __set_m_EndBitOffset(uint32_t value) ;

constexpr uint32_t __get_m_EndBitOffset() const;

 float_t __declspec(property(get=__get_m_MagnitudeThreshold, put=__set_m_MagnitudeThreshold))  m_MagnitudeThreshold;

constexpr void __set_m_MagnitudeThreshold(float_t value) ;

constexpr float_t __get_m_MagnitudeThreshold() const;


// Properties

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x28d2cd8 size 0x15c virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate flags, float_t magnitudeThreshold) ;

/// @brief Method CheckDefault addr 0x28d33f4 size 0x24 virtual false final false
 bool CheckDefault(uint32_t numBits) ;

/// @brief Method CheckCurrent addr 0x28d3418 size 0x20 virtual false final false
 bool CheckCurrent(uint32_t numBits) ;

/// @brief Method MoveNext addr 0x28d25e4 size 0x340 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x28d2f7c size 0x478 virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x28d3454 size 0x8 virtual true final true
 void Dispose() ;

/// @brief Method get_Current addr 0x28d345c size 0x8 virtual true final true
 UnityEngine::InputSystem::InputControl get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28d3464 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ControlBuilder
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6303))
// CS Name: UnityEngine.InputSystem.InputControlExtensions::ControlBuilder
struct CORDL_TYPE UnityEngine__InputSystem__InputControlExtensions__ControlBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_control_k__BackingField", ty: "UnityEngine::InputSystem::InputControl", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlExtensions__ControlBuilder(UnityEngine::InputSystem::InputControl _control_k__BackingField) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlExtensions__ControlBuilder(UnityEngine__InputSystem__InputControlExtensions__ControlBuilder const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__ControlBuilder(UnityEngine__InputSystem__InputControlExtensions__ControlBuilder&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__ControlBuilder& operator=(UnityEngine__InputSystem__InputControlExtensions__ControlBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlExtensions__ControlBuilder& operator=(UnityEngine__InputSystem__InputControlExtensions__ControlBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlExtensions__ControlBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::InputControl __declspec(property(get=__get__control_k__BackingField, put=__set__control_k__BackingField))  _control_k__BackingField;

constexpr void __set__control_k__BackingField(UnityEngine::InputSystem::InputControl value) ;

constexpr UnityEngine::InputSystem::InputControl __get__control_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_control, put=set_control))  control;


// Methods

/// @brief Method get_control addr 0x28d346c size 0x8 virtual false final false
 UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method set_control addr 0x28d3474 size 0x8 virtual false final false
 void set_control(UnityEngine::InputSystem::InputControl value) ;

/// @brief Method At addr 0x28d347c size 0x88 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder At(UnityEngine::InputSystem::InputDevice device, int32_t index) ;

/// @brief Method WithParent addr 0x28d3504 size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithParent(UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method WithName addr 0x28d3524 size 0x48 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithName(::StringW name) ;

/// @brief Method WithDisplayName addr 0x28d356c size 0x50 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithDisplayName(::StringW displayName) ;

/// @brief Method WithShortDisplayName addr 0x28d35bc size 0x50 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithShortDisplayName(::StringW shortDisplayName) ;

/// @brief Method WithLayout addr 0x28d360c size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithLayout(UnityEngine::InputSystem::Utilities::InternedString layout) ;

/// @brief Method WithUsages addr 0x28d362c size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithUsages(int32_t startIndex, int32_t count) ;

/// @brief Method WithAliases addr 0x28d364c size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithAliases(int32_t startIndex, int32_t count) ;

/// @brief Method WithChildren addr 0x28d366c size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithChildren(int32_t startIndex, int32_t count) ;

/// @brief Method WithStateBlock addr 0x28d368c size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithStateBlock(UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock) ;

/// @brief Method WithDefaultState addr 0x28d36ac size 0x3c virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithDefaultState(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method WithMinAndMax addr 0x28d3704 size 0x2c virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithMinAndMax(UnityEngine::InputSystem::Utilities::PrimitiveValue min, UnityEngine::InputSystem::Utilities::PrimitiveValue max) ;

/// @brief Method WithProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor,typename TValue>
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder WithProcessor(TProcessor processor) ;

/// @brief Method IsNoisy addr 0x28d3730 size 0x28 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder IsNoisy(bool value) ;

/// @brief Method IsSynthetic addr 0x28d3758 size 0x34 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder IsSynthetic(bool value) ;

/// @brief Method DontReset addr 0x28d378c size 0x4c virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder DontReset(bool value) ;

/// @brief Method IsButton addr 0x28d37f4 size 0x34 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder IsButton(bool value) ;

/// @brief Method Finish addr 0x28d3828 size 0x24 virtual false final false
 void Finish() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DeviceBuilder
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6304))
// CS Name: UnityEngine.InputSystem.InputControlExtensions::DeviceBuilder
struct CORDL_TYPE UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_device_k__BackingField", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder(UnityEngine::InputSystem::InputDevice _device_k__BackingField) noexcept;


                    constexpr UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder(UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder const&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder(UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder&&) = default;
                    constexpr UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder& operator=(UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder& operator=(UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get__device_k__BackingField, put=__set__device_k__BackingField))  _device_k__BackingField;

constexpr void __set__device_k__BackingField(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get__device_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::InputDevice __declspec(property(get=get_device, put=set_device))  device;


// Methods

/// @brief Method get_device addr 0x28d384c size 0x8 virtual false final false
 UnityEngine::InputSystem::InputDevice get_device() ;

/// @brief Method set_device addr 0x28d3854 size 0x8 virtual false final false
 void set_device(UnityEngine::InputSystem::InputDevice value) ;

/// @brief Method WithName addr 0x28d385c size 0x48 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithName(::StringW name) ;

/// @brief Method WithDisplayName addr 0x28d38a4 size 0x50 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithDisplayName(::StringW displayName) ;

/// @brief Method WithShortDisplayName addr 0x28d38f4 size 0x50 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithShortDisplayName(::StringW shortDisplayName) ;

/// @brief Method WithLayout addr 0x28d3944 size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithLayout(UnityEngine::InputSystem::Utilities::InternedString layout) ;

/// @brief Method WithChildren addr 0x28d3964 size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithChildren(int32_t startIndex, int32_t count) ;

/// @brief Method WithStateBlock addr 0x28d3984 size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithStateBlock(UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock) ;

/// @brief Method IsNoisy addr 0x28d39a4 size 0x28 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder IsNoisy(bool value) ;

/// @brief Method WithControlUsage addr 0x28d39cc size 0xa4 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithControlUsage(int32_t controlIndex, UnityEngine::InputSystem::Utilities::InternedString usage, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method WithControlAlias addr 0x28d3a70 size 0x40 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithControlAlias(int32_t controlIndex, UnityEngine::InputSystem::Utilities::InternedString alias) ;

/// @brief Method WithStateOffsetToControlIndexMap addr 0x28d3ab0 size 0x20 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder WithStateOffsetToControlIndexMap(::ArrayW<uint32_t> map) ;

/// @brief Method Finish addr 0x28d3ad0 size 0x24 virtual false final false
 void Finish() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<GetAllButtonPresses>d__43
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6305))
// CS Name: UnityEngine.InputSystem.InputControlExtensions::<GetAllButtonPresses>d__43
class CORDL_TYPE UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43(UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43(UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43& operator=(UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43& operator=(UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::InputSystem::InputControl __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::InputSystem::InputControl value) ;

constexpr UnityEngine::InputSystem::InputControl __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=__get_eventPtr, put=__set_eventPtr))  eventPtr;

constexpr void __set_eventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr __get_eventPtr() const;

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=__get___3__eventPtr, put=__set___3__eventPtr))  __3__eventPtr;

constexpr void __set___3__eventPtr(UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr __get___3__eventPtr() const;

 float_t __declspec(property(get=__get_magnitude, put=__set_magnitude))  magnitude;

constexpr void __set_magnitude(float_t value) ;

constexpr float_t __get_magnitude() const;

 float_t __declspec(property(get=__get___3__magnitude, put=__set___3__magnitude))  __3__magnitude;

constexpr void __set___3__magnitude(float_t value) ;

constexpr float_t __get___3__magnitude() const;

 bool __declspec(property(get=__get_buttonControlsOnly, put=__set_buttonControlsOnly))  buttonControlsOnly;

constexpr void __set_buttonControlsOnly(bool value) ;

constexpr bool __get_buttonControlsOnly() const;

 bool __declspec(property(get=__get___3__buttonControlsOnly, put=__set___3__buttonControlsOnly))  __3__buttonControlsOnly;

constexpr void __set___3__buttonControlsOnly(bool value) ;

constexpr bool __get___3__buttonControlsOnly() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator __get___7__wrap1() const;


// Properties

 UnityEngine::InputSystem::InputControl __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43(int32_t __1__state) ;

/// @brief Method .ctor addr 0x28d29c0 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x28d3af4 size 0x24 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x28d3b18 size 0x288 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x28d3da0 size 0x10 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current addr 0x28d3db0 size 0x8 virtual true final true
 UnityEngine::InputSystem::InputControl System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x28d3db8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28d3df8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator addr 0x28d3e00 size 0xb4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControl> System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28d3eb4 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlExtensions
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6306))
// CS Name: UnityEngine.InputSystem.InputControlExtensions
class CORDL_TYPE InputControlExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetAllButtonPresses_d__43 = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43;

using DeviceBuilder = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder;

using ControlBuilder = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder;

using InputEventControlEnumerator = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator;

using InputEventControlCollection = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection;

using Enumerate = UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputControlExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlExtensions", modifiers: " const&", def_value: None }]
constexpr InputControlExtensions(InputControlExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlExtensions", modifiers: "&&", def_value: None }]
constexpr InputControlExtensions(InputControlExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControlExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputControlExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControlExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControlExtensions& operator=(InputControlExtensions&& o) noexcept = default;
  constexpr InputControlExtensions& operator=(InputControlExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method FindInParentChain addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static TControl FindInParentChain(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method IsPressed addr 0x28d0ad8 size 0x148 virtual false final false
static bool IsPressed(UnityEngine::InputSystem::InputControl control, float_t buttonPressPoint) ;

/// @brief Method IsActuated addr 0x28d0c20 size 0xcc virtual false final false
static bool IsActuated(UnityEngine::InputSystem::InputControl control, float_t threshold) ;

/// @brief Method ReadValueAsObject addr 0x28d0148 size 0x7c virtual false final false
static ::bs_hook::Il2CppWrapperType ReadValueAsObject(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ReadValueIntoBuffer addr 0x28d0d64 size 0xbc virtual false final false
static void ReadValueIntoBuffer(UnityEngine::InputSystem::InputControl control, void* buffer, int32_t bufferSize) ;

/// @brief Method ReadDefaultValueAsObject addr 0x28d0e20 size 0xa8 virtual false final false
static ::bs_hook::Il2CppWrapperType ReadDefaultValueAsObject(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ReadValueFromEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static TValue ReadValueFromEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent) ;

/// @brief Method ReadValueFromEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool ReadValueFromEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ByRef<TValue> value) ;

/// @brief Method ReadValueFromEventAsObject addr 0x28d0ec8 size 0x84 virtual false final false
static ::bs_hook::Il2CppWrapperType ReadValueFromEventAsObject(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent) ;

/// @brief Method ReadUnprocessedValueFromEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static TValue ReadUnprocessedValueFromEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method ReadUnprocessedValueFromEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static bool ReadUnprocessedValueFromEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ByRef<TValue> value) ;

/// @brief Method WriteValueFromObjectIntoEvent addr 0x28d100c size 0x94 virtual false final false
static void WriteValueFromObjectIntoEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteValueIntoState addr 0x28d10a0 size 0x19c virtual false final false
static void WriteValueIntoState(UnityEngine::InputSystem::InputControl control, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void WriteValueIntoState(UnityEngine::InputSystem::InputControl control, TValue value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void WriteValueIntoState(UnityEngine::InputSystem::InputControl_1<TValue> control, TValue value, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void WriteValueIntoState(UnityEngine::InputSystem::InputControl_1<TValue> control, void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TState>
static void WriteValueIntoState(UnityEngine::InputSystem::InputControl_1<TValue> control, TValue value, ByRef<TState> state) ;

/// @brief Method WriteValueIntoEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void WriteValueIntoEvent(UnityEngine::InputSystem::InputControl control, TValue value, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method WriteValueIntoEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void WriteValueIntoEvent(UnityEngine::InputSystem::InputControl_1<TValue> control, TValue value, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method CopyState addr 0x28d123c size 0x168 virtual false final false
static void CopyState(UnityEngine::InputSystem::InputDevice device, void* buffer, int32_t bufferSizeInBytes) ;

/// @brief Method CopyState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static void CopyState(UnityEngine::InputSystem::InputDevice device, ByRef<TState> state) ;

/// @brief Method CheckStateIsAtDefault addr 0x28d0cec size 0x78 virtual false final false
static bool CheckStateIsAtDefault(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method CheckStateIsAtDefault addr 0x28d13a4 size 0xe0 virtual false final false
static bool CheckStateIsAtDefault(UnityEngine::InputSystem::InputControl control, void* statePtr, void* maskPtr) ;

/// @brief Method CheckStateIsAtDefaultIgnoringNoise addr 0x28d1538 size 0x74 virtual false final false
static bool CheckStateIsAtDefaultIgnoringNoise(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method CheckStateIsAtDefaultIgnoringNoise addr 0x28d15ac size 0xd0 virtual false final false
static bool CheckStateIsAtDefaultIgnoringNoise(UnityEngine::InputSystem::InputControl control, void* statePtr) ;

/// @brief Method CompareStateIgnoringNoise addr 0x28d167c size 0xec virtual false final false
static bool CompareStateIgnoringNoise(UnityEngine::InputSystem::InputControl control, void* statePtr) ;

/// @brief Method CompareState addr 0x28d1484 size 0xb4 virtual false final false
static bool CompareState(UnityEngine::InputSystem::InputControl control, void* firstStatePtr, void* secondStatePtr, void* maskPtr) ;

/// @brief Method CompareState addr 0x28d1768 size 0xb4 virtual false final false
static bool CompareState(UnityEngine::InputSystem::InputControl control, void* statePtr, void* maskPtr) ;

/// @brief Method HasValueChangeInState addr 0x28d181c size 0xb4 virtual false final false
static bool HasValueChangeInState(UnityEngine::InputSystem::InputControl control, void* statePtr) ;

/// @brief Method HasValueChangeInEvent addr 0x28d18d0 size 0xe0 virtual false final false
static bool HasValueChangeInEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method GetStatePtrFromStateEvent addr 0x28d0f4c size 0xc0 virtual false final false
static void* GetStatePtrFromStateEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method GetStatePtrFromStateEventUnchecked addr 0x28d19b0 size 0x2ec virtual false final false
static void* GetStatePtrFromStateEventUnchecked(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::Utilities::FourCC eventType) ;

/// @brief Method ResetToDefaultStateInEvent addr 0x28d1ca8 size 0x1b4 virtual false final false
static bool ResetToDefaultStateInEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method QueueValueChange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
static void QueueValueChange(UnityEngine::InputSystem::InputControl_1<TValue> control, TValue value, double_t time) ;

/// @brief Method AccumulateValueInEvent addr 0x28d1e5c size 0x100 virtual false final false
static void AccumulateValueInEvent(UnityEngine::InputSystem::InputControl_1<float_t> control, void* currentStatePtr, UnityEngine::InputSystem::LowLevel::InputEventPtr newState) ;

/// @brief Method AccumulateValueInEvent addr 0x28d1f5c size 0x104 virtual false final false
static void AccumulateValueInEvent(UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector2> control, void* currentStatePtr, UnityEngine::InputSystem::LowLevel::InputEventPtr newState) ;

/// @brief Method FindControlsRecursive addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static void FindControlsRecursive(UnityEngine::InputSystem::InputControl parent, System::Collections::Generic::IList_1<TControl> controls, System::Func_2<TControl,bool> predicate) ;

/// @brief Method BuildPath addr 0x28d2060 size 0x2dc virtual false final false
static ::StringW BuildPath(UnityEngine::InputSystem::InputControl control, ::StringW deviceLayout, System::Text::StringBuilder builder) ;

/// @brief Method EnumerateControls addr 0x28d233c size 0x22c virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection EnumerateControls(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate flags, UnityEngine::InputSystem::InputDevice device, float_t magnitudeThreshold) ;

/// @brief Method EnumerateChangedControls addr 0x28d2568 size 0x38 virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection EnumerateChangedControls(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device, float_t magnitudeThreshold) ;

/// @brief Method HasButtonPress addr 0x28d25a0 size 0x1c virtual false final false
static bool HasButtonPress(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly) ;

/// @brief Method GetFirstButtonPressOrNull addr 0x28cf1e8 size 0x1d8 virtual false final false
static UnityEngine::InputSystem::InputControl GetFirstButtonPressOrNull(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly) ;

/// @brief Method GetAllButtonPresses addr 0x28d2924 size 0x9c virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl> GetAllButtonPresses(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, float_t magnitude, bool buttonControlsOnly) ;

/// @brief Method Setup addr 0x28d29f4 size 0xd0 virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder Setup(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Setup addr 0x28d2ac4 size 0x20c virtual false final false
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder Setup(UnityEngine::InputSystem::InputDevice device, int32_t controlCount, int32_t usageCount, int32_t aliasCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__Enumerate, "UnityEngine.InputSystem", "InputControlExtensions/Enumerate");
NEED_NO_BOX(UnityEngine::InputSystem::InputControlExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputControlExtensions, "UnityEngine.InputSystem", "InputControlExtensions");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions___GetAllButtonPresses_d__43, "UnityEngine.InputSystem", "InputControlExtensions/<GetAllButtonPresses>d__43");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__ControlBuilder, "UnityEngine.InputSystem", "InputControlExtensions/ControlBuilder");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__DeviceBuilder, "UnityEngine.InputSystem", "InputControlExtensions/DeviceBuilder");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlCollection, "UnityEngine.InputSystem", "InputControlExtensions/InputEventControlCollection");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlExtensions__InputEventControlEnumerator, "UnityEngine.InputSystem", "InputControlExtensions/InputEventControlEnumerator");
