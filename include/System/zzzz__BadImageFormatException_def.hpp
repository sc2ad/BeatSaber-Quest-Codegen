#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class BadImageFormatException;
}
// Type: System::BadImageFormatException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2356))
// CS Name: System.BadImageFormatException
class CORDL_TYPE BadImageFormatException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~BadImageFormatException() = default;

// Ctor Parameters [CppParam { name: "", ty: "BadImageFormatException", modifiers: " const&", def_value: None }]
constexpr BadImageFormatException(BadImageFormatException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BadImageFormatException", modifiers: "&&", def_value: None }]
constexpr BadImageFormatException(BadImageFormatException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BadImageFormatException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr BadImageFormatException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BadImageFormatException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BadImageFormatException& operator=(BadImageFormatException&& o) noexcept = default;
  constexpr BadImageFormatException& operator=(BadImageFormatException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__fileName, put=__set__fileName))  _fileName;

constexpr void __set__fileName(::StringW value) ;

constexpr ::StringW __get__fileName() const;

 ::StringW __declspec(property(get=__get__fusionLog, put=__set__fusionLog))  _fusionLog;

constexpr void __set__fusionLog(::StringW value) ;

constexpr ::StringW __get__fusionLog() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

static System::BadImageFormatException New_ctor() ;

/// @brief Method .ctor addr 0x23b4a30 size 0x5c virtual false final false
 void _ctor() ;

static System::BadImageFormatException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x23b4a8c size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::BadImageFormatException New_ctor(::StringW message, System::Exception inner) ;

/// @brief Method .ctor addr 0x23b4ab0 size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception inner) ;

static System::BadImageFormatException New_ctor(::StringW message, ::StringW fileName) ;

/// @brief Method .ctor addr 0x23b4ad4 size 0x34 virtual false final false
 void _ctor(::StringW message, ::StringW fileName) ;

static System::BadImageFormatException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b4b08 size 0xb0 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x23b4bb8 size 0x118 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x23b4cd0 size 0x18 virtual true final false
 ::StringW get_Message() ;

/// @brief Method SetMessageField addr 0x23b4ce8 size 0x7c virtual false final false
 void SetMessageField() ;

/// @brief Method ToString addr 0x23b4d64 size 0x1e4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::BadImageFormatException);
DEFINE_IL2CPP_ARG_TYPE(System::BadImageFormatException, "System", "BadImageFormatException");
