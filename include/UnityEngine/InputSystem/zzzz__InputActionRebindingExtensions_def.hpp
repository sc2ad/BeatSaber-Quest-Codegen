#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace System::Linq::Expressions {
template<typename TDelegate>
class Expression_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputBinding__DisplayStringOptions;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::InputSystem::Layouts {
struct ____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
struct ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags;
}
namespace GlobalNamespace {
class ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride;
}
// Type: ::Parameter
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6236))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::Parameter
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "instance", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo", modifiers: "", def_value: None }, CppParam { name: "bindingIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter(::bs_hook::Il2CppWrapperType instance, ::System::Reflection::FieldInfo field, int32_t bindingIndex) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter(____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter(____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_instance, put=__set_instance))  instance;

constexpr void __set_instance(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_instance() const;

 ::System::Reflection::FieldInfo __declspec(property(get=__get_field, put=__set_field))  field;

constexpr void __set_field(::System::Reflection::FieldInfo value) ;

constexpr ::System::Reflection::FieldInfo __get_field() const;

 int32_t __declspec(property(get=__get_bindingIndex, put=__set_bindingIndex))  bindingIndex;

constexpr void __set_bindingIndex(int32_t value) ;

constexpr int32_t __get_bindingIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ParameterEnumerable
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6237))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::ParameterEnumerable
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: None }, CppParam { name: "m_Parameter", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable(::UnityEngine::InputSystem::InputActionState m_State, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride m_Parameter, int32_t m_MapIndex) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x88};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputActionState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(::UnityEngine::InputSystem::InputActionState value) ;

constexpr ::UnityEngine::InputSystem::InputActionState __get_m_State() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride __declspec(property(get=__get_m_Parameter, put=__set_m_Parameter))  m_Parameter;

constexpr void __set_m_Parameter(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride __get_m_Parameter() const;

 int32_t __declspec(property(get=__get_m_MapIndex, put=__set_m_MapIndex))  m_MapIndex;

constexpr void __set_m_MapIndex(int32_t value) ;

constexpr int32_t __get_m_MapIndex() const;


// Methods

/// @brief Method .ctor addr 0x28accfc size 0x34 virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputActionState state, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride parameter, int32_t mapIndex) ;

/// @brief Method GetEnumerator addr 0x28acd30 size 0x60 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator addr 0x28b233c size 0xb8 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter> System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28b23f4 size 0xb8 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ParameterEnumerator
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6238))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::ParameterEnumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingEndIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionEndIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorEndIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }, CppParam { name: "m_ObjectType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "m_ParameterName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_MayBeInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MayBeProcessor", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MayBeComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_CurrentBindingIsComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_CurrentObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "m_CurrentParameter", ty: "::System::Reflection::FieldInfo", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator(::UnityEngine::InputSystem::InputActionState m_State, int32_t m_MapIndex, int32_t m_BindingCurrentIndex, int32_t m_BindingEndIndex, int32_t m_InteractionCurrentIndex, int32_t m_InteractionEndIndex, int32_t m_ProcessorCurrentIndex, int32_t m_ProcessorEndIndex, ::UnityEngine::InputSystem::InputBinding m_BindingMask, ::System::Type m_ObjectType, ::StringW m_ParameterName, bool m_MayBeInteraction, bool m_MayBeProcessor, bool m_MayBeComposite, bool m_CurrentBindingIsComposite, ::bs_hook::Il2CppWrapperType m_CurrentObject, ::System::Reflection::FieldInfo m_CurrentParameter) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xa8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputActionState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(::UnityEngine::InputSystem::InputActionState value) ;

constexpr ::UnityEngine::InputSystem::InputActionState __get_m_State() const;

 int32_t __declspec(property(get=__get_m_MapIndex, put=__set_m_MapIndex))  m_MapIndex;

constexpr void __set_m_MapIndex(int32_t value) ;

constexpr int32_t __get_m_MapIndex() const;

 int32_t __declspec(property(get=__get_m_BindingCurrentIndex, put=__set_m_BindingCurrentIndex))  m_BindingCurrentIndex;

constexpr void __set_m_BindingCurrentIndex(int32_t value) ;

constexpr int32_t __get_m_BindingCurrentIndex() const;

 int32_t __declspec(property(get=__get_m_BindingEndIndex, put=__set_m_BindingEndIndex))  m_BindingEndIndex;

constexpr void __set_m_BindingEndIndex(int32_t value) ;

constexpr int32_t __get_m_BindingEndIndex() const;

 int32_t __declspec(property(get=__get_m_InteractionCurrentIndex, put=__set_m_InteractionCurrentIndex))  m_InteractionCurrentIndex;

constexpr void __set_m_InteractionCurrentIndex(int32_t value) ;

constexpr int32_t __get_m_InteractionCurrentIndex() const;

 int32_t __declspec(property(get=__get_m_InteractionEndIndex, put=__set_m_InteractionEndIndex))  m_InteractionEndIndex;

constexpr void __set_m_InteractionEndIndex(int32_t value) ;

constexpr int32_t __get_m_InteractionEndIndex() const;

 int32_t __declspec(property(get=__get_m_ProcessorCurrentIndex, put=__set_m_ProcessorCurrentIndex))  m_ProcessorCurrentIndex;

constexpr void __set_m_ProcessorCurrentIndex(int32_t value) ;

constexpr int32_t __get_m_ProcessorCurrentIndex() const;

 int32_t __declspec(property(get=__get_m_ProcessorEndIndex, put=__set_m_ProcessorEndIndex))  m_ProcessorEndIndex;

constexpr void __set_m_ProcessorEndIndex(int32_t value) ;

constexpr int32_t __get_m_ProcessorEndIndex() const;

 ::UnityEngine::InputSystem::InputBinding __declspec(property(get=__get_m_BindingMask, put=__set_m_BindingMask))  m_BindingMask;

constexpr void __set_m_BindingMask(::UnityEngine::InputSystem::InputBinding value) ;

constexpr ::UnityEngine::InputSystem::InputBinding __get_m_BindingMask() const;

 ::System::Type __declspec(property(get=__get_m_ObjectType, put=__set_m_ObjectType))  m_ObjectType;

constexpr void __set_m_ObjectType(::System::Type value) ;

constexpr ::System::Type __get_m_ObjectType() const;

 ::StringW __declspec(property(get=__get_m_ParameterName, put=__set_m_ParameterName))  m_ParameterName;

constexpr void __set_m_ParameterName(::StringW value) ;

constexpr ::StringW __get_m_ParameterName() const;

 bool __declspec(property(get=__get_m_MayBeInteraction, put=__set_m_MayBeInteraction))  m_MayBeInteraction;

constexpr void __set_m_MayBeInteraction(bool value) ;

constexpr bool __get_m_MayBeInteraction() const;

 bool __declspec(property(get=__get_m_MayBeProcessor, put=__set_m_MayBeProcessor))  m_MayBeProcessor;

constexpr void __set_m_MayBeProcessor(bool value) ;

constexpr bool __get_m_MayBeProcessor() const;

 bool __declspec(property(get=__get_m_MayBeComposite, put=__set_m_MayBeComposite))  m_MayBeComposite;

constexpr void __set_m_MayBeComposite(bool value) ;

constexpr bool __get_m_MayBeComposite() const;

 bool __declspec(property(get=__get_m_CurrentBindingIsComposite, put=__set_m_CurrentBindingIsComposite))  m_CurrentBindingIsComposite;

constexpr void __set_m_CurrentBindingIsComposite(bool value) ;

constexpr bool __get_m_CurrentBindingIsComposite() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_CurrentObject, put=__set_m_CurrentObject))  m_CurrentObject;

