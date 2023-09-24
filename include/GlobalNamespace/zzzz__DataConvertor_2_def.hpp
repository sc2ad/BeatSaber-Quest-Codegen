#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace GlobalNamespace {
template<typename TOut,typename TParam>
class DataItemConvertor_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T,typename TParam>
class DataConvertor_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TParam>
class DataConvertor_2<T,TParam>;
}
// Type: ::DataConvertor`2
// Type: ::DataConvertor`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TParam>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4317))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4317), inst: 80 })
// CS Name: DataConvertor`2
class CORDL_TYPE DataConvertor_2<T,TParam> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DataConvertor_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertor_2", modifiers: " const&", def_value: None }]
constexpr DataConvertor_2(DataConvertor_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertor_2", modifiers: "&&", def_value: None }]
constexpr DataConvertor_2(DataConvertor_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataConvertor_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DataConvertor_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataConvertor_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataConvertor_2& operator=(DataConvertor_2&& o) noexcept = default;
  constexpr DataConvertor_2& operator=(DataConvertor_2 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>> __declspec(property(get=__get__convertors, put=__set__convertors))  _convertors;

constexpr void __set__convertors(System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_2<T,TParam>> __get__convertors() const;


// Methods

/// @brief Method ProcessItem addr 0x0 size 0xffffffffffffffff virtual false final false
 T ProcessItem(::bs_hook::Il2CppWrapperType item, TParam param) ;

/// @brief Method AddConvertor addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddConvertor(GlobalNamespace::DataItemConvertor_2<T,TParam> dataItemConvertor) ;

static GlobalNamespace::DataConvertor_2<T,TParam> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DataConvertor_2, "", "DataConvertor`2");
