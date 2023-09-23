#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security {
class XmlSyntaxException;
}
// Type: System.Security::XmlSyntaxException
namespace System::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2876))
// CS Name: System.Security.XmlSyntaxException
class CORDL_TYPE XmlSyntaxException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~XmlSyntaxException() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSyntaxException", modifiers: " const&", def_value: None }]
constexpr XmlSyntaxException(XmlSyntaxException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSyntaxException", modifiers: "&&", def_value: None }]
constexpr XmlSyntaxException(XmlSyntaxException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSyntaxException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr XmlSyntaxException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSyntaxException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSyntaxException& operator=(XmlSyntaxException&& o) noexcept = default;
  constexpr XmlSyntaxException& operator=(XmlSyntaxException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit XmlSyntaxException() ;

/// @brief Method .ctor addr 0x22e411c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }]
explicit XmlSyntaxException(int32_t lineNumber) ;

/// @brief Method .ctor addr 0x22e4124 size 0x8 virtual false final false
 void _ctor(int32_t lineNumber) ;

// Ctor Parameters [CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlSyntaxException(int32_t lineNumber, ::StringW message) ;

/// @brief Method .ctor addr 0x22e412c size 0x8 virtual false final false
 void _ctor(int32_t lineNumber, ::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit XmlSyntaxException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x22e4134 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
NEED_NO_BOX(System::Security::XmlSyntaxException);
DEFINE_IL2CPP_ARG_TYPE(System::Security::XmlSyntaxException, "System.Security", "XmlSyntaxException");