constexpr void __set_m_CurrentObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_CurrentObject() const;

 ::System::Reflection::FieldInfo __declspec(property(get=__get_m_CurrentParameter, put=__set_m_CurrentParameter))  m_CurrentParameter;

constexpr void __set_m_CurrentParameter(::System::Reflection::FieldInfo value) ;

constexpr ::System::Reflection::FieldInfo __get_m_CurrentParameter() const;


// Properties

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x28b20f4 size 0x248 virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputActionState state, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride parameter, int32_t mapIndex) ;

/// @brief Method MoveToNextBinding addr 0x28b262c size 0x1bc virtual false final false
 bool MoveToNextBinding() ;

/// @brief Method MoveToNextInteraction addr 0x28b27e8 size 0x70 virtual false final false
 bool MoveToNextInteraction() ;

/// @brief Method MoveToNextProcessor addr 0x28b2940 size 0x70 virtual false final false
 bool MoveToNextProcessor() ;

/// @brief Method FindParameter addr 0x28b2858 size 0xe8 virtual false final false
 bool FindParameter(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method MoveNext addr 0x28acda4 size 0xb4 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x28b2560 size 0xcc virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x28acd90 size 0x14 virtual true final true
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28b29b0 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x28b2a14 size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ParameterOverride
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6239))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::ParameterOverride
struct CORDL_TYPE ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "objectRegistrationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "parameter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride(::StringW objectRegistrationName, ::StringW parameter, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x78};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_objectRegistrationName, put=__set_objectRegistrationName))  objectRegistrationName;

constexpr void __set_objectRegistrationName(::StringW value) ;

constexpr ::StringW __get_objectRegistrationName() const;

 ::StringW __declspec(property(get=__get_parameter, put=__set_parameter))  parameter;

constexpr void __set_parameter(::StringW value) ;

