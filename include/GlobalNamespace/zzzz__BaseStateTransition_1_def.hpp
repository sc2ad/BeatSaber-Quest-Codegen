#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BaseStateTransition_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class BaseStateTransition_1<T>;
}
// Type: ::BaseStateTransition`1
// Type: ::BaseStateTransition`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5544)), TypeDefinitionIndex(TypeDefinitionIndex(5543))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5544), inst: 2 })
// CS Name: BaseStateTransition`1
class CORDL_TYPE BaseStateTransition_1<T> : public GlobalNamespace::BaseStateTransition {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BaseStateTransition_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition_1", modifiers: " const&", def_value: None }]
constexpr BaseStateTransition_1(BaseStateTransition_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition_1", modifiers: "&&", def_value: None }]
constexpr BaseStateTransition_1(BaseStateTransition_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseStateTransition_1(void* ptr) noexcept : GlobalNamespace::BaseStateTransition(ptr) {
}


  constexpr BaseStateTransition_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseStateTransition_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseStateTransition_1& operator=(BaseStateTransition_1&& o) noexcept = default;
  constexpr BaseStateTransition_1& operator=(BaseStateTransition_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__component, put=__set__component))  _component;

constexpr void __set__component(T value) ;

constexpr T __get__component() const;


// Methods

static GlobalNamespace::BaseStateTransition_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::BaseStateTransition_1, "", "BaseStateTransition`1");
