#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class SelectableStateController_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class SelectableStateController_1<T>;
}
// Type: ::SelectableStateController`1
// Type: ::SelectableStateController`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5559)), TypeDefinitionIndex(TypeDefinitionIndex(5558))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5559), inst: 2 })
// CS Name: SelectableStateController`1
class CORDL_TYPE SelectableStateController_1<T> : public GlobalNamespace::SelectableStateController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SelectableStateController_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableStateController_1", modifiers: " const&", def_value: None }]
constexpr SelectableStateController_1(SelectableStateController_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableStateController_1", modifiers: "&&", def_value: None }]
constexpr SelectableStateController_1(SelectableStateController_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectableStateController_1(void* ptr) noexcept : GlobalNamespace::SelectableStateController(ptr) {
}


  constexpr SelectableStateController_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectableStateController_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectableStateController_1& operator=(SelectableStateController_1&& o) noexcept = default;
  constexpr SelectableStateController_1& operator=(SelectableStateController_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__component, put=__set__component))  _component;

constexpr void __set__component(T value) ;

constexpr T __get__component() const;


// Methods

static GlobalNamespace::SelectableStateController_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SelectableStateController_1, "", "SelectableStateController`1");