constexpr ::StringW __get_parameter() const;

 ::UnityEngine::InputSystem::InputBinding __declspec(property(get=__get_bindingMask, put=__set_bindingMask))  bindingMask;

constexpr void __set_bindingMask(::UnityEngine::InputSystem::InputBinding value) ;

constexpr ::UnityEngine::InputSystem::InputBinding __get_bindingMask() const;

 ::UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue __get_value() const;


// Properties

 ::System::Type __declspec(property(get=get_objectType))  objectType;


// Methods

/// @brief Method get_objectType addr 0x28b24ac size 0xb4 virtual false final false
 ::System::Type get_objectType() ;

/// @brief Method .ctor addr 0x28aca9c size 0xa4 virtual false final false
 void _ctor(::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method .ctor addr 0x28b2a18 size 0x34 virtual false final false
 void _ctor(::StringW objectRegistrationName, ::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method Find addr 0x28ada90 size 0x1ac virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> Find(::UnityEngine::InputSystem::InputActionMap actionMap, ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName) ;

/// @brief Method Find addr 0x28b2a4c size 0x21c virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> Find(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> overrides, int32_t overrideCount, ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName) ;

/// @brief Method PickMoreSpecificOne addr 0x28b2c68 size 0x280 virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> PickMoreSpecificOne(::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> first, ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> second) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6240))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::RebindingOperation::Flags
struct CORDL_TYPE ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags(int32_t value__) noexcept;


                    constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags(______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const&) = default;
                    constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags(______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags&&) = default;
                    constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags& operator=(______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags& operator=(______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ________UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped : int32_t {
__Started = 1,
__Completed = 2,
__Canceled = 4,
__OnEventHooked = 8,
__OnAfterUpdateHooked = 16,
__DontIgnoreNoisyControls = 64,
__DontGeneralizePathOfSelectedControl = 128,
__AddNewBinding = 256,
__SuppressMatchingEvents = 512,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ________UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped () const noexcept {
return std::bit_cast<________UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Started offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const Started;

/// @brief Field Completed offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const Completed;

/// @brief Field Canceled offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const Canceled;

/// @brief Field OnEventHooked offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const OnEventHooked;

/// @brief Field OnAfterUpdateHooked offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const OnAfterUpdateHooked;

/// @brief Field DontIgnoreNoisyControls offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const DontIgnoreNoisyControls;

/// @brief Field DontGeneralizePathOfSelectedControl offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const DontGeneralizePathOfSelectedControl;

/// @brief Field AddNewBinding offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const AddNewBinding;

/// @brief Field SuppressMatchingEvents offset 0
static ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags const SuppressMatchingEvents;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass32_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6241))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::RebindingOperation::<>c__DisplayClass32_0
class CORDL_TYPE ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0", modifiers: " const&", def_value: None }]
constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0(______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0(______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0& operator=(______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0&& o) noexcept = default;
  constexpr ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0& operator=(______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_group, put=__set_group))  group;

constexpr void __set_group(::StringW value) ;

constexpr ::StringW __get_group() const;


// Methods

// Ctor Parameters []
explicit ______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0() ;

/// @brief Method .ctor addr 0x28b33ec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <WithTargetBinding>b__0 addr 0x28b4e64 size 0x24 virtual false final false
 bool _WithTargetBinding_b__0(::UnityEngine::InputSystem::InputControlScheme x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RebindingOperation
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6242))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::RebindingOperation
class CORDL_TYPE ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass32_0 = ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0;

using Flags = ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation(____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation(____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaultMagnitudeThreshold offset 0
static constexpr float_t  kDefaultMagnitudeThreshold{0.2};

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_ActionToRebind, put=__set_m_ActionToRebind))  m_ActionToRebind;

constexpr void __set_m_ActionToRebind(::UnityEngine::InputSystem::InputAction value) ;

constexpr ::UnityEngine::InputSystem::InputAction __get_m_ActionToRebind() const;

 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_BindingMask, put=__set_m_BindingMask))  m_BindingMask;

constexpr void __set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __get_m_BindingMask() const;

 ::System::Type __declspec(property(get=__get_m_ControlType, put=__set_m_ControlType))  m_ControlType;

constexpr void __set_m_ControlType(::System::Type value) ;

constexpr ::System::Type __get_m_ControlType() const;

 ::UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_m_ExpectedLayout, put=__set_m_ExpectedLayout))  m_ExpectedLayout;

constexpr void __set_m_ExpectedLayout(::UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString __get_m_ExpectedLayout() const;

 int32_t __declspec(property(get=__get_m_IncludePathCount, put=__set_m_IncludePathCount))  m_IncludePathCount;

constexpr void __set_m_IncludePathCount(int32_t value) ;

constexpr int32_t __get_m_IncludePathCount() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_IncludePaths, put=__set_m_IncludePaths))  m_IncludePaths;

