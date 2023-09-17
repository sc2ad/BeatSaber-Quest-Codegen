#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonWriterException;
}
// Type: Newtonsoft.Json::JsonWriterException
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11746))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11770))
// CS Name: Newtonsoft.Json.JsonWriterException
class CORDL_TYPE JsonWriterException : public ::Newtonsoft::Json::JsonException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~JsonWriterException() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriterException", modifiers: " const&", def_value: None }]
constexpr JsonWriterException(JsonWriterException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriterException", modifiers: "&&", def_value: None }]
constexpr JsonWriterException(JsonWriterException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonWriterException(void* ptr) noexcept : ::Newtonsoft::Json::JsonException(ptr) {
}


  constexpr JsonWriterException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonWriterException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonWriterException& operator=(JsonWriterException&& o) noexcept = default;
  constexpr JsonWriterException& operator=(JsonWriterException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Path_k__BackingField, put=__set__Path_k__BackingField))  _Path_k__BackingField;

constexpr void __set__Path_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Path_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Path, put=set_Path))  Path;


// Methods

/// @brief Method get_Path addr 0x24d316c size 0x8 virtual false final false
 ::StringW get_Path() ;

/// @brief Method set_Path addr 0x24d3174 size 0x8 virtual false final false
 void set_Path(::StringW value) ;

// Ctor Parameters []
explicit JsonWriterException() ;

/// @brief Method .ctor addr 0x24d317c size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonWriterException(::StringW message) ;

/// @brief Method .ctor addr 0x24d3180 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit JsonWriterException(::StringW message, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x24d3184 size 0x4 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit JsonWriterException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24d3188 size 0x4 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonWriterException(::StringW message, ::System::Exception innerException, ::StringW path) ;

/// @brief Method .ctor addr 0x24d318c size 0x24 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException, ::StringW path) ;

/// @brief Method Create addr 0x24d184c size 0x34 virtual false final false
static ::Newtonsoft::Json::JsonWriterException Create(::Newtonsoft::Json::JsonWriter writer, ::StringW message, ::System::Exception ex) ;

/// @brief Method Create addr 0x24d31b0 size 0xb4 virtual false final false
static ::Newtonsoft::Json::JsonWriterException Create(::StringW path, ::StringW message, ::System::Exception ex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::JsonWriterException);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonWriterException, "Newtonsoft.Json", "JsonWriterException");
