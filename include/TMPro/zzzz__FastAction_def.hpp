#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace TMPro {
class FastAction;
}
// Type: TMPro::FastAction
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12239))
// CS Name: TMPro.FastAction
class CORDL_TYPE FastAction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FastAction() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction", modifiers: " const&", def_value: None }]
constexpr FastAction(FastAction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastAction", modifiers: "&&", def_value: None }]
constexpr FastAction(FastAction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastAction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastAction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastAction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastAction& operator=(FastAction&& o) noexcept = default;
  constexpr FastAction& operator=(FastAction const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<System::Action> __declspec(property(get=__get_delegates, put=__set_delegates))  delegates;

constexpr void __set_delegates(System::Collections::Generic::LinkedList_1<System::Action> value) ;

constexpr System::Collections::Generic::LinkedList_1<System::Action> __get_delegates() const;

 System::Collections::Generic::Dictionary_2<System::Action,System::Collections::Generic::LinkedListNode_1<System::Action>> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(System::Collections::Generic::Dictionary_2<System::Action,System::Collections::Generic::LinkedListNode_1<System::Action>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Action,System::Collections::Generic::LinkedListNode_1<System::Action>> __get_lookup() const;


// Methods

/// @brief Method Add addr 0x2a57764 size 0xc0 virtual false final false
 void Add(System::Action rhs) ;

/// @brief Method Remove addr 0x2a57824 size 0xc0 virtual false final false
 void Remove(System::Action rhs) ;

/// @brief Method Call addr 0x2a578e4 size 0x98 virtual false final false
 void Call() ;

// Ctor Parameters []
explicit FastAction() ;

/// @brief Method .ctor addr 0x2a5797c size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::FastAction);
DEFINE_IL2CPP_ARG_TYPE(TMPro::FastAction, "TMPro", "FastAction");
