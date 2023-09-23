#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace System {
struct StringComparison;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonPropertyCollection;
}
// Type: Newtonsoft.Json.Serialization::JsonPropertyCollection
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11887)), TypeDefinitionIndex(TypeDefinitionIndex(3801)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3801), inst: 3804 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11888))
// CS Name: Newtonsoft.Json.Serialization.JsonPropertyCollection
class CORDL_TYPE JsonPropertyCollection : public System::Collections::ObjectModel::KeyedCollection_2<::StringW,Newtonsoft::Json::Serialization::JsonProperty> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~JsonPropertyCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonPropertyCollection", modifiers: " const&", def_value: None }]
constexpr JsonPropertyCollection(JsonPropertyCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonPropertyCollection", modifiers: "&&", def_value: None }]
constexpr JsonPropertyCollection(JsonPropertyCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonPropertyCollection(void* ptr) noexcept : System::Collections::ObjectModel::KeyedCollection_2<::StringW,Newtonsoft::Json::Serialization::JsonProperty>(ptr) {
}


  constexpr JsonPropertyCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonPropertyCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonPropertyCollection& operator=(JsonPropertyCollection&& o) noexcept = default;
  constexpr JsonPropertyCollection& operator=(JsonPropertyCollection const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(System::Type value) ;

constexpr System::Type __get__type() const;

 System::Collections::Generic::List_1<Newtonsoft::Json::Serialization::JsonProperty> __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::Generic::List_1<Newtonsoft::Json::Serialization::JsonProperty> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Serialization::JsonProperty> __get__list() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
explicit JsonPropertyCollection(System::Type type) ;

/// @brief Method .ctor addr 0x24f97ec size 0x160 virtual false final false
 void _ctor(System::Type type) ;

/// @brief Method GetKeyForItem addr 0x2502ae0 size 0x18 virtual true final false
 ::StringW GetKeyForItem(Newtonsoft::Json::Serialization::JsonProperty item) ;

/// @brief Method AddProperty addr 0x24f998c size 0x234 virtual false final false
 void AddProperty(Newtonsoft::Json::Serialization::JsonProperty property) ;

/// @brief Method GetClosestMatchProperty addr 0x24f994c size 0x40 virtual false final false
 Newtonsoft::Json::Serialization::JsonProperty GetClosestMatchProperty(::StringW propertyName) ;

/// @brief Method TryGetValue addr 0x2502be4 size 0xdc virtual false final false
 bool TryGetValue(::StringW key, ByRef<Newtonsoft::Json::Serialization::JsonProperty> item) ;

/// @brief Method GetProperty addr 0x2502af8 size 0xec virtual false final false
 Newtonsoft::Json::Serialization::JsonProperty GetProperty(::StringW propertyName, System::StringComparison comparisonType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonPropertyCollection, "Newtonsoft.Json.Serialization", "JsonPropertyCollection");
