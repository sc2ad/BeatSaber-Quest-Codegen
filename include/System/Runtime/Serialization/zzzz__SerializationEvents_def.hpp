#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationEvents;
}
// Type: System.Runtime.Serialization::SerializationEvents
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3203))
// CS Name: System.Runtime.Serialization.SerializationEvents
class CORDL_TYPE SerializationEvents : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SerializationEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationEvents", modifiers: " const&", def_value: None }]
constexpr SerializationEvents(SerializationEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationEvents", modifiers: "&&", def_value: None }]
constexpr SerializationEvents(SerializationEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationEvents(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationEvents& operator=(SerializationEvents&& o) noexcept = default;
  constexpr SerializationEvents& operator=(SerializationEvents const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Reflection::MethodInfo> __declspec(property(get=__get__onSerializingMethods, put=__set__onSerializingMethods))  _onSerializingMethods;

constexpr void __set__onSerializingMethods(System::Collections::Generic::List_1<System::Reflection::MethodInfo> value) ;

constexpr System::Collections::Generic::List_1<System::Reflection::MethodInfo> __get__onSerializingMethods() const;

 System::Collections::Generic::List_1<System::Reflection::MethodInfo> __declspec(property(get=__get__onSerializedMethods, put=__set__onSerializedMethods))  _onSerializedMethods;

constexpr void __set__onSerializedMethods(System::Collections::Generic::List_1<System::Reflection::MethodInfo> value) ;

constexpr System::Collections::Generic::List_1<System::Reflection::MethodInfo> __get__onSerializedMethods() const;

 System::Collections::Generic::List_1<System::Reflection::MethodInfo> __declspec(property(get=__get__onDeserializingMethods, put=__set__onDeserializingMethods))  _onDeserializingMethods;

constexpr void __set__onDeserializingMethods(System::Collections::Generic::List_1<System::Reflection::MethodInfo> value) ;

constexpr System::Collections::Generic::List_1<System::Reflection::MethodInfo> __get__onDeserializingMethods() const;

 System::Collections::Generic::List_1<System::Reflection::MethodInfo> __declspec(property(get=__get__onDeserializedMethods, put=__set__onDeserializedMethods))  _onDeserializedMethods;

constexpr void __set__onDeserializedMethods(System::Collections::Generic::List_1<System::Reflection::MethodInfo> value) ;

constexpr System::Collections::Generic::List_1<System::Reflection::MethodInfo> __get__onDeserializedMethods() const;


// Properties

 bool __declspec(property(get=get_HasOnSerializingEvents))  HasOnSerializingEvents;


// Methods

// Ctor Parameters [CppParam { name: "t", ty: "System::Type", modifiers: "", def_value: None }]
explicit SerializationEvents(System::Type t) ;

/// @brief Method .ctor addr 0x2348d40 size 0x134 virtual false final false
 void _ctor(System::Type t) ;

/// @brief Method GetMethodsWithAttribute addr 0x2348e74 size 0x244 virtual false final false
 System::Collections::Generic::List_1<System::Reflection::MethodInfo> GetMethodsWithAttribute(System::Type attribute, System::Type t) ;

/// @brief Method get_HasOnSerializingEvents addr 0x23490b8 size 0x20 virtual false final false
 bool get_HasOnSerializingEvents() ;

/// @brief Method InvokeOnSerializing addr 0x23490d8 size 0x54 virtual false final false
 void InvokeOnSerializing(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InvokeOnDeserializing addr 0x234917c size 0x54 virtual false final false
 void InvokeOnDeserializing(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InvokeOnDeserialized addr 0x23491d0 size 0x54 virtual false final false
 void InvokeOnDeserialized(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method AddOnSerialized addr 0x2349224 size 0x14 virtual false final false
 System::Runtime::Serialization::SerializationEventHandler AddOnSerialized(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationEventHandler handler) ;

/// @brief Method AddOnDeserialized addr 0x2349474 size 0x14 virtual false final false
 System::Runtime::Serialization::SerializationEventHandler AddOnDeserialized(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationEventHandler handler) ;

/// @brief Method InvokeOnDelegate addr 0x234912c size 0x50 virtual false final false
static void InvokeOnDelegate(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::StreamingContext context, System::Collections::Generic::List_1<System::Reflection::MethodInfo> methods) ;

/// @brief Method AddOnDelegate addr 0x2349238 size 0x23c virtual false final false
static System::Runtime::Serialization::SerializationEventHandler AddOnDelegate(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationEventHandler handler, System::Collections::Generic::List_1<System::Reflection::MethodInfo> methods) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SerializationEvents);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEvents, "System.Runtime.Serialization", "SerializationEvents");
