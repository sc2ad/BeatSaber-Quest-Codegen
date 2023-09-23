#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase,typename TIn,typename TOut,typename TParam>
class DataItemConvertor_4;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TIn,::cordl_internals::il2cpp_reference_type TOut,::cordl_internals::il2cpp_reference_type TParam>
class DataItemConvertor_4<TBase,TIn,TOut,TParam>;
}
// Type: ::DataItemConvertor`4
// Type: ::DataItemConvertor`4
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase,::cordl_internals::il2cpp_reference_type TIn,::cordl_internals::il2cpp_reference_type TOut,::cordl_internals::il2cpp_reference_type TParam>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4318)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4318), inst: 1117 }), TypeDefinitionIndex(TypeDefinitionIndex(4319))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4319), inst: 5937 })
// CS Name: DataItemConvertor`4
class CORDL_TYPE DataItemConvertor_4<TBase,TIn,TOut,TParam> : public GlobalNamespace::DataItemConvertor_2<TBase,TParam> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DataItemConvertor_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_4", modifiers: " const&", def_value: None }]
constexpr DataItemConvertor_4(DataItemConvertor_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_4", modifiers: "&&", def_value: None }]
constexpr DataItemConvertor_4(DataItemConvertor_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataItemConvertor_4(void* ptr) noexcept : GlobalNamespace::DataItemConvertor_2<TBase,TParam>(ptr) {
}


  constexpr DataItemConvertor_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataItemConvertor_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataItemConvertor_4& operator=(DataItemConvertor_4&& o) noexcept = default;
  constexpr DataItemConvertor_4& operator=(DataItemConvertor_4 const& o) noexcept = default;
                


// Properties

 System::Type __declspec(property(get=get_inputDataType))  inputDataType;


// Methods

/// @brief Method get_inputDataType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_inputDataType() ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
 TBase Convert(::bs_hook::Il2CppWrapperType item, TParam param) ;

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
 TOut Convert(TIn item, TParam param) ;

// Ctor Parameters []
explicit DataItemConvertor_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DataItemConvertor_4, "", "DataItemConvertor`4");