constexpr void __set_m_IncludePaths(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_IncludePaths() const;

 int32_t __declspec(property(get=__get_m_ExcludePathCount, put=__set_m_ExcludePathCount))  m_ExcludePathCount;

constexpr void __set_m_ExcludePathCount(int32_t value) ;

constexpr int32_t __get_m_ExcludePathCount() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_ExcludePaths, put=__set_m_ExcludePaths))  m_ExcludePaths;

constexpr void __set_m_ExcludePaths(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_ExcludePaths() const;

 int32_t __declspec(property(get=__get_m_TargetBindingIndex, put=__set_m_TargetBindingIndex))  m_TargetBindingIndex;

constexpr void __set_m_TargetBindingIndex(int32_t value) ;

constexpr int32_t __get_m_TargetBindingIndex() const;

 ::StringW __declspec(property(get=__get_m_BindingGroupForNewBinding, put=__set_m_BindingGroupForNewBinding))  m_BindingGroupForNewBinding;

constexpr void __set_m_BindingGroupForNewBinding(::StringW value) ;

constexpr ::StringW __get_m_BindingGroupForNewBinding() const;

 ::StringW __declspec(property(get=__get_m_CancelBinding, put=__set_m_CancelBinding))  m_CancelBinding;

constexpr void __set_m_CancelBinding(::StringW value) ;

constexpr ::StringW __get_m_CancelBinding() const;

 float_t __declspec(property(get=__get_m_MagnitudeThreshold, put=__set_m_MagnitudeThreshold))  m_MagnitudeThreshold;

constexpr void __set_m_MagnitudeThreshold(float_t value) ;

constexpr float_t __get_m_MagnitudeThreshold() const;

 ::ArrayW<float_t> __declspec(property(get=__get_m_Scores, put=__set_m_Scores))  m_Scores;

constexpr void __set_m_Scores(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_Scores() const;

 ::ArrayW<float_t> __declspec(property(get=__get_m_Magnitudes, put=__set_m_Magnitudes))  m_Magnitudes;

constexpr void __set_m_Magnitudes(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_Magnitudes() const;

 double_t __declspec(property(get=__get_m_LastMatchTime, put=__set_m_LastMatchTime))  m_LastMatchTime;

constexpr void __set_m_LastMatchTime(double_t value) ;

constexpr double_t __get_m_LastMatchTime() const;

 double_t __declspec(property(get=__get_m_StartTime, put=__set_m_StartTime))  m_StartTime;

constexpr void __set_m_StartTime(double_t value) ;

constexpr double_t __get_m_StartTime() const;

 float_t __declspec(property(get=__get_m_Timeout, put=__set_m_Timeout))  m_Timeout;

constexpr void __set_m_Timeout(float_t value) ;

constexpr float_t __get_m_Timeout() const;

 float_t __declspec(property(get=__get_m_WaitSecondsAfterMatch, put=__set_m_WaitSecondsAfterMatch))  m_WaitSecondsAfterMatch;

constexpr void __set_m_WaitSecondsAfterMatch(float_t value) ;

constexpr float_t __get_m_WaitSecondsAfterMatch() const;

 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_Candidates, put=__set_m_Candidates))  m_Candidates;

constexpr void __set_m_Candidates(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> value) ;

constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> __get_m_Candidates() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> __declspec(property(get=__get_m_OnComplete, put=__set_m_OnComplete))  m_OnComplete;

constexpr void __set_m_OnComplete(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> __get_m_OnComplete() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> __declspec(property(get=__get_m_OnCancel, put=__set_m_OnCancel))  m_OnCancel;

constexpr void __set_m_OnCancel(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> __get_m_OnCancel() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> __declspec(property(get=__get_m_OnPotentialMatch, put=__set_m_OnPotentialMatch))  m_OnPotentialMatch;

constexpr void __set_m_OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> __get_m_OnPotentialMatch() const;

 ::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW> __declspec(property(get=__get_m_OnGeneratePath, put=__set_m_OnGeneratePath))  m_OnGeneratePath;

constexpr void __set_m_OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW> value) ;

constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW> __get_m_OnGeneratePath() const;

 ::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> __declspec(property(get=__get_m_OnComputeScore, put=__set_m_OnComputeScore))  m_OnComputeScore;

constexpr void __set_m_OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> value) ;

constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> __get_m_OnComputeScore() const;

 ::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW> __declspec(property(get=__get_m_OnApplyBinding, put=__set_m_OnApplyBinding))  m_OnApplyBinding;

constexpr void __set_m_OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW> value) ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW> __get_m_OnApplyBinding() const;

 ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_m_OnEventDelegate, put=__set_m_OnEventDelegate))  m_OnEventDelegate;

