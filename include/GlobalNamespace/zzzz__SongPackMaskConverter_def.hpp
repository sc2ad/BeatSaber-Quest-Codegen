#pragma once
#include "../cordl_internals/cordl_internals.hpp"
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
namespace GlobalNamespace {
class SongPackMaskConverter;
}
// Type: ::SongPackMaskConverter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15137))
// CS Name: SongPackMaskConverter
class CORDL_TYPE SongPackMaskConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SongPackMaskConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMaskConverter", modifiers: " const&", def_value: None }]
constexpr SongPackMaskConverter(SongPackMaskConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMaskConverter", modifiers: "&&", def_value: None }]
constexpr SongPackMaskConverter(SongPackMaskConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongPackMaskConverter(void* ptr) noexcept : ::Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr SongPackMaskConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongPackMaskConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongPackMaskConverter& operator=(SongPackMaskConverter&& o) noexcept = default;
  constexpr SongPackMaskConverter& operator=(SongPackMaskConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvert addr 0x121cc74 size 0x88 virtual true final false
 bool CanConvert(::System::Type objectType) ;

/// @brief Method ReadJson addr 0x121ccfc size 0x90 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(::Newtonsoft::Json::JsonReader reader, ::System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method WriteJson addr 0x121cd8c size 0xac virtual true final false
 void WriteJson(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::JsonSerializer serializer) ;

// Ctor Parameters []
explicit SongPackMaskConverter() ;

/// @brief Method .ctor addr 0x121ce38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SongPackMaskConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMaskConverter, "", "SongPackMaskConverter");
