#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
template<typename T>
class CustomCreationConverter_1;
}
namespace Newtonsoft::Json::Converters {
template<::cordl_internals::il2cpp_reference_type T>
class CustomCreationConverter_1<T>;
}
// Type: Newtonsoft.Json.Converters::CustomCreationConverter`1
// Type: Newtonsoft.Json.Converters::CustomCreationConverter`1
namespace Newtonsoft::Json::Converters {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772)), TypeDefinitionIndex(TypeDefinitionIndex(11973))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11973), inst: 2 })
// CS Name: Newtonsoft.Json.Converters.CustomCreationConverter`1
class CORDL_TYPE CustomCreationConverter_1<T> : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CustomCreationConverter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomCreationConverter_1", modifiers: " const&", def_value: None }]
constexpr CustomCreationConverter_1(CustomCreationConverter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomCreationConverter_1", modifiers: "&&", def_value: None }]
constexpr CustomCreationConverter_1(CustomCreationConverter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomCreationConverter_1(void* ptr) noexcept : ::Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr CustomCreationConverter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomCreationConverter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomCreationConverter_1& operator=(CustomCreationConverter_1&& o) noexcept = default;
  constexpr CustomCreationConverter_1& operator=(CustomCreationConverter_1 const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanWrite))  CanWrite;


// Methods

/// @brief Method WriteJson addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteJson(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(::Newtonsoft::Json::JsonReader reader, ::System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 T Create(::System::Type objectType) ;

/// @brief Method CanConvert addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanConvert(::System::Type objectType) ;

/// @brief Method get_CanWrite addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CanWrite() ;

// Ctor Parameters []
explicit CustomCreationConverter_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Converters::CustomCreationConverter_1, "Newtonsoft.Json.Converters", "CustomCreationConverter`1");