constexpr void __set_m_OnEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> value) ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> __get_m_OnEventDelegate() const;

 ::System::Action __declspec(property(get=__get_m_OnAfterUpdateDelegate, put=__set_m_OnAfterUpdateDelegate))  m_OnAfterUpdateDelegate;

constexpr void __set_m_OnAfterUpdateDelegate(::System::Action value) ;

constexpr ::System::Action __get_m_OnAfterUpdateDelegate() const;

 ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache __declspec(property(get=__get_m_LayoutCache, put=__set_m_LayoutCache))  m_LayoutCache;

constexpr void __set_m_LayoutCache(::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache value) ;

constexpr ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Cache __get_m_LayoutCache() const;

 ::System::Text::StringBuilder __declspec(property(get=__get_m_PathBuilder, put=__set_m_PathBuilder))  m_PathBuilder;

constexpr void __set_m_PathBuilder(::System::Text::StringBuilder value) ;

constexpr ::System::Text::StringBuilder __get_m_PathBuilder() const;

 ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags value) ;

constexpr ::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags __get_m_Flags() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl,float_t> __declspec(property(get=__get_m_StartingActuations, put=__set_m_StartingActuations))  m_StartingActuations;

constexpr void __set_m_StartingActuations(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl,float_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl,float_t> __get_m_StartingActuations() const;


// Properties

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=get_action))  action;

 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=get_bindingMask))  bindingMask;

 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> __declspec(property(get=get_candidates))  candidates;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> __declspec(property(get=get_scores))  scores;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> __declspec(property(get=get_magnitudes))  magnitudes;

 ::UnityEngine::InputSystem::InputControl __declspec(property(get=get_selectedControl))  selectedControl;

 bool __declspec(property(get=get_started))  started;

 bool __declspec(property(get=get_completed))  completed;

 bool __declspec(property(get=get_canceled))  canceled;

 double_t __declspec(property(get=get_startTime))  startTime;

 float_t __declspec(property(get=get_timeout))  timeout;

 ::StringW __declspec(property(get=get_expectedControlType))  expectedControlType;


// Methods

/// @brief Method get_action addr 0x28b2ee8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputAction get_action() ;

/// @brief Method get_bindingMask addr 0x28b2ef0 size 0x10 virtual false final false
 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask() ;

/// @brief Method get_candidates addr 0x28b2f00 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl> get_candidates() ;

/// @brief Method get_scores addr 0x28b2f14 size 0x74 virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_scores() ;

/// @brief Method get_magnitudes addr 0x28b2f88 size 0x74 virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_magnitudes() ;

/// @brief Method get_selectedControl addr 0x28b2ffc size 0x70 virtual false final false
 ::UnityEngine::InputSystem::InputControl get_selectedControl() ;

/// @brief Method get_started addr 0x28b306c size 0xc virtual false final false
 bool get_started() ;

/// @brief Method get_completed addr 0x28b3078 size 0xc virtual false final false
 bool get_completed() ;

/// @brief Method get_canceled addr 0x28b3084 size 0xc virtual false final false
 bool get_canceled() ;

/// @brief Method get_startTime addr 0x28b3090 size 0x8 virtual false final false
 double_t get_startTime() ;

/// @brief Method get_timeout addr 0x28b3098 size 0x8 virtual false final false
 float_t get_timeout() ;

/// @brief Method get_expectedControlType addr 0x28b1b30 size 0x10 virtual false final false
 ::StringW get_expectedControlType() ;

/// @brief Method WithAction addr 0x28b182c size 0x194 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithAction(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method WithMatchingEventsBeingSuppressed addr 0x28b1af4 size 0x3c virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithMatchingEventsBeingSuppressed(bool value) ;

/// @brief Method WithCancelingThrough addr 0x28b1b40 size 0x28 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithCancelingThrough(::StringW binding) ;

/// @brief Method WithCancelingThrough addr 0x28b3148 size 0x90 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithCancelingThrough(::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method WithExpectedControlType addr 0x28b3100 size 0x48 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithExpectedControlType(::StringW layoutName) ;

/// @brief Method WithExpectedControlType addr 0x28b31d8 size 0x174 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithExpectedControlType(::System::Type type) ;

/// @brief Method WithExpectedControlType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithExpectedControlType() ;

/// @brief Method WithTargetBinding addr 0x28b1b68 size 0x534 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithTargetBinding(int32_t bindingIndex) ;

/// @brief Method WithBindingMask addr 0x28b3520 size 0x20 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithBindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask) ;

/// @brief Method WithBindingGroup addr 0x28b3540 size 0x98 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithBindingGroup(::StringW group) ;

/// @brief Method WithoutGeneralizingPathOfSelectedControl addr 0x28b35d8 size 0x10 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithoutGeneralizingPathOfSelectedControl() ;

