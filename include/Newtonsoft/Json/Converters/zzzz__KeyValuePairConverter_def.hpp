#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class KeyValuePairConverter;
}
// Type: Newtonsoft.Json.Converters::KeyValuePairConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11977))
// CS Name: Newtonsoft.Json.Converters.KeyValuePairConverter
class CORDL_TYPE KeyValuePairConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~KeyValuePairConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyValuePairConverter", modifiers: " const&", def_value: None }]
constexpr KeyValuePairConverter(KeyValuePairConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyValuePairConverter", modifiers: "&&", def_value: None }]
constexpr KeyValuePairConverter(KeyValuePairConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyValuePairConverter(void* ptr) noexcept : ::Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr KeyValuePairConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyValuePairConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyValuePairConverter& operator=(KeyValuePairConverter&& o) noexcept = default;
  constexpr KeyValuePairConverter& operator=(KeyValuePairConverter const& o) noexcept = default;
                


// Fields

/// @brief Field KeyName offset 0
static constexpr ::ConstString  KeyName{u"Key"};

/// @brief Field ValueName offset 0
static constexpr ::ConstString  ValueName{u"Value"};

static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type,::Newtonsoft::Json::Utilities::ReflectionObject> __declspec(property(get=__get_ReflectionObjectPerType, put=__set_ReflectionObjectPerType))  ReflectionObjectPerType;

static void __set_ReflectionObjectPerType(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type,::Newtonsoft::Json::Utilities::ReflectionObject> value) ;

static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type,::Newtonsoft::Json::Utilities::ReflectionObject> __get_ReflectionObjectPerType() ;


// Methods

/// @brief Method InitializeReflectionObject addr 0x253c074 size 0x280 virtual false final false
static ::Newtonsoft::Json::Utilities::ReflectionObject InitializeReflectionObject(::System::Type t) ;

/// @brief Method WriteJson addr 0x253c2f4 size 0x240 virtual true final false
 void WriteJson(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x253c534 size 0x37c virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(::Newtonsoft::Json::JsonReader reader, ::System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x253c8b0 size 0x10c virtual true final false
 bool CanConvert(::System::Type objectType) ;

// Ctor Parameters []
explicit KeyValuePairConverter() ;

/// @brief Method .ctor addr 0x253c9bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::KeyValuePairConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::KeyValuePairConverter, "Newtonsoft.Json.Converters", "KeyValuePairConverter");
