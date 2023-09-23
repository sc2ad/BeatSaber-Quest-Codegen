#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonBinary;
}
// Type: Newtonsoft.Json.Bson::BsonBinary
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12019))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12021))
// CS Name: Newtonsoft.Json.Bson.BsonBinary
class CORDL_TYPE BsonBinary : public Newtonsoft::Json::Bson::BsonValue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BsonBinary() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonBinary", modifiers: " const&", def_value: None }]
constexpr BsonBinary(BsonBinary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonBinary", modifiers: "&&", def_value: None }]
constexpr BsonBinary(BsonBinary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonBinary(void* ptr) noexcept : Newtonsoft::Json::Bson::BsonValue(ptr) {
}


  constexpr BsonBinary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonBinary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonBinary& operator=(BsonBinary&& o) noexcept = default;
  constexpr BsonBinary& operator=(BsonBinary const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Bson::BsonBinaryType __declspec(property(get=__get__BinaryType_k__BackingField, put=__set__BinaryType_k__BackingField))  _BinaryType_k__BackingField;

constexpr void __set__BinaryType_k__BackingField(Newtonsoft::Json::Bson::BsonBinaryType value) ;

constexpr Newtonsoft::Json::Bson::BsonBinaryType __get__BinaryType_k__BackingField() const;


// Properties

 Newtonsoft::Json::Bson::BsonBinaryType __declspec(property(get=get_BinaryType, put=set_BinaryType))  BinaryType;


// Methods

/// @brief Method get_BinaryType addr 0x25503e8 size 0x8 virtual false final false
 Newtonsoft::Json::Bson::BsonBinaryType get_BinaryType() ;

/// @brief Method set_BinaryType addr 0x25503f0 size 0x8 virtual false final false
 void set_BinaryType(Newtonsoft::Json::Bson::BsonBinaryType value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "binaryType", ty: "Newtonsoft::Json::Bson::BsonBinaryType", modifiers: "", def_value: None }]
explicit BsonBinary(::ArrayW<uint8_t> value, Newtonsoft::Json::Bson::BsonBinaryType binaryType) ;

/// @brief Method .ctor addr 0x25503f8 size 0x38 virtual false final false
 void _ctor(::ArrayW<uint8_t> value, Newtonsoft::Json::Bson::BsonBinaryType binaryType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonBinary);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonBinary, "Newtonsoft.Json.Bson", "BsonBinary");
