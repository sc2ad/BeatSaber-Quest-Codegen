#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TOut>
class DataItemConvertor_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TOut>
class DataItemConvertor_1<TOut>;
}
// Type: ::DataItemConvertor`1
// Type: ::DataItemConvertor`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TOut>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4314), inst: 2 })
// CS Name: DataItemConvertor`1
class CORDL_TYPE DataItemConvertor_1<TOut> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DataItemConvertor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_1", modifiers: " const&", def_value: None }]
constexpr DataItemConvertor_1(DataItemConvertor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataItemConvertor_1", modifiers: "&&", def_value: None }]
constexpr DataItemConvertor_1(DataItemConvertor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataItemConvertor_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DataItemConvertor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataItemConvertor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataItemConvertor_1& operator=(DataItemConvertor_1&& o) noexcept = default;
  constexpr DataItemConvertor_1& operator=(DataItemConvertor_1 const& o) noexcept = default;
                


// Properties

 ::System::Type __declspec(property(get=get_inputDataType))  inputDataType;


// Methods

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
 TOut Convert(::bs_hook::Il2CppWrapperType item) ;

/// @brief Method get_inputDataType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_inputDataType() ;

// Ctor Parameters []
explicit DataItemConvertor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_1, "", "DataItemConvertor`1");
