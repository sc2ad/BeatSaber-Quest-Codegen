#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownUtility;
}
// Type: UnityEngine.UIElements::DropdownUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6841))
// CS Name: UnityEngine.UIElements.DropdownUtility
class CORDL_TYPE DropdownUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DropdownUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownUtility", modifiers: " const&", def_value: None }]
constexpr DropdownUtility(DropdownUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownUtility", modifiers: "&&", def_value: None }]
constexpr DropdownUtility(DropdownUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DropdownUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownUtility& operator=(DropdownUtility&& o) noexcept = default;
  constexpr DropdownUtility& operator=(DropdownUtility const& o) noexcept = default;
                


// Fields

static System::Func_1<UnityEngine::UIElements::IGenericMenu> __declspec(property(get=__get_MakeDropdownFunc, put=__set_MakeDropdownFunc))  MakeDropdownFunc;

static void __set_MakeDropdownFunc(System::Func_1<UnityEngine::UIElements::IGenericMenu> value) ;

static System::Func_1<UnityEngine::UIElements::IGenericMenu> __get_MakeDropdownFunc() ;


// Methods

/// @brief Method CreateDropdown addr 0x2c3b050 size 0x98 virtual false final false
static UnityEngine::UIElements::IGenericMenu CreateDropdown() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DropdownUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DropdownUtility, "UnityEngine.UIElements", "DropdownUtility");
