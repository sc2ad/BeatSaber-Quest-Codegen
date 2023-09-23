#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonReaderException;
}
// Type: Newtonsoft.Json::JsonReaderException
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11746))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11771))
// CS Name: Newtonsoft.Json.JsonReaderException
class CORDL_TYPE JsonReaderException : public Newtonsoft::Json::JsonException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~JsonReaderException() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonReaderException", modifiers: " const&", def_value: None }]
constexpr JsonReaderException(JsonReaderException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonReaderException", modifiers: "&&", def_value: None }]
constexpr JsonReaderException(JsonReaderException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonReaderException(void* ptr) noexcept : Newtonsoft::Json::JsonException(ptr) {
}


  constexpr JsonReaderException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonReaderException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonReaderException& operator=(JsonReaderException&& o) noexcept = default;
  constexpr JsonReaderException& operator=(JsonReaderException const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__LineNumber_k__BackingField, put=__set__LineNumber_k__BackingField))  _LineNumber_k__BackingField;

constexpr void __set__LineNumber_k__BackingField(int32_t value) ;

constexpr int32_t __get__LineNumber_k__BackingField() const;

 int32_t __declspec(property(get=__get__LinePosition_k__BackingField, put=__set__LinePosition_k__BackingField))  _LinePosition_k__BackingField;

constexpr void __set__LinePosition_k__BackingField(int32_t value) ;

constexpr int32_t __get__LinePosition_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Path_k__BackingField, put=__set__Path_k__BackingField))  _Path_k__BackingField;

constexpr void __set__Path_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Path_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_LineNumber, put=set_LineNumber))  LineNumber;

 int32_t __declspec(property(get=get_LinePosition, put=set_LinePosition))  LinePosition;

 ::StringW __declspec(property(get=get_Path, put=set_Path))  Path;


// Methods

/// @brief Method get_LineNumber addr 0x24d3264 size 0x8 virtual false final false
 int32_t get_LineNumber() ;

/// @brief Method set_LineNumber addr 0x24d326c size 0x8 virtual false final false
 void set_LineNumber(int32_t value) ;

/// @brief Method get_LinePosition addr 0x24d3274 size 0x8 virtual false final false
 int32_t get_LinePosition() ;

/// @brief Method set_LinePosition addr 0x24d327c size 0x8 virtual false final false
 void set_LinePosition(int32_t value) ;

/// @brief Method get_Path addr 0x24d3284 size 0x8 virtual false final false
 ::StringW get_Path() ;

/// @brief Method set_Path addr 0x24d328c size 0x8 virtual false final false
 void set_Path(::StringW value) ;

// Ctor Parameters []
explicit JsonReaderException() ;

/// @brief Method .ctor addr 0x24d3294 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit JsonReaderException(::StringW message) ;

/// @brief Method .ctor addr 0x24d3298 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit JsonReaderException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x24d329c size 0x4 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit JsonReaderException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24d32a0 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }]
explicit JsonReaderException(::StringW message, System::Exception innerException, ::StringW path, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method .ctor addr 0x24d32a4 size 0x38 virtual false final false
 void _ctor(::StringW message, System::Exception innerException, ::StringW path, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method Create addr 0x24cb5e0 size 0x8 virtual false final false
static Newtonsoft::Json::JsonReaderException Create(Newtonsoft::Json::JsonReader reader, ::StringW message) ;

/// @brief Method Create addr 0x24d062c size 0x84 virtual false final false
static Newtonsoft::Json::JsonReaderException Create(Newtonsoft::Json::JsonReader reader, ::StringW message, System::Exception ex) ;

/// @brief Method Create addr 0x24d32dc size 0x200 virtual false final false
static Newtonsoft::Json::JsonReaderException Create(Newtonsoft::Json::IJsonLineInfo lineInfo, ::StringW path, ::StringW message, System::Exception ex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonReaderException);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonReaderException, "Newtonsoft.Json", "JsonReaderException");
