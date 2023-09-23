#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net {
class CookieException;
}
// Type: System.Net::CookieException
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2382))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7984))
// CS Name: System.Net.CookieException
class CORDL_TYPE CookieException : public System::FormatException {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CookieException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieException", modifiers: " const&", def_value: None }]
constexpr CookieException(CookieException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieException", modifiers: "&&", def_value: None }]
constexpr CookieException(CookieException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CookieException(void* ptr) noexcept : System::FormatException(ptr) {
}


  constexpr CookieException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CookieException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CookieException& operator=(CookieException&& o) noexcept = default;
  constexpr CookieException& operator=(CookieException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CookieException() ;

/// @brief Method .ctor addr 0x2821e2c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit CookieException(::StringW message) ;

/// @brief Method .ctor addr 0x2819a60 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inner", ty: "System::Exception", modifiers: "", def_value: None }]
explicit CookieException(::StringW message, System::Exception inner) ;

/// @brief Method .ctor addr 0x281fd20 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception inner) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit CookieException(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x2821e34 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2821e3c size 0x8 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x2821e44 size 0x8 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::CookieException);
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieException, "System.Net", "CookieException");
