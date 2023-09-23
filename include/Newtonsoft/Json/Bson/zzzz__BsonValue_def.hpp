#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonValue;
}
// Type: Newtonsoft.Json.Bson::BsonValue
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12016))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12019))
// CS Name: Newtonsoft.Json.Bson.BsonValue
class CORDL_TYPE BsonValue : public Newtonsoft::Json::Bson::BsonToken {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BsonValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonValue", modifiers: " const&", def_value: None }]
constexpr BsonValue(BsonValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonValue", modifiers: "&&", def_value: None }]
constexpr BsonValue(BsonValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonValue(void* ptr) noexcept : Newtonsoft::Json::Bson::BsonToken(ptr) {
}


  constexpr BsonValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonValue& operator=(BsonValue&& o) noexcept = default;
  constexpr BsonValue& operator=(BsonValue const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__value() const;

 Newtonsoft::Json::Bson::BsonType __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(Newtonsoft::Json::Bson::BsonType value) ;

constexpr Newtonsoft::Json::Bson::BsonType __get__type() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 Newtonsoft::Json::Bson::BsonType __declspec(property(get=get_Type))  Type;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "type", ty: "Newtonsoft::Json::Bson::BsonType", modifiers: "", def_value: None }]
explicit BsonValue(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Bson::BsonType type) ;

/// @brief Method .ctor addr 0x2550384 size 0x30 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Bson::BsonType type) ;

/// @brief Method get_Value addr 0x25503b4 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_Type addr 0x25503bc size 0x8 virtual true final false
 Newtonsoft::Json::Bson::BsonType get_Type() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonValue);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonValue, "Newtonsoft.Json.Bson", "BsonValue");
