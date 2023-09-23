#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase,typename TIn,typename TOut>
class DataItemConvertor_3;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TIn,::cordl_internals::il2cpp_reference_type TOut>
class DataItemConvertor_3<TBase,TIn,TOut>;
}
// Type: ::DataItemConvertor`3
// Type: ::DataItemConvertor`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TIn,::cordl_internals::il2cpp_reference_type TOut>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4314), inst: 1115 }), TypeDefinitionIndex(TypeDefinitionIndex(4314)), TypeDefinitionIndex(TypeDefinitionIndex(4315))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4315), inst: 5155 })
// CS Name: DataItemConvertor`3
class CORDL_TYPE DataItemConvertor_3<TBase,TIn,TOut> : public GlobalNamespace::DataItemConvertor_1<TBase> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DataItemConvertor_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_3", modifiers: " const&", def_value: None }]
constexpr DataItemConvertor_3(DataItemConvertor_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_3", modifiers: "&&", def_value: None }]
constexpr DataItemConvertor_3(DataItemConvertor_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataItemConvertor_3(void* ptr) noexcept : GlobalNamespace::DataItemConvertor_1<TBase>(ptr) {
}


  constexpr DataItemConvertor_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataItemConvertor_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataItemConvertor_3& operator=(DataItemConvertor_3&& o) noexcept = default;
  constexpr DataItemConvertor_3& operator=(DataItemConvertor_3 const& o) noexcept = default;
                


// Properties

 System::Type __declspec(property(get=get_inputDataType))  inputDataType;


// Methods

/// @brief Method get_inputDataType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_inputDataType() ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
 TBase Convert(::bs_hook::Il2CppWrapperType item) ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
 TOut Convert(TIn item) ;

// Ctor Parameters []
explicit DataItemConvertor_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DataItemConvertor_3, "", "DataItemConvertor`3");
