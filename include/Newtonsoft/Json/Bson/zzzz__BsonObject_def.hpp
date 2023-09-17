#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace Newtonsoft::Json::Bson {
class BsonProperty;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonObject;
}
// Type: Newtonsoft.Json.Bson::BsonObject
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12016))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12017))
// CS Name: Newtonsoft.Json.Bson.BsonObject
class CORDL_TYPE BsonObject : public ::Newtonsoft::Json::Bson::BsonToken {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonProperty>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonProperty>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BsonObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonObject", modifiers: " const&", def_value: None }]
constexpr BsonObject(BsonObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonObject", modifiers: "&&", def_value: None }]
constexpr BsonObject(BsonObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonObject(void* ptr) noexcept : ::Newtonsoft::Json::Bson::BsonToken(ptr) {
}


  constexpr BsonObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonObject& operator=(BsonObject&& o) noexcept = default;
  constexpr BsonObject& operator=(BsonObject const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty> __declspec(property(get=__get__children, put=__set__children))  _children;

constexpr void __set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty> value) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty> __get__children() const;


// Properties

 ::Newtonsoft::Json::Bson::BsonType __declspec(property(get=get_Type))  Type;


// Methods

/// @brief Method Add addr 0x255004c size 0x134 virtual false final false
 void Add(::StringW name, ::Newtonsoft::Json::Bson::BsonToken token) ;

/// @brief Method get_Type addr 0x25501c4 size 0x8 virtual true final false
 ::Newtonsoft::Json::Bson::BsonType get_Type() ;

/// @brief Method GetEnumerator addr 0x254e0fc size 0x90 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonProperty> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x25501cc size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters []
explicit BsonObject() ;

/// @brief Method .ctor addr 0x25501d0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonObject, "Newtonsoft.Json.Bson", "BsonObject");
