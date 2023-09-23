#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonSerializationException;
}
// Type: Newtonsoft.Json::JsonSerializationException
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11746))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11777))
// CS Name: Newtonsoft.Json.JsonSerializationException
class CORDL_TYPE JsonSerializationException : public Newtonsoft::Json::JsonException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~JsonSerializationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializationException", modifiers: " const&", def_value: None }]
constexpr JsonSerializationException(JsonSerializationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializationException", modifiers: "&&", def_value: None }]
constexpr JsonSerializationException(JsonSerializationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonSerializationException(void* ptr) noexcept : Newtonsoft::Json::JsonException(ptr) {
}


  constexpr JsonSerializationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonSerializationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonSerializationException& operator=(JsonSerializationException&& o) noexcept = default;
  constexpr JsonSerializationException& operator=(JsonSerializationException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit JsonSerializationException() ;

/// @brief Method .ctor addr 0x24d8ee4 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonSerializationException(::StringW message) ;

/// @brief Method .ctor addr 0x24d8618 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit JsonSerializationException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x24d8ee8 size 0x4 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit JsonSerializationException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24d8eec size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Create addr 0x24d59e0 size 0x8 virtual false final false
static Newtonsoft::Json::JsonSerializationException Create(Newtonsoft::Json::JsonReader reader, ::StringW message) ;

/// @brief Method Create addr 0x24d8ef0 size 0x84 virtual false final false
static Newtonsoft::Json::JsonSerializationException Create(Newtonsoft::Json::JsonReader reader, ::StringW message, System::Exception ex) ;

/// @brief Method Create addr 0x24d8f74 size 0xbc virtual false final false
static Newtonsoft::Json::JsonSerializationException Create(Newtonsoft::Json::IJsonLineInfo lineInfo, ::StringW path, ::StringW message, System::Exception ex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonSerializationException);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonSerializationException, "Newtonsoft.Json", "JsonSerializationException");
