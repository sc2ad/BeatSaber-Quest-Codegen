#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_3_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase,typename TIn,typename TOut>
class DefaultDataConvertor_3;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TIn,::cordl_internals::il2cpp_reference_type TOut>
class DefaultDataConvertor_3<TBase,TIn,TOut>;
}
// Type: ::DefaultDataConvertor`3
// Type: ::DefaultDataConvertor`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TIn,::cordl_internals::il2cpp_reference_type TOut>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4315), inst: 1118 }), TypeDefinitionIndex(TypeDefinitionIndex(4316)), TypeDefinitionIndex(TypeDefinitionIndex(4315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4316), inst: 5155 })
// CS Name: DefaultDataConvertor`3
class CORDL_TYPE DefaultDataConvertor_3<TBase,TIn,TOut> : public GlobalNamespace::DataItemConvertor_3<TBase,TIn,TOut> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultDataConvertor_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDataConvertor_3", modifiers: " const&", def_value: None }]
constexpr DefaultDataConvertor_3(DefaultDataConvertor_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDataConvertor_3", modifiers: "&&", def_value: None }]
constexpr DefaultDataConvertor_3(DefaultDataConvertor_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultDataConvertor_3(void* ptr) noexcept : GlobalNamespace::DataItemConvertor_3<TBase,TIn,TOut>(ptr) {
}


  constexpr DefaultDataConvertor_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultDataConvertor_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultDataConvertor_3& operator=(DefaultDataConvertor_3&& o) noexcept = default;
  constexpr DefaultDataConvertor_3& operator=(DefaultDataConvertor_3 const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
 TOut Convert(TIn item) ;

static GlobalNamespace::DefaultDataConvertor_3<TBase,TIn,TOut> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DefaultDataConvertor_3, "", "DefaultDataConvertor`3");
