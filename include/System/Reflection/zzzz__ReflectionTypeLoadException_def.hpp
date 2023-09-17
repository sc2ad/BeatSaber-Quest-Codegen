#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Reflection {
class ReflectionTypeLoadException;
}
// Type: System.Reflection::ReflectionTypeLoadException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3481))
// CS Name: System.Reflection.ReflectionTypeLoadException
class CORDL_TYPE ReflectionTypeLoadException : public ::System::SystemException {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ReflectionTypeLoadException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeLoadException", modifiers: " const&", def_value: None }]
constexpr ReflectionTypeLoadException(ReflectionTypeLoadException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeLoadException", modifiers: "&&", def_value: None }]
constexpr ReflectionTypeLoadException(ReflectionTypeLoadException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionTypeLoadException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr ReflectionTypeLoadException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionTypeLoadException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionTypeLoadException& operator=(ReflectionTypeLoadException&& o) noexcept = default;
  constexpr ReflectionTypeLoadException& operator=(ReflectionTypeLoadException const& o) noexcept = default;
                


// Fields

 ::ArrayW<::System::Type> __declspec(property(get=__get__Types_k__BackingField, put=__set__Types_k__BackingField))  _Types_k__BackingField;

constexpr void __set__Types_k__BackingField(::ArrayW<::System::Type> value) ;

constexpr ::ArrayW<::System::Type> __get__Types_k__BackingField() const;

 ::ArrayW<::System::Exception> __declspec(property(get=__get__LoaderExceptions_k__BackingField, put=__set__LoaderExceptions_k__BackingField))  _LoaderExceptions_k__BackingField;

constexpr void __set__LoaderExceptions_k__BackingField(::ArrayW<::System::Exception> value) ;

constexpr ::ArrayW<::System::Exception> __get__LoaderExceptions_k__BackingField() const;


// Properties

 ::ArrayW<::System::Exception> __declspec(property(get=get_LoaderExceptions))  LoaderExceptions;

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

// Ctor Parameters [CppParam { name: "classes", ty: "::ArrayW<::System::Type>", modifiers: "", def_value: None }, CppParam { name: "exceptions", ty: "::ArrayW<::System::Exception>", modifiers: "", def_value: None }]
explicit ReflectionTypeLoadException(::ArrayW<::System::Type> classes, ::ArrayW<::System::Exception> exceptions) ;

/// @brief Method .ctor addr 0x237c898 size 0x3c virtual false final false
 void _ctor(::ArrayW<::System::Type> classes, ::ArrayW<::System::Exception> exceptions) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ReflectionTypeLoadException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x237c8d4 size 0x138 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x237ca0c size 0x128 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_LoaderExceptions addr 0x237cb34 size 0x8 virtual false final false
 ::ArrayW<::System::Exception> get_LoaderExceptions() ;

/// @brief Method get_Message addr 0x237cb3c size 0x8 virtual true final false
 ::StringW get_Message() ;

/// @brief Method ToString addr 0x237cc7c size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method CreateString addr 0x237cb44 size 0x138 virtual false final false
 ::StringW CreateString(bool isMessage) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::ReflectionTypeLoadException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ReflectionTypeLoadException, "System.Reflection", "ReflectionTypeLoadException");
