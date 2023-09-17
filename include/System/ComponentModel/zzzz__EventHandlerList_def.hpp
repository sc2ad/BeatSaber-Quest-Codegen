#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Delegate;
}
namespace System::ComponentModel {
class Component;
}
// Forward declare root types
namespace System::ComponentModel {
class EventHandlerList;
}
namespace System::ComponentModel {
class ____System__ComponentModel__EventHandlerList__ListEntry;
}
// Type: ::ListEntry
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8245))
// CS Name: System.ComponentModel.EventHandlerList::ListEntry
class CORDL_TYPE ____System__ComponentModel__EventHandlerList__ListEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__ComponentModel__EventHandlerList__ListEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__ComponentModel__EventHandlerList__ListEntry", modifiers: " const&", def_value: None }]
constexpr ____System__ComponentModel__EventHandlerList__ListEntry(____System__ComponentModel__EventHandlerList__ListEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__ComponentModel__EventHandlerList__ListEntry", modifiers: "&&", def_value: None }]
constexpr ____System__ComponentModel__EventHandlerList__ListEntry(____System__ComponentModel__EventHandlerList__ListEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__ComponentModel__EventHandlerList__ListEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__ComponentModel__EventHandlerList__ListEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__ComponentModel__EventHandlerList__ListEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__ComponentModel__EventHandlerList__ListEntry& operator=(____System__ComponentModel__EventHandlerList__ListEntry&& o) noexcept = default;
  constexpr ____System__ComponentModel__EventHandlerList__ListEntry& operator=(____System__ComponentModel__EventHandlerList__ListEntry const& o) noexcept = default;
                


// Fields

 ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry value) ;

constexpr ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry __get__next() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__key, put=__set__key))  _key;

constexpr void __set__key(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__key() const;

 ::System::Delegate __declspec(property(get=__get__handler, put=__set__handler))  _handler;

constexpr void __set__handler(::System::Delegate value) ;

constexpr ::System::Delegate __get__handler() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::EventHandlerList
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8246))
// CS Name: System.ComponentModel.EventHandlerList
class CORDL_TYPE EventHandlerList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ListEntry = ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EventHandlerList() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventHandlerList", modifiers: " const&", def_value: None }]
constexpr EventHandlerList(EventHandlerList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventHandlerList", modifiers: "&&", def_value: None }]
constexpr EventHandlerList(EventHandlerList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventHandlerList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventHandlerList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventHandlerList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventHandlerList& operator=(EventHandlerList&& o) noexcept = default;
  constexpr EventHandlerList& operator=(EventHandlerList const& o) noexcept = default;
                


// Fields

 ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry value) ;

constexpr ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry __get__head() const;

 ::System::ComponentModel::Component __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(::System::ComponentModel::Component value) ;

constexpr ::System::ComponentModel::Component __get__parent() const;


// Properties

 ::System::Delegate __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Item addr 0x277244c size 0x60 virtual false final false
 ::System::Delegate get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method Find addr 0x27724ac size 0x18 virtual false final false
 ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry Find(::bs_hook::Il2CppWrapperType key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::EventHandlerList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventHandlerList, "System.ComponentModel", "EventHandlerList");
NEED_NO_BOX(::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry, "System.ComponentModel", "EventHandlerList/ListEntry");
