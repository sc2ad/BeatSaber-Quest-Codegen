#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JPropertyKeyedCollection;
}
// Type: Newtonsoft.Json.Linq::JPropertyKeyedCollection
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3799)), TypeDefinitionIndex(TypeDefinitionIndex(11944)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3799), inst: 990 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11911))
// CS Name: Newtonsoft.Json.Linq.JPropertyKeyedCollection
class CORDL_TYPE JPropertyKeyedCollection : public System::Collections::ObjectModel::Collection_1<Newtonsoft::Json::Linq::JToken> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JPropertyKeyedCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPropertyKeyedCollection", modifiers: " const&", def_value: None }]
constexpr JPropertyKeyedCollection(JPropertyKeyedCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPropertyKeyedCollection", modifiers: "&&", def_value: None }]
constexpr JPropertyKeyedCollection(JPropertyKeyedCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPropertyKeyedCollection(void* ptr) noexcept : System::Collections::ObjectModel::Collection_1<Newtonsoft::Json::Linq::JToken>(ptr) {
}


  constexpr JPropertyKeyedCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPropertyKeyedCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPropertyKeyedCollection& operator=(JPropertyKeyedCollection&& o) noexcept = default;
  constexpr JPropertyKeyedCollection& operator=(JPropertyKeyedCollection const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::IEqualityComparer_1<::StringW> __declspec(property(get=__get_Comparer, put=__set_Comparer))  Comparer;

static void __set_Comparer(System::Collections::Generic::IEqualityComparer_1<::StringW> value) ;

static System::Collections::Generic::IEqualityComparer_1<::StringW> __get_Comparer() ;

 System::Collections::Generic::Dictionary_2<::StringW,Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get__dictionary, put=__set__dictionary))  _dictionary;

constexpr void __set__dictionary(System::Collections::Generic::Dictionary_2<::StringW,Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,Newtonsoft::Json::Linq::JToken> __get__dictionary() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Item))  Item;

 System::Collections::Generic::ICollection_1<::StringW> __declspec(property(get=get_Keys))  Keys;

 System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=get_Values))  Values;


// Methods

// Ctor Parameters []
explicit JPropertyKeyedCollection() ;

/// @brief Method .ctor addr 0x2517d38 size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method AddKey addr 0x2517dc8 size 0x70 virtual false final false
 void AddKey(::StringW key, Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method ChangeItemKey addr 0x2517ee8 size 0x188 virtual false final false
 void ChangeItemKey(Newtonsoft::Json::Linq::JToken item, ::StringW newKey) ;

/// @brief Method ClearItems addr 0x25181dc size 0x78 virtual true final false
 void ClearItems() ;

/// @brief Method Contains addr 0x2518254 size 0xb0 virtual false final false
 bool Contains(::StringW key) ;

/// @brief Method ContainsItem addr 0x2518070 size 0x8c virtual false final false
 bool ContainsItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method EnsureDictionary addr 0x2517e38 size 0xb0 virtual false final false
 void EnsureDictionary() ;

/// @brief Method GetKeyForItem addr 0x25180fc size 0x80 virtual false final false
 ::StringW GetKeyForItem(Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method InsertItem addr 0x2518304 size 0x78 virtual true final false
 void InsertItem(int32_t index, Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method Remove addr 0x251837c size 0x108 virtual false final false
 bool Remove(::StringW key) ;

/// @brief Method RemoveItem addr 0x2518484 size 0xf4 virtual true final false
 void RemoveItem(int32_t index) ;

/// @brief Method RemoveKey addr 0x251817c size 0x60 virtual false final false
 void RemoveKey(::StringW key) ;

/// @brief Method SetItem addr 0x2518578 size 0x208 virtual true final false
 void SetItem(int32_t index, Newtonsoft::Json::Linq::JToken item) ;

/// @brief Method get_Item addr 0x2518780 size 0xcc virtual false final false
 Newtonsoft::Json::Linq::JToken get_Item(::StringW key) ;

/// @brief Method TryGetValue addr 0x251884c size 0x78 virtual false final false
 bool TryGetValue(::StringW key, ByRef<Newtonsoft::Json::Linq::JToken> value) ;

/// @brief Method get_Keys addr 0x25188c4 size 0x58 virtual false final false
 System::Collections::Generic::ICollection_1<::StringW> get_Keys() ;

/// @brief Method get_Values addr 0x251891c size 0x58 virtual false final false
 System::Collections::Generic::ICollection_1<Newtonsoft::Json::Linq::JToken> get_Values() ;

/// @brief Method IndexOfReference addr 0x2518974 size 0xa4 virtual false final false
 int32_t IndexOfReference(Newtonsoft::Json::Linq::JToken t) ;

/// @brief Method Compare addr 0x2518a18 size 0x368 virtual false final false
 bool Compare(Newtonsoft::Json::Linq::JPropertyKeyedCollection other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JPropertyKeyedCollection);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JPropertyKeyedCollection, "Newtonsoft.Json.Linq", "JPropertyKeyedCollection");
