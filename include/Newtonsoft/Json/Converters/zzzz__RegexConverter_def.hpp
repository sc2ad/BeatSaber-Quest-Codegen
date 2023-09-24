#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Bson {
class BsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class RegexConverter;
}
// Type: Newtonsoft.Json.Converters::RegexConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11982))
// CS Name: Newtonsoft.Json.Converters.RegexConverter
class CORDL_TYPE RegexConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RegexConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexConverter", modifiers: " const&", def_value: None }]
constexpr RegexConverter(RegexConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexConverter", modifiers: "&&", def_value: None }]
constexpr RegexConverter(RegexConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr RegexConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexConverter& operator=(RegexConverter&& o) noexcept = default;
  constexpr RegexConverter& operator=(RegexConverter const& o) noexcept = default;
                


// Fields

/// @brief Field PatternName offset 0
static constexpr ::ConstString  PatternName{u"Pattern"};

/// @brief Field OptionsName offset 0
static constexpr ::ConstString  OptionsName{u"Options"};


// Methods

/// @brief Method WriteJson addr 0x253e320 size 0xf8 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method HasFlag addr 0x253e70c size 0xc virtual false final false
 bool HasFlag(System::Text::RegularExpressions::RegexOptions options, System::Text::RegularExpressions::RegexOptions flag) ;

/// @brief Method WriteBson addr 0x253e418 size 0x138 virtual false final false
 void WriteBson(Newtonsoft::Json::Bson::BsonWriter writer, System::Text::RegularExpressions::Regex regex) ;

/// @brief Method WriteJson addr 0x253e550 size 0x1bc virtual false final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, System::Text::RegularExpressions::Regex regex, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x253e718 size 0xa4 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadRegexString addr 0x253ea40 size 0x180 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadRegexString(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method ReadRegexObject addr 0x253e7bc size 0x284 virtual false final false
 System::Text::RegularExpressions::Regex ReadRegexObject(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x253ebc0 size 0x84 virtual true final false
 bool CanConvert(System::Type objectType) ;

static Newtonsoft::Json::Converters::RegexConverter New_ctor() ;

/// @brief Method .ctor addr 0x253ec44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::RegexConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::RegexConverter, "Newtonsoft.Json.Converters", "RegexConverter");
