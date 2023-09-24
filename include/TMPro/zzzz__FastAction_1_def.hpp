#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace TMPro {
template<typename A>
class FastAction_1;
}
namespace TMPro {
template<::cordl_internals::il2cpp_reference_type A>
class FastAction_1<A>;
}
namespace TMPro {
template<>
class FastAction_1<bool>;
}
// Type: TMPro::FastAction`1
// Type: TMPro::FastAction`1
namespace TMPro {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12240))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12240), inst: 99 })
// CS Name: TMPro.FastAction`1
class CORDL_TYPE FastAction_1<bool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FastAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_1", modifiers: " const&", def_value: None }]
constexpr FastAction_1(FastAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_1", modifiers: "&&", def_value: None }]
constexpr FastAction_1(FastAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastAction_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastAction_1& operator=(FastAction_1&& o) noexcept = default;
  constexpr FastAction_1& operator=(FastAction_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<System::Action_1<bool>> __declspec(property(get=__get_delegates, put=__set_delegates))  delegates;

constexpr void __set_delegates(System::Collections::Generic::LinkedList_1<System::Action_1<bool>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<bool>> __get_delegates() const;

 System::Collections::Generic::Dictionary_2<System::Action_1<bool>,System::Collections::Generic::LinkedListNode_1<System::Action_1<bool>>> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(System::Collections::Generic::Dictionary_2<System::Action_1<bool>,System::Collections::Generic::LinkedListNode_1<System::Action_1<bool>>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Action_1<bool>,System::Collections::Generic::LinkedListNode_1<System::Action_1<bool>>> __get_lookup() const;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<bool> rhs) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<bool> rhs) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
 void Call(bool a) ;

static TMPro::FastAction_1<bool> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::FastAction`1
namespace TMPro {
// cpp template
template<::cordl_internals::il2cpp_reference_type A>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12240))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12240), inst: 2 })
// CS Name: TMPro.FastAction`1
class CORDL_TYPE FastAction_1<A> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FastAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_1", modifiers: " const&", def_value: None }]
constexpr FastAction_1(FastAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_1", modifiers: "&&", def_value: None }]
constexpr FastAction_1(FastAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastAction_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastAction_1& operator=(FastAction_1&& o) noexcept = default;
  constexpr FastAction_1& operator=(FastAction_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<System::Action_1<A>> __declspec(property(get=__get_delegates, put=__set_delegates))  delegates;

constexpr void __set_delegates(System::Collections::Generic::LinkedList_1<System::Action_1<A>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_1<A>> __get_delegates() const;

 System::Collections::Generic::Dictionary_2<System::Action_1<A>,System::Collections::Generic::LinkedListNode_1<System::Action_1<A>>> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(System::Collections::Generic::Dictionary_2<System::Action_1<A>,System::Collections::Generic::LinkedListNode_1<System::Action_1<A>>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Action_1<A>,System::Collections::Generic::LinkedListNode_1<System::Action_1<A>>> __get_lookup() const;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_1<A> rhs) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_1<A> rhs) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
 void Call(A a) ;

static TMPro::FastAction_1<A> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::FastAction_1, "TMPro", "FastAction`1");
