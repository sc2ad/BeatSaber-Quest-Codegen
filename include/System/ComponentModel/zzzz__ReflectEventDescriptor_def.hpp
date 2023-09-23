#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
namespace System {
class Type;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Collections {
class IList;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectEventDescriptor;
}
// Type: System.ComponentModel::ReflectEventDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8301))
// CS Name: System.ComponentModel.ReflectEventDescriptor
class CORDL_TYPE ReflectEventDescriptor : public System::ComponentModel::EventDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ReflectEventDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectEventDescriptor", modifiers: " const&", def_value: None }]
constexpr ReflectEventDescriptor(ReflectEventDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectEventDescriptor", modifiers: "&&", def_value: None }]
constexpr ReflectEventDescriptor(ReflectEventDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectEventDescriptor(void* ptr) noexcept : System::ComponentModel::EventDescriptor(ptr) {
}


  constexpr ReflectEventDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectEventDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectEventDescriptor& operator=(ReflectEventDescriptor&& o) noexcept = default;
  constexpr ReflectEventDescriptor& operator=(ReflectEventDescriptor const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(System::Type value) ;

constexpr System::Type __get__type() const;

 System::Type __declspec(property(get=__get__componentClass, put=__set__componentClass))  _componentClass;

constexpr void __set__componentClass(System::Type value) ;

constexpr System::Type __get__componentClass() const;

 System::Reflection::MethodInfo __declspec(property(get=__get__addMethod, put=__set__addMethod))  _addMethod;

constexpr void __set__addMethod(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get__addMethod() const;

 System::Reflection::MethodInfo __declspec(property(get=__get__removeMethod, put=__set__removeMethod))  _removeMethod;

constexpr void __set__removeMethod(System::Reflection::MethodInfo value) ;

constexpr System::Reflection::MethodInfo __get__removeMethod() const;

 System::Reflection::EventInfo __declspec(property(get=__get__realEvent, put=__set__realEvent))  _realEvent;

constexpr void __set__realEvent(System::Reflection::EventInfo value) ;

constexpr System::Reflection::EventInfo __get__realEvent() const;

 bool __declspec(property(get=__get__filledMethods, put=__set__filledMethods))  _filledMethods;

constexpr void __set__filledMethods(bool value) ;

constexpr bool __get__filledMethods() const;


// Methods

// Ctor Parameters [CppParam { name: "componentClass", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "eventInfo", ty: "System::Reflection::EventInfo", modifiers: "", def_value: None }]
explicit ReflectEventDescriptor(System::Type componentClass, System::Reflection::EventInfo eventInfo) ;

/// @brief Method .ctor addr 0x27842c4 size 0x178 virtual false final false
 void _ctor(System::Type componentClass, System::Reflection::EventInfo eventInfo) ;

/// @brief Method FillAttributes addr 0x278443c size 0x64 virtual true final false
 void FillAttributes(System::Collections::IList attributes) ;

/// @brief Method FillEventInfoAttribute addr 0x27848e8 size 0x328 virtual false final false
 void FillEventInfoAttribute(System::Reflection::EventInfo realEventInfo, System::Collections::IList attributes) ;

/// @brief Method FillMethods addr 0x27844a0 size 0x448 virtual false final false
 void FillMethods() ;

/// @brief Method FillSingleMethodAttribute addr 0x2784c10 size 0x368 virtual false final false
 void FillSingleMethodAttribute(System::Reflection::MethodInfo realMethodInfo, System::Collections::IList attributes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ReflectEventDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ReflectEventDescriptor, "System.ComponentModel", "ReflectEventDescriptor");
