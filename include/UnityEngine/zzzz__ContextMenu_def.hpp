#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class ContextMenu;
}
// Type: UnityEngine::ContextMenu
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10158))
// CS Name: UnityEngine.ContextMenu
class CORDL_TYPE ContextMenu : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ContextMenu() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextMenu", modifiers: " const&", def_value: None }]
constexpr ContextMenu(ContextMenu const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextMenu", modifiers: "&&", def_value: None }]
constexpr ContextMenu(ContextMenu&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextMenu(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ContextMenu& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextMenu& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextMenu& operator=(ContextMenu&& o) noexcept = default;
  constexpr ContextMenu& operator=(ContextMenu const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_menuItem, put=__set_menuItem))  menuItem;

constexpr void __set_menuItem(::StringW value) ;

constexpr ::StringW __get_menuItem() const;

 bool __declspec(property(get=__get_validate, put=__set_validate))  validate;

constexpr void __set_validate(bool value) ;

constexpr bool __get_validate() const;

 int32_t __declspec(property(get=__get_priority, put=__set_priority))  priority;

constexpr void __set_priority(int32_t value) ;

constexpr int32_t __get_priority() const;


// Methods

static UnityEngine::ContextMenu New_ctor(::StringW itemName) ;

/// @brief Method .ctor addr 0x2b5b2a4 size 0x38 virtual false final false
 void _ctor(::StringW itemName) ;

static UnityEngine::ContextMenu New_ctor(::StringW itemName, bool isValidateFunction) ;

/// @brief Method .ctor addr 0x2b5b2dc size 0x3c virtual false final false
 void _ctor(::StringW itemName, bool isValidateFunction) ;

static UnityEngine::ContextMenu New_ctor(::StringW itemName, bool isValidateFunction, int32_t priority) ;

/// @brief Method .ctor addr 0x2b5b318 size 0x40 virtual false final false
 void _ctor(::StringW itemName, bool isValidateFunction, int32_t priority) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ContextMenu);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContextMenu, "UnityEngine", "ContextMenu");
