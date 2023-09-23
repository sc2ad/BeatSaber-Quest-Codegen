#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class TypeLoadException;
}
// Type: System::TypeLoadException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2572))
// CS Name: System.TypeLoadException
class CORDL_TYPE TypeLoadException : public System::SystemException {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~TypeLoadException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeLoadException", modifiers: " const&", def_value: None }]
constexpr TypeLoadException(TypeLoadException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeLoadException", modifiers: "&&", def_value: None }]
constexpr TypeLoadException(TypeLoadException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeLoadException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr TypeLoadException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeLoadException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeLoadException& operator=(TypeLoadException&& o) noexcept = default;
  constexpr TypeLoadException& operator=(TypeLoadException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ClassName, put=__set_ClassName))  ClassName;

constexpr void __set_ClassName(::StringW value) ;

constexpr ::StringW __get_ClassName() const;

 ::StringW __declspec(property(get=__get_AssemblyName, put=__set_AssemblyName))  AssemblyName;

constexpr void __set_AssemblyName(::StringW value) ;

constexpr ::StringW __get_AssemblyName() const;

 ::StringW __declspec(property(get=__get_MessageArg, put=__set_MessageArg))  MessageArg;

constexpr void __set_MessageArg(::StringW value) ;

constexpr ::StringW __get_MessageArg() const;

 int32_t __declspec(property(get=__get_ResourceId, put=__set_ResourceId))  ResourceId;

constexpr void __set_ResourceId(int32_t value) ;

constexpr int32_t __get_ResourceId() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

// Ctor Parameters []
explicit TypeLoadException() ;

/// @brief Method .ctor addr 0x2483e5c size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TypeLoadException(::StringW message) ;

/// @brief Method .ctor addr 0x2483ebc size 0x28 virtual false final false
 void _ctor(::StringW message) ;

/// @brief Method get_Message addr 0x2483ee4 size 0x18 virtual true final false
 ::StringW get_Message() ;

/// @brief Method SetMessageField addr 0x2483efc size 0xf0 virtual false final false
 void SetMessageField() ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }]
explicit TypeLoadException(::StringW className, ::StringW assemblyName) ;

/// @brief Method .ctor addr 0x2483fec size 0xc virtual false final false
 void _ctor(::StringW className, ::StringW assemblyName) ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "messageArg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "resourceId", ty: "int32_t", modifiers: "", def_value: None }]
explicit TypeLoadException(::StringW className, ::StringW assemblyName, ::StringW messageArg, int32_t resourceId) ;

/// @brief Method .ctor addr 0x2483ff8 size 0x60 virtual false final false
 void _ctor(::StringW className, ::StringW assemblyName, ::StringW messageArg, int32_t resourceId) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TypeLoadException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2484058 size 0x148 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x24841a0 size 0x1d4 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::TypeLoadException);
DEFINE_IL2CPP_ARG_TYPE(System::TypeLoadException, "System", "TypeLoadException");