/// @brief Method WithRebindAddingNewBinding addr 0x28b35e8 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithRebindAddingNewBinding(::StringW group) ;

/// @brief Method WithMagnitudeHavingToBeGreaterThan addr 0x28b35fc size 0xc8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithMagnitudeHavingToBeGreaterThan(float_t magnitude) ;

/// @brief Method WithoutIgnoringNoisyControls addr 0x28b36c4 size 0x24 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithoutIgnoringNoisyControls() ;

/// @brief Method WithControlsHavingToMatchPath addr 0x28b33f4 size 0x12c virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithControlsHavingToMatchPath(::StringW path) ;

/// @brief Method WithControlsExcluding addr 0x28b19c8 size 0x12c virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithControlsExcluding(::StringW path) ;

/// @brief Method WithTimeout addr 0x28b36e8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation WithTimeout(float_t timeInSeconds) ;

/// @brief Method OnComplete addr 0x28b36f0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation OnComplete(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> callback) ;

/// @brief Method OnCancel addr 0x28b36f8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation OnCancel(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> callback) ;

/// @brief Method OnPotentialMatch addr 0x28b3700 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation> callback) ;

/// @brief Method OnGeneratePath addr 0x28b3708 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl,::StringW> callback) ;

/// @brief Method OnComputeScore addr 0x28b3710 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> callback) ;

/// @brief Method OnApplyBinding addr 0x28b3718 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation,::StringW> callback) ;

/// @brief Method OnMatchWaitForAnother addr 0x28b19c0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation OnMatchWaitForAnother(float_t seconds) ;

/// @brief Method Start addr 0x28b3720 size 0x168 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation Start() ;

/// @brief Method Cancel addr 0x28b3a30 size 0x10 virtual false final false
 void Cancel() ;

/// @brief Method Complete addr 0x28b3a7c size 0x10 virtual false final false
 void Complete() ;

/// @brief Method AddCandidate addr 0x28b3d98 size 0x178 virtual false final false
 void AddCandidate(::UnityEngine::InputSystem::InputControl control, float_t score, float_t magnitude) ;

/// @brief Method RemoveCandidate addr 0x28b4034 size 0x120 virtual false final false
 void RemoveCandidate(::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Dispose addr 0x28b4154 size 0x64 virtual true final true
 void Dispose() ;

/// @brief Method Finalize addr 0x28b42b4 size 0x94 virtual true final false
 void Finalize() ;

/// @brief Method Reset addr 0x28b4348 size 0x98 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation Reset() ;

/// @brief Method HookOnEvent addr 0x28b3950 size 0xe0 virtual false final false
 void HookOnEvent() ;

/// @brief Method UnhookOnEvent addr 0x28b41b8 size 0x88 virtual false final false
 void UnhookOnEvent() ;

/// @brief Method OnEvent addr 0x28b43e0 size 0x74c virtual false final false
 void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method SortCandidatesByScore addr 0x28b3f10 size 0x124 virtual false final false
 void SortCandidatesByScore() ;

/// @brief Method HavePathMatch addr 0x28b4b2c size 0x7c virtual false final false
static bool HavePathMatch(::UnityEngine::InputSystem::InputControl control, ::ArrayW<::StringW> paths, int32_t pathCount) ;

/// @brief Method HookOnAfterUpdate addr 0x28b3888 size 0xc8 virtual false final false
 void HookOnAfterUpdate() ;

/// @brief Method UnhookOnAfterUpdate addr 0x28b4240 size 0x74 virtual false final false
 void UnhookOnAfterUpdate() ;

/// @brief Method OnAfterUpdate addr 0x28b4ba8 size 0xa8 virtual false final false
 void OnAfterUpdate() ;

/// @brief Method OnComplete addr 0x28b3a8c size 0x30c virtual false final false
 void OnComplete() ;

/// @brief Method OnCancel addr 0x28b3a40 size 0x3c virtual false final false
 void OnCancel() ;

/// @brief Method ResetAfterMatchCompleted addr 0x28b4da0 size 0xc4 virtual false final false
 void ResetAfterMatchCompleted() ;

/// @brief Method ThrowIfRebindInProgress addr 0x28b30a0 size 0x60 virtual false final false
 void ThrowIfRebindInProgress() ;

/// @brief Method GeneratePathForControl addr 0x28b4c50 size 0x104 virtual false final false
 ::StringW GeneratePathForControl(::UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation() ;

/// @brief Method .ctor addr 0x28b179c size 0x90 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DeferBindingResolutionWrapper
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6243))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::DeferBindingResolutionWrapper
class CORDL_TYPE ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper(____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper(____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper const& o) noexcept = default;
                


// Methods

/// @brief Method Acquire addr 0x28b20a4 size 0x50 virtual false final false
 void Acquire() ;

/// @brief Method Dispose addr 0x28b4e88 size 0x6c virtual true final true
 void Dispose() ;

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper() ;

/// @brief Method .ctor addr 0x28b209c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c__DisplayClass25_0
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6244))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions::<>c__DisplayClass25_0
class CORDL_TYPE ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0(____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0(____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0& operator=(____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_bindings, put=__set_bindings))  bindings;

constexpr void __set_bindings(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> __get_bindings() const;

 int32_t __declspec(property(get=__get_firstPartIndex, put=__set_firstPartIndex))  firstPartIndex;

constexpr void __set_firstPartIndex(int32_t value) ;

constexpr int32_t __get_firstPartIndex() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_partStrings, put=__set_partStrings))  partStrings;

