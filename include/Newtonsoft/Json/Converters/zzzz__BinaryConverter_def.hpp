#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class BinaryConverter;
}
// Type: Newtonsoft.Json.Converters::BinaryConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11971))
// CS Name: Newtonsoft.Json.Converters.BinaryConverter
class CORDL_TYPE BinaryConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BinaryConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: " const&", def_value: None }]
constexpr BinaryConverter(BinaryConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: "&&", def_value: None }]
constexpr BinaryConverter(BinaryConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr BinaryConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryConverter& operator=(BinaryConverter&& o) noexcept = default;
  constexpr BinaryConverter& operator=(BinaryConverter const& o) noexcept = default;
                


// Fields

/// @brief Field BinaryTypeName offset 0
static constexpr ::ConstString  BinaryTypeName{u"System.Data.Linq.Binary"};

/// @brief Field BinaryToArrayName offset 0
static constexpr ::ConstString  BinaryToArrayName{u"ToArray"};

 Newtonsoft::Json::Utilities::ReflectionObject __declspec(property(get=__get__reflectionObject, put=__set__reflectionObject))  _reflectionObject;

constexpr void __set__reflectionObject(Newtonsoft::Json::Utilities::ReflectionObject value) ;

constexpr Newtonsoft::Json::Utilities::ReflectionObject __get__reflectionObject() const;


// Methods

/// @brief Method WriteJson addr 0x253adc4 size 0x54 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method GetByteArray addr 0x253ae18 size 0x178 virtual false final false
 ::ArrayW<uint8_t> GetByteArray(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method EnsureReflectionObject addr 0x253af90 size 0x188 virtual false final false
 void EnsureReflectionObject(System::Type t) ;

/// @brief Method ReadJson addr 0x253b118 size 0x320 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadByteArray addr 0x253b438 size 0x28c virtual false final false
 ::ArrayW<uint8_t> ReadByteArray(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method CanConvert addr 0x253b6c4 size 0x4c virtual true final false
 bool CanConvert(System::Type objectType) ;

// Ctor Parameters []
explicit BinaryConverter() ;

/// @brief Method .ctor addr 0x253b710 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::BinaryConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::BinaryConverter, "Newtonsoft.Json.Converters", "BinaryConverter");
