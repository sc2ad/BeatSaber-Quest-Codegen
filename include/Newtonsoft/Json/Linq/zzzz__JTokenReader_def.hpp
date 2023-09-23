#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenReader;
}
// Type: Newtonsoft.Json.Linq::JTokenReader
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11775))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11936))
// CS Name: Newtonsoft.Json.Linq.JTokenReader
class CORDL_TYPE JTokenReader : public Newtonsoft::Json::JsonReader {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::IJsonLineInfo
constexpr operator  Newtonsoft::Json::IJsonLineInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~JTokenReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "JTokenReader", modifiers: " const&", def_value: None }]
constexpr JTokenReader(JTokenReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JTokenReader", modifiers: "&&", def_value: None }]
constexpr JTokenReader(JTokenReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JTokenReader(void* ptr) noexcept : Newtonsoft::Json::JsonReader(ptr) {
}


  constexpr JTokenReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JTokenReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JTokenReader& operator=(JTokenReader&& o) noexcept = default;
  constexpr JTokenReader& operator=(JTokenReader const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__root, put=__set__root))  _root;

constexpr void __set__root(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__root() const;

 ::StringW __declspec(property(get=__get__initialPath, put=__set__initialPath))  _initialPath;

constexpr void __set__initialPath(::StringW value) ;

constexpr ::StringW __get__initialPath() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__parent() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__current() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_CurrentToken))  CurrentToken;

 int32_t __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LineNumber))  Newtonsoft_Json_IJsonLineInfo_LineNumber;

 int32_t __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LinePosition))  Newtonsoft_Json_IJsonLineInfo_LinePosition;

 ::StringW __declspec(property(get=get_Path))  Path;


// Methods

/// @brief Method get_CurrentToken addr 0x2523c10 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::JToken get_CurrentToken() ;

// Ctor Parameters [CppParam { name: "token", ty: "Newtonsoft::Json::Linq::JToken", modifiers: "", def_value: None }]
explicit JTokenReader(Newtonsoft::Json::Linq::JToken token) ;

/// @brief Method .ctor addr 0x2523c18 size 0x6c virtual false final false
 void _ctor(Newtonsoft::Json::Linq::JToken token) ;

// Ctor Parameters [CppParam { name: "token", ty: "Newtonsoft::Json::Linq::JToken", modifiers: "", def_value: None }, CppParam { name: "initialPath", ty: "::StringW", modifiers: "", def_value: None }]
explicit JTokenReader(Newtonsoft::Json::Linq::JToken token, ::StringW initialPath) ;

/// @brief Method .ctor addr 0x2523c84 size 0x24 virtual false final false
 void _ctor(Newtonsoft::Json::Linq::JToken token, ::StringW initialPath) ;

/// @brief Method Read addr 0x2523ca8 size 0xc4 virtual true final false
 bool Read() ;

/// @brief Method ReadOver addr 0x2523dd4 size 0xb4 virtual false final false
 bool ReadOver(Newtonsoft::Json::Linq::JToken t) ;

/// @brief Method ReadToEnd addr 0x252436c size 0x20 virtual false final false
 bool ReadToEnd() ;

/// @brief Method GetEndToken addr 0x2524410 size 0x150 virtual false final false
 System::Nullable_1<Newtonsoft::Json::JsonToken> GetEndToken(Newtonsoft::Json::Linq::JContainer c) ;

/// @brief Method ReadInto addr 0x2523d6c size 0x68 virtual false final false
 bool ReadInto(Newtonsoft::Json::Linq::JContainer c) ;

/// @brief Method SetEnd addr 0x252438c size 0x84 virtual false final false
 bool SetEnd(Newtonsoft::Json::Linq::JContainer c) ;

/// @brief Method SetToken addr 0x2523e88 size 0x4e4 virtual false final false
 void SetToken(Newtonsoft::Json::Linq::JToken token) ;

/// @brief Method SafeToString addr 0x2524560 size 0x20 virtual false final false
 ::StringW SafeToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo addr 0x2524580 size 0xb4 virtual true final true
 bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber addr 0x2524634 size 0xb8 virtual true final true
 int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition addr 0x25246ec size 0xb8 virtual true final true
 int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition() ;

/// @brief Method get_Path addr 0x25247a4 size 0xe4 virtual true final false
 ::StringW get_Path() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JTokenReader);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JTokenReader, "Newtonsoft.Json.Linq", "JTokenReader");
