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
template<typename TOut>
class DataItemConvertor_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class DataConvertor_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class DataConvertor_1<T>;
}
// Type: ::DataConvertor`1
// Type: ::DataConvertor`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4313))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4313), inst: 2 })
// CS Name: DataConvertor`1
class CORDL_TYPE DataConvertor_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DataConvertor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertor_1", modifiers: " const&", def_value: None }]
constexpr DataConvertor_1(DataConvertor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataConvertor_1", modifiers: "&&", def_value: None }]
constexpr DataConvertor_1(DataConvertor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataConvertor_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DataConvertor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataConvertor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataConvertor_1& operator=(DataConvertor_1&& o) noexcept = default;
  constexpr DataConvertor_1& operator=(DataConvertor_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_1<T>> __declspec(property(get=__get__convertors, put=__set__convertors))  _convertors;

constexpr void __set__convertors(System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_1<T>> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,GlobalNamespace::DataItemConvertor_1<T>> __get__convertors() const;


// Methods

/// @brief Method ProcessItem addr 0x0 size 0xffffffffffffffff virtual false final false
 T ProcessItem(::bs_hook::Il2CppWrapperType item) ;

/// @brief Method AddConvertor addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddConvertor(GlobalNamespace::DataItemConvertor_1<T> dataItemConvertor) ;

static GlobalNamespace::DataConvertor_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DataConvertor_1, "", "DataConvertor`1");
