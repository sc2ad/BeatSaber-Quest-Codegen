#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace Newtonsoft::Json::Bson {
class BsonString;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonProperty;
}
// Type: Newtonsoft.Json.Bson::BsonProperty
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12023))
// CS Name: Newtonsoft.Json.Bson.BsonProperty
class CORDL_TYPE BsonProperty : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BsonProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonProperty", modifiers: " const&", def_value: None }]
constexpr BsonProperty(BsonProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonProperty", modifiers: "&&", def_value: None }]
constexpr BsonProperty(BsonProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonProperty(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BsonProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonProperty& operator=(BsonProperty&& o) noexcept = default;
  constexpr BsonProperty& operator=(BsonProperty const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Bson::BsonString __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(Newtonsoft::Json::Bson::BsonString value) ;

constexpr Newtonsoft::Json::Bson::BsonString __get__Name_k__BackingField() const;

 Newtonsoft::Json::Bson::BsonToken __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField))  _Value_k__BackingField;

constexpr void __set__Value_k__BackingField(Newtonsoft::Json::Bson::BsonToken value) ;

constexpr Newtonsoft::Json::Bson::BsonToken __get__Value_k__BackingField() const;


// Properties

 Newtonsoft::Json::Bson::BsonString __declspec(property(get=get_Name, put=set_Name))  Name;

 Newtonsoft::Json::Bson::BsonToken __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

/// @brief Method get_Name addr 0x2550514 size 0x8 virtual false final false
 Newtonsoft::Json::Bson::BsonString get_Name() ;

/// @brief Method set_Name addr 0x255051c size 0x8 virtual false final false
 void set_Name(Newtonsoft::Json::Bson::BsonString value) ;

/// @brief Method get_Value addr 0x2550524 size 0x8 virtual false final false
 Newtonsoft::Json::Bson::BsonToken get_Value() ;

/// @brief Method set_Value addr 0x255052c size 0x8 virtual false final false
 void set_Value(Newtonsoft::Json::Bson::BsonToken value) ;

// Ctor Parameters []
explicit BsonProperty() ;

/// @brief Method .ctor addr 0x2550180 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonProperty);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonProperty, "Newtonsoft.Json.Bson", "BsonProperty");
