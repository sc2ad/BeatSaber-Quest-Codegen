#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MessageDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator;
}
// Type: ::DictionaryEnumerator
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3172))
// CS Name: System.Runtime.Remoting.Messaging.MessageDictionary::DictionaryEnumerator
class CORDL_TYPE ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IDictionaryEnumerator
constexpr operator  ::System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator", modifiers: " const&", def_value: None }]
constexpr ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator(____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator", modifiers: "&&", def_value: None }]
constexpr ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator(____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator& operator=(____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator&& o) noexcept = default;
  constexpr ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator& operator=(____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Remoting::Messaging::MessageDictionary __declspec(property(get=__get__methodDictionary, put=__set__methodDictionary))  _methodDictionary;

constexpr void __set__methodDictionary(::System::Runtime::Remoting::Messaging::MessageDictionary value) ;

constexpr ::System::Runtime::Remoting::Messaging::MessageDictionary __get__methodDictionary() const;

 ::System::Collections::IDictionaryEnumerator __declspec(property(get=__get__hashtableEnum, put=__set__hashtableEnum))  _hashtableEnum;

constexpr void __set__hashtableEnum(::System::Collections::IDictionaryEnumerator value) ;

constexpr ::System::Collections::IDictionaryEnumerator __get__hashtableEnum() const;

 int32_t __declspec(property(get=__get__posMethod, put=__set__posMethod))  _posMethod;

constexpr void __set__posMethod(int32_t value) ;

constexpr int32_t __get__posMethod() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 ::System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "methodDictionary", ty: "::System::Runtime::Remoting::Messaging::MessageDictionary", modifiers: "", def_value: None }]
explicit ____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator(::System::Runtime::Remoting::Messaging::MessageDictionary methodDictionary) ;

/// @brief Method .ctor addr 0x234367c size 0xe4 virtual false final false
 void _ctor(::System::Runtime::Remoting::Messaging::MessageDictionary methodDictionary) ;

/// @brief Method get_Current addr 0x23437c0 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x2343990 size 0x1c4 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2343b54 size 0xac virtual true final true
 void Reset() ;

/// @brief Method get_Entry addr 0x2343824 size 0x16c virtual true final true
 ::System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x2343c00 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x2343c04 size 0x14 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
// Type: System.Runtime.Remoting.Messaging::MessageDictionary
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3173))
// CS Name: System.Runtime.Remoting.Messaging.MessageDictionary
class CORDL_TYPE MessageDictionary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DictionaryEnumerator = ::System::Runtime::Remoting::Messaging::____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator;

/// @brief Convert operator to ::System::Collections::IDictionary
constexpr operator  ::System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageDictionary", modifiers: " const&", def_value: None }]
constexpr MessageDictionary(MessageDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageDictionary", modifiers: "&&", def_value: None }]
constexpr MessageDictionary(MessageDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageDictionary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MessageDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageDictionary& operator=(MessageDictionary&& o) noexcept = default;
  constexpr MessageDictionary& operator=(MessageDictionary const& o) noexcept = default;
                


// Fields

 ::System::Collections::IDictionary __declspec(property(get=__get__internalProperties, put=__set__internalProperties))  _internalProperties;

constexpr void __set__internalProperties(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get__internalProperties() const;

 ::System::Runtime::Remoting::Messaging::IMethodMessage __declspec(property(get=__get__message, put=__set__message))  _message;

constexpr void __set__message(::System::Runtime::Remoting::Messaging::IMethodMessage value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage __get__message() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__methodKeys, put=__set__methodKeys))  _methodKeys;

constexpr void __set__methodKeys(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__methodKeys() const;

 bool __declspec(property(get=__get__ownProperties, put=__set__ownProperties))  _ownProperties;

constexpr void __set__ownProperties(bool value) ;

constexpr bool __get__ownProperties() const;


// Properties

 ::System::Collections::IDictionary __declspec(property(get=get_InternalDictionary))  InternalDictionary;

 ::ArrayW<::StringW> __declspec(property(put=set_MethodKeys))  MethodKeys;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 ::System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 ::System::Collections::ICollection __declspec(property(get=get_Values))  Values;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::System::Runtime::Remoting::Messaging::IMethodMessage", modifiers: "", def_value: None }]
explicit MessageDictionary(::System::Runtime::Remoting::Messaging::IMethodMessage message) ;

/// @brief Method .ctor addr 0x233fef8 size 0x28 virtual false final false
 void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage message) ;

/// @brief Method HasUserData addr 0x233cd54 size 0xfc virtual false final false
 bool HasUserData() ;

/// @brief Method get_InternalDictionary addr 0x233ce50 size 0x88 virtual false final false
 ::System::Collections::IDictionary get_InternalDictionary() ;

/// @brief Method set_MethodKeys addr 0x23424f4 size 0x8 virtual false final false
 void set_MethodKeys(::ArrayW<::StringW> value) ;

/// @brief Method AllocInternalProperties addr 0x23424fc size 0x68 virtual true final false
 ::System::Collections::IDictionary AllocInternalProperties() ;

/// @brief Method GetInternalProperties addr 0x233eff4 size 0x30 virtual false final false
 ::System::Collections::IDictionary GetInternalProperties() ;

/// @brief Method IsOverridenKey addr 0x2342564 size 0x8c virtual false final false
 bool IsOverridenKey(::StringW key) ;

/// @brief Method get_IsFixedSize addr 0x23425f0 size 0x8 virtual true final true
 bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x23425f8 size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method get_Item addr 0x2342600 size 0x14c virtual true final true
 ::bs_hook::Il2CppWrapperType get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x234274c size 0x4 virtual true final true
 void set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetMethodProperty addr 0x23402cc size 0x540 virtual true final false
 ::bs_hook::Il2CppWrapperType GetMethodProperty(::StringW key) ;

/// @brief Method SetMethodProperty addr 0x2340a78 size 0x2e0 virtual true final false
 void SetMethodProperty(::StringW key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Keys addr 0x23428b8 size 0x434 virtual true final true
 ::System::Collections::ICollection get_Keys() ;

/// @brief Method get_Values addr 0x2342cec size 0x420 virtual true final true
 ::System::Collections::ICollection get_Values() ;

/// @brief Method Add addr 0x2342750 size 0x168 virtual true final true
 void Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Clear addr 0x234310c size 0xac virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x23431b8 size 0x148 virtual true final true
 bool Contains(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Remove addr 0x2343300 size 0x188 virtual true final true
 void Remove(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method get_Count addr 0x2343488 size 0xc8 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsSynchronized addr 0x2343550 size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x2343558 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method CopyTo addr 0x234355c size 0xc0 virtual true final true
 void CopyTo(::System::Array array, int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x234361c size 0x60 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x2343760 size 0x60 virtual true final true
 ::System::Collections::IDictionaryEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MessageDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MessageDictionary, "System.Runtime.Remoting.Messaging", "MessageDictionary");
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::____System__Runtime__Remoting__Messaging__MessageDictionary__DictionaryEnumerator, "System.Runtime.Remoting.Messaging", "MessageDictionary/DictionaryEnumerator");
