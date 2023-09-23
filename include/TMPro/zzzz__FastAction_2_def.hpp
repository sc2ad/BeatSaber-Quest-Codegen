#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace TMPro {
template<typename A,typename B>
class FastAction_2;
}
namespace TMPro {
template<::cordl_internals::il2cpp_reference_type B>
class FastAction_2<bool,B>;
}
namespace TMPro {
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B>
class FastAction_2<A,B>;
}
// Type: TMPro::FastAction`2
// Type: TMPro::FastAction`2
namespace TMPro {
// cpp template
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12241))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12241), inst: 80 })
// CS Name: TMPro.FastAction`2
class CORDL_TYPE FastAction_2<A,B> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FastAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_2", modifiers: " const&", def_value: None }]
constexpr FastAction_2(FastAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_2", modifiers: "&&", def_value: None }]
constexpr FastAction_2(FastAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastAction_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastAction_2& operator=(FastAction_2&& o) noexcept = default;
  constexpr FastAction_2& operator=(FastAction_2 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<System::Action_2<A,B>> __declspec(property(get=__get_delegates, put=__set_delegates))  delegates;

constexpr void __set_delegates(System::Collections::Generic::LinkedList_1<System::Action_2<A,B>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_2<A,B>> __get_delegates() const;

 System::Collections::Generic::Dictionary_2<System::Action_2<A,B>,System::Collections::Generic::LinkedListNode_1<System::Action_2<A,B>>> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(System::Collections::Generic::Dictionary_2<System::Action_2<A,B>,System::Collections::Generic::LinkedListNode_1<System::Action_2<A,B>>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Action_2<A,B>,System::Collections::Generic::LinkedListNode_1<System::Action_2<A,B>>> __get_lookup() const;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_2<A,B> rhs) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_2<A,B> rhs) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
 void Call(A a, B b) ;

// Ctor Parameters []
explicit FastAction_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::FastAction`2
namespace TMPro {
// cpp template
template<::cordl_internals::il2cpp_reference_type B>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12241))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12241), inst: 5137 })
// CS Name: TMPro.FastAction`2
class CORDL_TYPE FastAction_2<bool,B> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FastAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_2", modifiers: " const&", def_value: None }]
constexpr FastAction_2(FastAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_2", modifiers: "&&", def_value: None }]
constexpr FastAction_2(FastAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastAction_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastAction_2& operator=(FastAction_2&& o) noexcept = default;
  constexpr FastAction_2& operator=(FastAction_2 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<System::Action_2<bool,B>> __declspec(property(get=__get_delegates, put=__set_delegates))  delegates;

constexpr void __set_delegates(System::Collections::Generic::LinkedList_1<System::Action_2<bool,B>> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action_2<bool,B>> __get_delegates() const;

 System::Collections::Generic::Dictionary_2<System::Action_2<bool,B>,System::Collections::Generic::LinkedListNode_1<System::Action_2<bool,B>>> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(System::Collections::Generic::Dictionary_2<System::Action_2<bool,B>,System::Collections::Generic::LinkedListNode_1<System::Action_2<bool,B>>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Action_2<bool,B>,System::Collections::Generic::LinkedListNode_1<System::Action_2<bool,B>>> __get_lookup() const;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Action_2<bool,B> rhs) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(System::Action_2<bool,B> rhs) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
 void Call(bool a, B b) ;

// Ctor Parameters []
explicit FastAction_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::FastAction_2, "TMPro", "FastAction`2");
