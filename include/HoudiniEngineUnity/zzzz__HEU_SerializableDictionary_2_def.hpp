#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename TKey,typename TValue>
class HEU_SerializableDictionary_2;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class HEU_SerializableDictionary_2<TKey,TValue>;
}
// Type: HoudiniEngineUnity::HEU_SerializableDictionary`2
// Type: HoudiniEngineUnity::HEU_SerializableDictionary`2
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9796))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9796), inst: 80 })
// CS Name: HoudiniEngineUnity.HEU_SerializableDictionary`2
class CORDL_TYPE HEU_SerializableDictionary_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IDictionary_2<TKey,TValue>
constexpr operator  System::Collections::Generic::IDictionary_2<TKey,TValue>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_SerializableDictionary_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SerializableDictionary_2", modifiers: " const&", def_value: None }]
constexpr HEU_SerializableDictionary_2(HEU_SerializableDictionary_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SerializableDictionary_2", modifiers: "&&", def_value: None }]
constexpr HEU_SerializableDictionary_2(HEU_SerializableDictionary_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_SerializableDictionary_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_SerializableDictionary_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_SerializableDictionary_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_SerializableDictionary_2& operator=(HEU_SerializableDictionary_2&& o) noexcept = default;
  constexpr HEU_SerializableDictionary_2& operator=(HEU_SerializableDictionary_2 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<TKey,TValue> __declspec(property(get=__get__dictionary, put=__set__dictionary))  _dictionary;

constexpr void __set__dictionary(System::Collections::Generic::Dictionary_2<TKey,TValue> value) ;

constexpr System::Collections::Generic::Dictionary_2<TKey,TValue> __get__dictionary() const;

 ::ArrayW<TKey> __declspec(property(get=__get__keys, put=__set__keys))  _keys;

constexpr void __set__keys(::ArrayW<TKey> value) ;

constexpr ::ArrayW<TKey> __get__keys() const;

 ::ArrayW<TValue> __declspec(property(get=__get__values, put=__set__values))  _values;

constexpr void __set__values(::ArrayW<TValue> value) ;

constexpr ::ArrayW<TValue> __get__values() const;


// Properties

 TValue __declspec(property(get=get_Item, put=set_Item))  Item;

 System::Collections::Generic::ICollection_1<TKey> __declspec(property(get=get_Keys))  Keys;

 System::Collections::Generic::ICollection_1<TValue> __declspec(property(get=get_Values))  Values;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Item(TKey key) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(TKey key, TValue value) ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::ICollection_1<TKey> get_Keys() ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::ICollection_1<TValue> get_Values() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(TKey key, TValue value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item) ;

/// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool ContainsKey(TKey key) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> array, int32_t arrayIndex) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> GetEnumerator() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(TKey key) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryGetValue(TKey key, ByRef<TValue> value) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method OnAfterDeserialize addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize addr 0x0 size 0xffffffffffffffff virtual true final true
 void OnBeforeSerialize() ;

static HoudiniEngineUnity::HEU_SerializableDictionary_2<TKey,TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::HEU_SerializableDictionary_2, "HoudiniEngineUnity", "HEU_SerializableDictionary`2");