constexpr void __set_partStrings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_partStrings() const;

 int32_t __declspec(property(get=__get_partCount, put=__set_partCount))  partCount;

constexpr void __set_partCount(int32_t value) ;

constexpr int32_t __get_partCount() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0() ;

/// @brief Method .ctor addr 0x28aebdc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetBindingDisplayString>b__0 addr 0x28b4ef4 size 0x160 virtual false final false
 ::StringW _GetBindingDisplayString_b__0(::StringW fragment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionRebindingExtensions
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6245))
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions
class CORDL_TYPE InputActionRebindingExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass25_0 = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0;

using DeferBindingResolutionWrapper = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper;

using RebindingOperation = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation;

using ParameterOverride = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride;

using ParameterEnumerator = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator;

using ParameterEnumerable = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable;

using Parameter = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputActionRebindingExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions", modifiers: " const&", def_value: None }]
constexpr InputActionRebindingExtensions(InputActionRebindingExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions", modifiers: "&&", def_value: None }]
constexpr InputActionRebindingExtensions(InputActionRebindingExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputActionRebindingExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputActionRebindingExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputActionRebindingExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputActionRebindingExtensions& operator=(InputActionRebindingExtensions&& o) noexcept = default;
  constexpr InputActionRebindingExtensions& operator=(InputActionRebindingExtensions const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper __declspec(property(get=__get_s_DeferBindingResolutionWrapper, put=__set_s_DeferBindingResolutionWrapper))  s_DeferBindingResolutionWrapper;

static void __set_s_DeferBindingResolutionWrapper(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper value) ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper __get_s_DeferBindingResolutionWrapper() ;


// Methods

/// @brief Method GetParameterValue addr 0x28ac968 size 0x134 virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction action, ::StringW name, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method GetParameterValue addr 0x28acb40 size 0x1bc virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride parameterOverride) ;

/// @brief Method GetParameterValue addr 0x28ace58 size 0x218 virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction action, ::StringW name, int32_t bindingIndex) ;

/// @brief Method GetParameterValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static ::System::Nullable_1<TValue> GetParameterValue(::UnityEngine::InputSystem::InputAction action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, TValue value, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap actionMap, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, TValue value, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset asset, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, TValue value, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method ExtractParameterOverride addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TValue>
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride ExtractParameterOverride(::System::Linq::Expressions::Expression_1<::System::Func_2<TObject,TValue>> expr, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method ApplyParameterOverride addr 0x28ad070 size 0x14c virtual false final false
static void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap actionMap, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x28ad584 size 0x198 virtual false final false
static void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset asset, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x28ad71c size 0x164 virtual false final false
static void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction action, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method ApplyParameterOverride addr 0x28ad880 size 0x210 virtual false final false
static void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction action, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, int32_t bindingIndex) ;

/// @brief Method ApplyParameterOverride addr 0x28ad1bc size 0x3c8 virtual false final false
static void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionState state, int32_t mapIndex, ByRef<::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>> parameterOverrides, ByRef<int32_t> parameterOverridesCount, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride parameterOverride) ;

/// @brief Method GetBindingIndex addr 0x28adc3c size 0x118 virtual false final false
static int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method GetBindingIndex addr 0x28add54 size 0x118 virtual false final false
static int32_t GetBindingIndex(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method GetBindingIndex addr 0x28ade6c size 0xc0 virtual false final false
static int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction action, ::StringW group, ::StringW path) ;

/// @brief Method GetBindingForControl addr 0x28adf2c size 0x178 virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> GetBindingForControl(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method GetBindingIndexForControl addr 0x28ae0a4 size 0x1ac virtual false final false
static int32_t GetBindingIndexForControl(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method GetBindingDisplayString addr 0x28ae250 size 0x164 virtual false final false
static ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options, ::StringW group) ;

/// @brief Method GetBindingDisplayString addr 0x28ae3b4 size 0x210 virtual false final false
static ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options) ;

/// @brief Method GetBindingDisplayString addr 0x28ae5c4 size 0x78 virtual false final false
static ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options) ;

