#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class IReferenceCountingCache_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class ReferenceCountingCache_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TValue>
class ReferenceCountingCache_2<int32_t,TValue>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ReferenceCountingCache_2<TKey,TValue>;
}
// Type: ::ReferenceCountingCache`2
// Type: ::ReferenceCountingCache`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6001))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6001), inst: 80 })
// CS Name: ReferenceCountingCache`2
class CORDL_TYPE ReferenceCountingCache_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>
constexpr operator  ::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ReferenceCountingCache_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: " const&", def_value: None }]
constexpr ReferenceCountingCache_2(ReferenceCountingCache_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: "&&", def_value: None }]
constexpr ReferenceCountingCache_2(ReferenceCountingCache_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReferenceCountingCache_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReferenceCountingCache_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReferenceCountingCache_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReferenceCountingCache_2& operator=(ReferenceCountingCache_2&& o) noexcept = default;
  constexpr ReferenceCountingCache_2& operator=(ReferenceCountingCache_2 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Dictionary_2<TKey,TValue> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::System::Collections::Generic::Dictionary_2<TKey,TValue> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue> __get__items() const;

 ::System::Collections::Generic::Dictionary_2<TKey,int32_t> __declspec(property(get=__get__referencesCount, put=__set__referencesCount))  _referencesCount;

constexpr void __set__referencesCount(::System::Collections::Generic::Dictionary_2<TKey,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,int32_t> __get__referencesCount() const;


// Methods

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t Insert(TKey key, TValue item) ;

/// @brief Method AddReference addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t AddReference(TKey key) ;

/// @brief Method RemoveReference addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t RemoveReference(TKey key) ;

/// @brief Method GetReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t GetReferenceCount(TKey key) ;

/// @brief Method TryGet addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryGet(TKey key, ByRef<TValue> result) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual false final false
static void LogError(::StringW message) ;

// Ctor Parameters []
explicit ReferenceCountingCache_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ReferenceCountingCache`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6001))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6001), inst: 1532 })
// CS Name: ReferenceCountingCache`2
class CORDL_TYPE ReferenceCountingCache_2<int32_t,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IReferenceCountingCache_2<int32_t,TValue>
constexpr operator  ::GlobalNamespace::IReferenceCountingCache_2<int32_t,TValue>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ReferenceCountingCache_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: " const&", def_value: None }]
constexpr ReferenceCountingCache_2(ReferenceCountingCache_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: "&&", def_value: None }]
constexpr ReferenceCountingCache_2(ReferenceCountingCache_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReferenceCountingCache_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReferenceCountingCache_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReferenceCountingCache_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReferenceCountingCache_2& operator=(ReferenceCountingCache_2&& o) noexcept = default;
  constexpr ReferenceCountingCache_2& operator=(ReferenceCountingCache_2 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Dictionary_2<int32_t,TValue> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::System::Collections::Generic::Dictionary_2<int32_t,TValue> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,TValue> __get__items() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get__referencesCount, put=__set__referencesCount))  _referencesCount;

constexpr void __set__referencesCount(::System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get__referencesCount() const;


// Methods

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t Insert(int32_t key, TValue item) ;

/// @brief Method AddReference addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t AddReference(int32_t key) ;

/// @brief Method RemoveReference addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t RemoveReference(int32_t key) ;

/// @brief Method GetReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t GetReferenceCount(int32_t key) ;

/// @brief Method TryGet addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryGet(int32_t key, ByRef<TValue> result) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual false final false
static void LogError(::StringW message) ;

// Ctor Parameters []
explicit ReferenceCountingCache_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ReferenceCountingCache_2, "", "ReferenceCountingCache`2");
