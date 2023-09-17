#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
namespace {
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Newtonsoft::Json {
struct ReadType;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonPrimitiveContract;
}
// Type: Newtonsoft.Json.Serialization::JsonPrimitiveContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11857))
// CS Name: Newtonsoft.Json.Serialization.JsonPrimitiveContract
class CORDL_TYPE JsonPrimitiveContract : public ::Newtonsoft::Json::Serialization::JsonContract {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~JsonPrimitiveContract() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonPrimitiveContract", modifiers: " const&", def_value: None }]
constexpr JsonPrimitiveContract(JsonPrimitiveContract const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonPrimitiveContract", modifiers: "&&", def_value: None }]
constexpr JsonPrimitiveContract(JsonPrimitiveContract&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonPrimitiveContract(void* ptr) noexcept : ::Newtonsoft::Json::Serialization::JsonContract(ptr) {
}


  constexpr JsonPrimitiveContract& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonPrimitiveContract& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonPrimitiveContract& operator=(JsonPrimitiveContract&& o) noexcept = default;
  constexpr JsonPrimitiveContract& operator=(JsonPrimitiveContract const& o) noexcept = default;
                


// Fields

 ::Newtonsoft::Json::Utilities::PrimitiveTypeCode __declspec(property(get=__get__TypeCode_k__BackingField, put=__set__TypeCode_k__BackingField))  _TypeCode_k__BackingField;

constexpr void __set__TypeCode_k__BackingField(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value) ;

constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode __get__TypeCode_k__BackingField() const;

static ::System::Collections::Generic::Dictionary_2<::System::Type,::Newtonsoft::Json::ReadType> __declspec(property(get=__get_ReadTypeMap, put=__set_ReadTypeMap))  ReadTypeMap;

static void __set_ReadTypeMap(::System::Collections::Generic::Dictionary_2<::System::Type,::Newtonsoft::Json::ReadType> value) ;

static ::System::Collections::Generic::Dictionary_2<::System::Type,::Newtonsoft::Json::ReadType> __get_ReadTypeMap() ;


// Properties

 ::Newtonsoft::Json::Utilities::PrimitiveTypeCode __declspec(property(get=get_TypeCode, put=set_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x24f62cc size 0x8 virtual false final false
 ::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode() ;

/// @brief Method set_TypeCode addr 0x24f62d4 size 0x8 virtual false final false
 void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value) ;

// Ctor Parameters [CppParam { name: "underlyingType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit JsonPrimitiveContract(::System::Type underlyingType) ;

/// @brief Method .ctor addr 0x24f62dc size 0xf4 virtual false final false
 void _ctor(::System::Type underlyingType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonPrimitiveContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonPrimitiveContract, "Newtonsoft.Json.Serialization", "JsonPrimitiveContract");
