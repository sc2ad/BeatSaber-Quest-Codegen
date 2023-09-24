#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuSeparator;
}
// Type: UnityEngine.UIElements::DropdownMenuSeparator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7033))
// CS Name: UnityEngine.UIElements.DropdownMenuSeparator
class CORDL_TYPE DropdownMenuSeparator : public UnityEngine::UIElements::DropdownMenuItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DropdownMenuSeparator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuSeparator", modifiers: " const&", def_value: None }]
constexpr DropdownMenuSeparator(DropdownMenuSeparator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuSeparator", modifiers: "&&", def_value: None }]
constexpr DropdownMenuSeparator(DropdownMenuSeparator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownMenuSeparator(void* ptr) noexcept : UnityEngine::UIElements::DropdownMenuItem(ptr) {
}


  constexpr DropdownMenuSeparator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownMenuSeparator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownMenuSeparator& operator=(DropdownMenuSeparator&& o) noexcept = default;
  constexpr DropdownMenuSeparator& operator=(DropdownMenuSeparator const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__subMenuPath_k__BackingField, put=__set__subMenuPath_k__BackingField))  _subMenuPath_k__BackingField;

constexpr void __set__subMenuPath_k__BackingField(::StringW value) ;

constexpr ::StringW __get__subMenuPath_k__BackingField() const;


// Methods

static UnityEngine::UIElements::DropdownMenuSeparator New_ctor(::StringW subMenuPath) ;

/// @brief Method .ctor addr 0x2c8fc60 size 0x28 virtual false final false
 void _ctor(::StringW subMenuPath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DropdownMenuSeparator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DropdownMenuSeparator, "UnityEngine.UIElements", "DropdownMenuSeparator");
