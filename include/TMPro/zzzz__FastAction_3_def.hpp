#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
// Forward declare root types
namespace TMPro {
template<typename A,typename B,typename C>
class FastAction_3;
}
namespace TMPro {
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B,::cordl_internals::il2cpp_reference_type C>
class FastAction_3<A,B,C>;
}
// Type: TMPro::FastAction`3
// Type: TMPro::FastAction`3
namespace TMPro {
// cpp template
template<::cordl_internals::il2cpp_reference_type A,::cordl_internals::il2cpp_reference_type B,::cordl_internals::il2cpp_reference_type C>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12242))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12242), inst: 5155 })
// CS Name: TMPro.FastAction`3
class CORDL_TYPE FastAction_3<A,B,C> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FastAction_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_3", modifiers: " const&", def_value: None }]
constexpr FastAction_3(FastAction_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction_3", modifiers: "&&", def_value: None }]
constexpr FastAction_3(FastAction_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastAction_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastAction_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastAction_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastAction_3& operator=(FastAction_3&& o) noexcept = default;
  constexpr FastAction_3& operator=(FastAction_3 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::LinkedList_1<::System::Action_3<A,B,C>> __declspec(property(get=__get_delegates, put=__set_delegates))  delegates;

constexpr void __set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_3<A,B,C>> value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_3<A,B,C>> __get_delegates() const;

 ::System::Collections::Generic::Dictionary_2<::System::Action_3<A,B,C>,::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A,B,C>>> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_3<A,B,C>,::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A,B,C>>> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_3<A,B,C>,::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A,B,C>>> __get_lookup() const;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(::System::Action_3<A,B,C> rhs) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::System::Action_3<A,B,C> rhs) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
 void Call(A a, B b, C c) ;

// Ctor Parameters []
explicit FastAction_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::FastAction_3, "TMPro", "FastAction`3");
