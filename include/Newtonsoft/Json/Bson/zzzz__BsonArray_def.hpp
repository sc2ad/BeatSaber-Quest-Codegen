#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonArray;
}
// Type: Newtonsoft.Json.Bson::BsonArray
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12016))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12018))
// CS Name: Newtonsoft.Json.Bson.BsonArray
class CORDL_TYPE BsonArray : public Newtonsoft::Json::Bson::BsonToken {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Bson::BsonToken>
constexpr operator  System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Bson::BsonToken>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BsonArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonArray", modifiers: " const&", def_value: None }]
constexpr BsonArray(BsonArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonArray", modifiers: "&&", def_value: None }]
constexpr BsonArray(BsonArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonArray(void* ptr) noexcept : Newtonsoft::Json::Bson::BsonToken(ptr) {
}


  constexpr BsonArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonArray& operator=(BsonArray&& o) noexcept = default;
  constexpr BsonArray& operator=(BsonArray const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Newtonsoft::Json::Bson::BsonToken> __declspec(property(get=__get__children, put=__set__children))  _children;

constexpr void __set__children(System::Collections::Generic::List_1<Newtonsoft::Json::Bson::BsonToken> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Bson::BsonToken> __get__children() const;


// Properties

 Newtonsoft::Json::Bson::BsonType __declspec(property(get=get_Type))  Type;


// Methods

/// @brief Method Add addr 0x255024c size 0xb0 virtual false final false
 void Add(Newtonsoft::Json::Bson::BsonToken token) ;

/// @brief Method get_Type addr 0x25502fc size 0x8 virtual true final false
 Newtonsoft::Json::Bson::BsonType get_Type() ;

/// @brief Method GetEnumerator addr 0x254e230 size 0x90 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Bson::BsonToken> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2550304 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters []
explicit BsonArray() ;

/// @brief Method .ctor addr 0x2550308 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonArray);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonArray, "Newtonsoft.Json.Bson", "BsonArray");
