#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Newtonsoft::Json::Serialization {
struct Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey;
}
namespace Newtonsoft::Json::Utilities {
struct Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
class ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ThreadSafeStore_2<TKey,TValue>;
}
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11810))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11810), inst: 1583 })
// CS Name: Newtonsoft.Json.Utilities.ThreadSafeStore`2
class CORDL_TYPE ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ThreadSafeStore_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: " const&", def_value: None }]
constexpr ThreadSafeStore_2(ThreadSafeStore_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "&&", def_value: None }]
constexpr ThreadSafeStore_2(ThreadSafeStore_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadSafeStore_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadSafeStore_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadSafeStore_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadSafeStore_2& operator=(ThreadSafeStore_2&& o) noexcept = default;
  constexpr ThreadSafeStore_2& operator=(ThreadSafeStore_2 const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__lock() const;

 System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> __declspec(property(get=__get__store, put=__set__store))  _store;

constexpr void __set__store(System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> value) ;

constexpr System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> __get__store() const;

 System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> __declspec(property(get=__get__creator, put=__set__creator))  _creator;

constexpr void __set__creator(System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> value) ;

constexpr System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> __get__creator() const;


// Methods

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> New_ctor(System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> creator) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> creator) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue Get(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey key) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue AddValue(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11810))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11810), inst: 1582 })
// CS Name: Newtonsoft.Json.Utilities.ThreadSafeStore`2
class CORDL_TYPE ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ThreadSafeStore_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: " const&", def_value: None }]
constexpr ThreadSafeStore_2(ThreadSafeStore_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "&&", def_value: None }]
constexpr ThreadSafeStore_2(ThreadSafeStore_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadSafeStore_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadSafeStore_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadSafeStore_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadSafeStore_2& operator=(ThreadSafeStore_2&& o) noexcept = default;
  constexpr ThreadSafeStore_2& operator=(ThreadSafeStore_2 const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__lock() const;

 System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> __declspec(property(get=__get__store, put=__set__store))  _store;

constexpr void __set__store(System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> value) ;

constexpr System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> __get__store() const;

 System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> __declspec(property(get=__get__creator, put=__set__creator))  _creator;

constexpr void __set__creator(System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> value) ;

constexpr System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> __get__creator() const;


// Methods

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> New_ctor(System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> creator) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> creator) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue Get(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey key) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue AddValue(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11810))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11810), inst: 80 })
// CS Name: Newtonsoft.Json.Utilities.ThreadSafeStore`2
class CORDL_TYPE ThreadSafeStore_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ThreadSafeStore_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: " const&", def_value: None }]
constexpr ThreadSafeStore_2(ThreadSafeStore_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "&&", def_value: None }]
constexpr ThreadSafeStore_2(ThreadSafeStore_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadSafeStore_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadSafeStore_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadSafeStore_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadSafeStore_2& operator=(ThreadSafeStore_2&& o) noexcept = default;
  constexpr ThreadSafeStore_2& operator=(ThreadSafeStore_2 const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__lock() const;

 System::Collections::Generic::Dictionary_2<TKey,TValue> __declspec(property(get=__get__store, put=__set__store))  _store;

constexpr void __set__store(System::Collections::Generic::Dictionary_2<TKey,TValue> value) ;

constexpr System::Collections::Generic::Dictionary_2<TKey,TValue> __get__store() const;

 System::Func_2<TKey,TValue> __declspec(property(get=__get__creator, put=__set__creator))  _creator;

constexpr void __set__creator(System::Func_2<TKey,TValue> value) ;

constexpr System::Func_2<TKey,TValue> __get__creator() const;


// Methods

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue> New_ctor(System::Func_2<TKey,TValue> creator) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<TKey,TValue> creator) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue Get(TKey key) ;

/// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue AddValue(TKey key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Utilities::ThreadSafeStore_2, "Newtonsoft.Json.Utilities", "ThreadSafeStore`2");
