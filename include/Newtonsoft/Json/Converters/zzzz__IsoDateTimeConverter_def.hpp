#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IsoDateTimeConverter;
}
// Type: Newtonsoft.Json.Converters::IsoDateTimeConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11974))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11988))
// CS Name: Newtonsoft.Json.Converters.IsoDateTimeConverter
class CORDL_TYPE IsoDateTimeConverter : public Newtonsoft::Json::Converters::DateTimeConverterBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~IsoDateTimeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "IsoDateTimeConverter", modifiers: " const&", def_value: None }]
constexpr IsoDateTimeConverter(IsoDateTimeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IsoDateTimeConverter", modifiers: "&&", def_value: None }]
constexpr IsoDateTimeConverter(IsoDateTimeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IsoDateTimeConverter(void* ptr) noexcept : Newtonsoft::Json::Converters::DateTimeConverterBase(ptr) {
}


  constexpr IsoDateTimeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IsoDateTimeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IsoDateTimeConverter& operator=(IsoDateTimeConverter&& o) noexcept = default;
  constexpr IsoDateTimeConverter& operator=(IsoDateTimeConverter const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultDateTimeFormat offset 0
static constexpr ::ConstString  DefaultDateTimeFormat{u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK"};

 System::Globalization::DateTimeStyles __declspec(property(get=__get__dateTimeStyles, put=__set__dateTimeStyles))  _dateTimeStyles;

constexpr void __set__dateTimeStyles(System::Globalization::DateTimeStyles value) ;

constexpr System::Globalization::DateTimeStyles __get__dateTimeStyles() const;

 ::StringW __declspec(property(get=__get__dateTimeFormat, put=__set__dateTimeFormat))  _dateTimeFormat;

constexpr void __set__dateTimeFormat(::StringW value) ;

constexpr ::StringW __get__dateTimeFormat() const;

 System::Globalization::CultureInfo __declspec(property(get=__get__culture, put=__set__culture))  _culture;

constexpr void __set__culture(System::Globalization::CultureInfo value) ;

constexpr System::Globalization::CultureInfo __get__culture() const;


// Properties

 System::Globalization::DateTimeStyles __declspec(property(get=get_DateTimeStyles, put=set_DateTimeStyles))  DateTimeStyles;

 ::StringW __declspec(property(get=get_DateTimeFormat, put=set_DateTimeFormat))  DateTimeFormat;

 System::Globalization::CultureInfo __declspec(property(get=get_Culture, put=set_Culture))  Culture;


// Methods

/// @brief Method get_DateTimeStyles addr 0x2540980 size 0x8 virtual false final false
 System::Globalization::DateTimeStyles get_DateTimeStyles() ;

/// @brief Method set_DateTimeStyles addr 0x2540988 size 0x8 virtual false final false
 void set_DateTimeStyles(System::Globalization::DateTimeStyles value) ;

/// @brief Method get_DateTimeFormat addr 0x2540990 size 0x54 virtual false final false
 ::StringW get_DateTimeFormat() ;

/// @brief Method set_DateTimeFormat addr 0x25409e4 size 0x20 virtual false final false
 void set_DateTimeFormat(::StringW value) ;

/// @brief Method get_Culture addr 0x2540a04 size 0x68 virtual false final false
 System::Globalization::CultureInfo get_Culture() ;

/// @brief Method set_Culture addr 0x2540a6c size 0x8 virtual false final false
 void set_Culture(System::Globalization::CultureInfo value) ;

/// @brief Method WriteJson addr 0x2540a74 size 0x220 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x2540c94 size 0x4c0 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

static Newtonsoft::Json::Converters::IsoDateTimeConverter New_ctor() ;

/// @brief Method .ctor addr 0x2541154 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::IsoDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::IsoDateTimeConverter, "Newtonsoft.Json.Converters", "IsoDateTimeConverter");
