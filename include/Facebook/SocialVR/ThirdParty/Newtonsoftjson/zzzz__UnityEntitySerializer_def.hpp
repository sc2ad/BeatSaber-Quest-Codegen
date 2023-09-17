#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Facebook::SocialVR::ThirdParty::Newtonsoftjson {
class UnityEntitySerializer;
}
// Type: Facebook.SocialVR.ThirdParty.Newtonsoftjson::UnityEntitySerializer
namespace Facebook::SocialVR::ThirdParty::Newtonsoftjson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6173))
// CS Name: Facebook.SocialVR.ThirdParty.Newtonsoftjson.UnityEntitySerializer
class CORDL_TYPE UnityEntitySerializer : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEntitySerializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEntitySerializer", modifiers: " const&", def_value: None }]
constexpr UnityEntitySerializer(UnityEntitySerializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEntitySerializer", modifiers: "&&", def_value: None }]
constexpr UnityEntitySerializer(UnityEntitySerializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEntitySerializer(void* ptr) noexcept : ::Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr UnityEntitySerializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEntitySerializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEntitySerializer& operator=(UnityEntitySerializer&& o) noexcept = default;
  constexpr UnityEntitySerializer& operator=(UnityEntitySerializer const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvert addr 0x21d7108 size 0xac virtual true final false
 bool CanConvert(::System::Type objectType) ;

/// @brief Method ReadJson addr 0x21d71b4 size 0x84 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(::Newtonsoft::Json::JsonReader reader, ::System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method WriteJson addr 0x21d7238 size 0xfc virtual true final false
 void WriteJson(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::JsonSerializer serializer) ;

// Ctor Parameters []
explicit UnityEntitySerializer() ;

/// @brief Method .ctor addr 0x21d7334 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Facebook::SocialVR::ThirdParty::Newtonsoftjson
} // end anonymous namespace
NEED_NO_BOX(::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::SocialVR::ThirdParty::Newtonsoftjson::UnityEntitySerializer, "Facebook.SocialVR.ThirdParty.Newtonsoftjson", "UnityEntitySerializer");
