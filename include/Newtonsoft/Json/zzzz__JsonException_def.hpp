#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonException;
}
// Type: Newtonsoft.Json::JsonException
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11746))
// CS Name: Newtonsoft.Json.JsonException
class CORDL_TYPE JsonException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~JsonException() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonException", modifiers: " const&", def_value: None }]
constexpr JsonException(JsonException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonException", modifiers: "&&", def_value: None }]
constexpr JsonException(JsonException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr JsonException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonException& operator=(JsonException&& o) noexcept = default;
  constexpr JsonException& operator=(JsonException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit JsonException() ;

/// @brief Method .ctor addr 0x24c73e4 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonException(::StringW message) ;

/// @brief Method .ctor addr 0x24c743c size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit JsonException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x24c74a4 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit JsonException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24c7514 size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Create addr 0x24c7594 size 0xac virtual false final false
static Newtonsoft::Json::JsonException Create(Newtonsoft::Json::IJsonLineInfo lineInfo, ::StringW path, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonException);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonException, "Newtonsoft.Json", "JsonException");
