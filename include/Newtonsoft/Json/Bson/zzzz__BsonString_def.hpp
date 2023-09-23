#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonString;
}
// Type: Newtonsoft.Json.Bson::BsonString
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12019))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12020))
// CS Name: Newtonsoft.Json.Bson.BsonString
class CORDL_TYPE BsonString : public Newtonsoft::Json::Bson::BsonValue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BsonString() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonString", modifiers: " const&", def_value: None }]
constexpr BsonString(BsonString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonString", modifiers: "&&", def_value: None }]
constexpr BsonString(BsonString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonString(void* ptr) noexcept : Newtonsoft::Json::Bson::BsonValue(ptr) {
}


  constexpr BsonString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonString& operator=(BsonString&& o) noexcept = default;
  constexpr BsonString& operator=(BsonString const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__ByteCount_k__BackingField, put=__set__ByteCount_k__BackingField))  _ByteCount_k__BackingField;

constexpr void __set__ByteCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__ByteCount_k__BackingField() const;

 bool __declspec(property(get=__get__IncludeLength_k__BackingField, put=__set__IncludeLength_k__BackingField))  _IncludeLength_k__BackingField;

constexpr void __set__IncludeLength_k__BackingField(bool value) ;

constexpr bool __get__IncludeLength_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_ByteCount, put=set_ByteCount))  ByteCount;

 bool __declspec(property(get=get_IncludeLength, put=set_IncludeLength))  IncludeLength;


// Methods

/// @brief Method get_ByteCount addr 0x25503c4 size 0x8 virtual false final false
 int32_t get_ByteCount() ;

/// @brief Method set_ByteCount addr 0x25503cc size 0x8 virtual false final false
 void set_ByteCount(int32_t value) ;

/// @brief Method get_IncludeLength addr 0x25503d4 size 0x8 virtual false final false
 bool get_IncludeLength() ;

/// @brief Method set_IncludeLength addr 0x25503dc size 0xc virtual false final false
 void set_IncludeLength(bool value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "includeLength", ty: "bool", modifiers: "", def_value: None }]
explicit BsonString(::bs_hook::Il2CppWrapperType value, bool includeLength) ;

/// @brief Method .ctor addr 0x2550188 size 0x3c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType value, bool includeLength) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonString);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonString, "Newtonsoft.Json.Bson", "BsonString");
