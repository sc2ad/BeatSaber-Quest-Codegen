#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Bson {
class BsonString;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonRegex;
}
// Type: Newtonsoft.Json.Bson::BsonRegex
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12016))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12022))
// CS Name: Newtonsoft.Json.Bson.BsonRegex
class CORDL_TYPE BsonRegex : public Newtonsoft::Json::Bson::BsonToken {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BsonRegex() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonRegex", modifiers: " const&", def_value: None }]
constexpr BsonRegex(BsonRegex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonRegex", modifiers: "&&", def_value: None }]
constexpr BsonRegex(BsonRegex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonRegex(void* ptr) noexcept : Newtonsoft::Json::Bson::BsonToken(ptr) {
}


  constexpr BsonRegex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonRegex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonRegex& operator=(BsonRegex&& o) noexcept = default;
  constexpr BsonRegex& operator=(BsonRegex const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Bson::BsonString __declspec(property(get=__get__Pattern_k__BackingField, put=__set__Pattern_k__BackingField))  _Pattern_k__BackingField;

constexpr void __set__Pattern_k__BackingField(Newtonsoft::Json::Bson::BsonString value) ;

constexpr Newtonsoft::Json::Bson::BsonString __get__Pattern_k__BackingField() const;

 Newtonsoft::Json::Bson::BsonString __declspec(property(get=__get__Options_k__BackingField, put=__set__Options_k__BackingField))  _Options_k__BackingField;

constexpr void __set__Options_k__BackingField(Newtonsoft::Json::Bson::BsonString value) ;

constexpr Newtonsoft::Json::Bson::BsonString __get__Options_k__BackingField() const;


// Properties

 Newtonsoft::Json::Bson::BsonString __declspec(property(get=get_Pattern, put=set_Pattern))  Pattern;

 Newtonsoft::Json::Bson::BsonString __declspec(property(get=get_Options, put=set_Options))  Options;

 Newtonsoft::Json::Bson::BsonType __declspec(property(get=get_Type))  Type;


// Methods

/// @brief Method get_Pattern addr 0x2550430 size 0x8 virtual false final false
 Newtonsoft::Json::Bson::BsonString get_Pattern() ;

/// @brief Method set_Pattern addr 0x2550438 size 0x8 virtual false final false
 void set_Pattern(Newtonsoft::Json::Bson::BsonString value) ;

/// @brief Method get_Options addr 0x2550440 size 0x8 virtual false final false
 Newtonsoft::Json::Bson::BsonString get_Options() ;

/// @brief Method set_Options addr 0x2550448 size 0x8 virtual false final false
 void set_Options(Newtonsoft::Json::Bson::BsonString value) ;

// Ctor Parameters [CppParam { name: "pattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::StringW", modifiers: "", def_value: None }]
explicit BsonRegex(::StringW pattern, ::StringW options) ;

/// @brief Method .ctor addr 0x2550450 size 0xbc virtual false final false
 void _ctor(::StringW pattern, ::StringW options) ;

/// @brief Method get_Type addr 0x255050c size 0x8 virtual true final false
 Newtonsoft::Json::Bson::BsonType get_Type() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonRegex);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonRegex, "Newtonsoft.Json.Bson", "BsonRegex");
