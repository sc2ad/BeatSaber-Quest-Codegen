#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class BsonObjectIdConverter;
}
// Type: Newtonsoft.Json.Converters::BsonObjectIdConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11978))
// CS Name: Newtonsoft.Json.Converters.BsonObjectIdConverter
class CORDL_TYPE BsonObjectIdConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BsonObjectIdConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonObjectIdConverter", modifiers: " const&", def_value: None }]
constexpr BsonObjectIdConverter(BsonObjectIdConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonObjectIdConverter", modifiers: "&&", def_value: None }]
constexpr BsonObjectIdConverter(BsonObjectIdConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonObjectIdConverter(void* ptr) noexcept : ::Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr BsonObjectIdConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonObjectIdConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonObjectIdConverter& operator=(BsonObjectIdConverter&& o) noexcept = default;
  constexpr BsonObjectIdConverter& operator=(BsonObjectIdConverter const& o) noexcept = default;
                


// Methods

/// @brief Method WriteJson addr 0x253ca9c size 0x100 virtual true final false
 void WriteJson(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x253cb9c size 0x190 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(::Newtonsoft::Json::JsonReader reader, ::System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x253cd2c size 0x84 virtual true final false
 bool CanConvert(::System::Type objectType) ;

// Ctor Parameters []
explicit BsonObjectIdConverter() ;

/// @brief Method .ctor addr 0x253cdb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::BsonObjectIdConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::BsonObjectIdConverter, "Newtonsoft.Json.Converters", "BsonObjectIdConverter");
