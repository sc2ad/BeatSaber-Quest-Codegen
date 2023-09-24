#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System {
class MonoListItem;
}
// Type: System::MonoListItem
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2608))
// CS Name: System.MonoListItem
class CORDL_TYPE MonoListItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoListItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoListItem", modifiers: " const&", def_value: None }]
constexpr MonoListItem(MonoListItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoListItem", modifiers: "&&", def_value: None }]
constexpr MonoListItem(MonoListItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoListItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoListItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoListItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoListItem& operator=(MonoListItem&& o) noexcept = default;
  constexpr MonoListItem& operator=(MonoListItem const& o) noexcept = default;
                


// Fields

 System::MonoListItem __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(System::MonoListItem value) ;

constexpr System::MonoListItem __get_next() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_data() const;


// Methods

static System::MonoListItem New_ctor() ;

/// @brief Method .ctor addr 0x248fea4 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MonoListItem);
DEFINE_IL2CPP_ARG_TYPE(System::MonoListItem, "System", "MonoListItem");