/// @brief Method GetBindingDisplayString addr 0x28ae63c size 0x5a0 virtual false final false
static ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex, ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputBinding__DisplayStringOptions options) ;

/// @brief Method ApplyBindingOverride addr 0x28aebe4 size 0x84 virtual false final false
static void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction action, ::StringW newPath, ::StringW group, ::StringW path) ;

/// @brief Method ApplyBindingOverride addr 0x28aec68 size 0x10c virtual false final false
static void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding bindingOverride) ;

/// @brief Method ApplyBindingOverride addr 0x28aeea8 size 0xc0 virtual false final false
static void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride) ;

/// @brief Method ApplyBindingOverride addr 0x28af0f4 size 0x9c virtual false final false
static void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex, ::StringW path) ;

/// @brief Method ApplyBindingOverride addr 0x28aed74 size 0x134 virtual false final false
static int32_t ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputBinding bindingOverride) ;

/// @brief Method ApplyBindingOverride addr 0x28aef68 size 0x18c virtual false final false
static void ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap actionMap, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride) ;

/// @brief Method RemoveBindingOverride addr 0x28af190 size 0x80 virtual false final false
static void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex) ;

/// @brief Method RemoveBindingOverride addr 0x28af210 size 0x88 virtual false final false
static void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method RemoveBindingOverride addr 0x28af298 size 0x88 virtual false final false
static void RemoveBindingOverride(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask) ;

/// @brief Method RemoveAllBindingOverrides addr 0x28af320 size 0x540 virtual false final false
static void RemoveAllBindingOverrides(::UnityEngine::InputSystem::IInputActionCollection2 actions) ;

/// @brief Method RemoveAllBindingOverrides addr 0x28af860 size 0x13c virtual false final false
static void RemoveAllBindingOverrides(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method ApplyBindingOverrides addr 0x28af99c size 0x388 virtual false final false
static void ApplyBindingOverrides(::UnityEngine::InputSystem::InputActionMap actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> overrides) ;

/// @brief Method RemoveBindingOverrides addr 0x28afd24 size 0x388 virtual false final false
static void RemoveBindingOverrides(::UnityEngine::InputSystem::InputActionMap actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> overrides) ;

/// @brief Method ApplyBindingOverridesOnMatchingControls addr 0x28b00ac size 0x15c virtual false final false
static int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputAction action, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ApplyBindingOverridesOnMatchingControls addr 0x28b0208 size 0x124 virtual false final false
static int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputActionMap actionMap, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method SaveBindingOverridesAsJson addr 0x28b032c size 0x498 virtual false final false
static ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::IInputActionCollection2 actions) ;

/// @brief Method SaveBindingOverridesAsJson addr 0x28b09a8 size 0x364 virtual false final false
static ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method AddBindingOverrideJsonTo addr 0x28b07c4 size 0x1e4 virtual false final false
static void AddBindingOverrideJsonTo(::UnityEngine::InputSystem::IInputActionCollection2 actions, ::UnityEngine::InputSystem::InputBinding binding, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionMap__BindingOverrideJson> list, ::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method LoadBindingOverridesFromJson addr 0x28b0d0c size 0x1d4 virtual false final false
static void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::IInputActionCollection2 actions, ::StringW json, bool removeExisting) ;

/// @brief Method LoadBindingOverridesFromJson addr 0x28b11d8 size 0x1e8 virtual false final false
static void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::InputAction action, ::StringW json, bool removeExisting) ;

/// @brief Method LoadBindingOverridesFromJsonInternal addr 0x28b0ee0 size 0x2f8 virtual false final false
static void LoadBindingOverridesFromJsonInternal(::UnityEngine::InputSystem::IInputActionCollection2 actions, ::StringW json) ;

/// @brief Method PerformInteractiveRebinding addr 0x28b13c0 size 0x3dc virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation PerformInteractiveRebinding(::UnityEngine::InputSystem::InputAction action, int32_t bindingIndex) ;

/// @brief Method DeferBindingResolution addr 0x28abd60 size 0xe0 virtual false final false
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper DeferBindingResolution() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation__Flags, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation/Flags");
NEED_NO_BOX(::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation/<>c__DisplayClass32_0");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionRebindingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions, "UnityEngine.InputSystem", "InputActionRebindingExtensions");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__DeferBindingResolutionWrapper, "UnityEngine.InputSystem", "InputActionRebindingExtensions/DeferBindingResolutionWrapper");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__RebindingOperation, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions____c__DisplayClass25_0, "UnityEngine.InputSystem", "InputActionRebindingExtensions/<>c__DisplayClass25_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__Parameter, "UnityEngine.InputSystem", "InputActionRebindingExtensions/Parameter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerable, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerable");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterEnumerator, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterOverride");
