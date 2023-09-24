#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonObjectId;
}
// Type: Newtonsoft.Json.Bson::BsonObjectId
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12026))
// CS Name: Newtonsoft.Json.Bson.BsonObjectId
class CORDL_TYPE BsonObjectId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BsonObjectId() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonObjectId", modifiers: " const&", def_value: None }]
constexpr BsonObjectId(BsonObjectId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonObjectId", modifiers: "&&", def_value: None }]
constexpr BsonObjectId(BsonObjectId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonObjectId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BsonObjectId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonObjectId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonObjectId& operator=(BsonObjectId&& o) noexcept = default;
  constexpr BsonObjectId& operator=(BsonObjectId const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField))  _Value_k__BackingField;

constexpr void __set__Value_k__BackingField(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__Value_k__BackingField() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

/// @brief Method get_Value addr 0x2551ab0 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Value() ;

/// @brief Method set_Value addr 0x2551ab8 size 0x8 virtual false final false
 void set_Value(::ArrayW<uint8_t> value) ;

static Newtonsoft::Json::Bson::BsonObjectId New_ctor(::ArrayW<uint8_t> value) ;

/// @brief Method .ctor addr 0x2551ac0 size 0xe0 virtual false final false
 void _ctor(::ArrayW<uint8_t> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonObjectId);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonObjectId, "Newtonsoft.Json.Bson", "BsonObjectId");
