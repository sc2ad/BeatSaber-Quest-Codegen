#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
// Type: Newtonsoft.Json.Bson::BsonToken
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12016))
// CS Name: Newtonsoft.Json.Bson.BsonToken
class CORDL_TYPE BsonToken : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BsonToken() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonToken", modifiers: " const&", def_value: None }]
constexpr BsonToken(BsonToken const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonToken", modifiers: "&&", def_value: None }]
constexpr BsonToken(BsonToken&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonToken(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BsonToken& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonToken& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonToken& operator=(BsonToken&& o) noexcept = default;
  constexpr BsonToken& operator=(BsonToken const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Bson::BsonToken __declspec(property(get=__get__Parent_k__BackingField, put=__set__Parent_k__BackingField))  _Parent_k__BackingField;

constexpr void __set__Parent_k__BackingField(Newtonsoft::Json::Bson::BsonToken value) ;

constexpr Newtonsoft::Json::Bson::BsonToken __get__Parent_k__BackingField() const;

 int32_t __declspec(property(get=__get__CalculatedSize_k__BackingField, put=__set__CalculatedSize_k__BackingField))  _CalculatedSize_k__BackingField;

constexpr void __set__CalculatedSize_k__BackingField(int32_t value) ;

constexpr int32_t __get__CalculatedSize_k__BackingField() const;


// Properties

 Newtonsoft::Json::Bson::BsonType __declspec(property(get=get_Type))  Type;

 Newtonsoft::Json::Bson::BsonToken __declspec(property(get=get_Parent, put=set_Parent))  Parent;

 int32_t __declspec(property(get=get_CalculatedSize, put=set_CalculatedSize))  CalculatedSize;


// Methods

/// @brief Method get_Type addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Bson::BsonType get_Type() ;

/// @brief Method get_Parent addr 0x2550024 size 0x8 virtual false final false
 Newtonsoft::Json::Bson::BsonToken get_Parent() ;

/// @brief Method set_Parent addr 0x255002c size 0x8 virtual false final false
 void set_Parent(Newtonsoft::Json::Bson::BsonToken value) ;

/// @brief Method get_CalculatedSize addr 0x2550034 size 0x8 virtual false final false
 int32_t get_CalculatedSize() ;

/// @brief Method set_CalculatedSize addr 0x255003c size 0x8 virtual false final false
 void set_CalculatedSize(int32_t value) ;

static Newtonsoft::Json::Bson::BsonToken New_ctor() ;

/// @brief Method .ctor addr 0x2550044 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonToken);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonToken, "Newtonsoft.Json.Bson", "BsonToken");
