#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TOut,typename TParam>
class DataItemConvertor_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TOut,::cordl_internals::il2cpp_reference_type TParam>
class DataItemConvertor_2<TOut,TParam>;
}
// Type: ::DataItemConvertor`2
// Type: ::DataItemConvertor`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TOut,::cordl_internals::il2cpp_reference_type TParam>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4318))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4318), inst: 80 })
// CS Name: DataItemConvertor`2
class CORDL_TYPE DataItemConvertor_2<TOut,TParam> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DataItemConvertor_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_2", modifiers: " const&", def_value: None }]
constexpr DataItemConvertor_2(DataItemConvertor_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_2", modifiers: "&&", def_value: None }]
constexpr DataItemConvertor_2(DataItemConvertor_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataItemConvertor_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DataItemConvertor_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataItemConvertor_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataItemConvertor_2& operator=(DataItemConvertor_2&& o) noexcept = default;
  constexpr DataItemConvertor_2& operator=(DataItemConvertor_2 const& o) noexcept = default;
                


// Properties

 ::System::Type __declspec(property(get=get_inputDataType))  inputDataType;


// Methods

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
 TOut Convert(::bs_hook::Il2CppWrapperType item, TParam param) ;

/// @brief Method get_inputDataType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_inputDataType() ;

// Ctor Parameters []
explicit DataItemConvertor_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_2, "", "DataItemConvertor`2");
