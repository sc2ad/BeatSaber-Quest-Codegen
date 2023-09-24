#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__BindSignalToBinder_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TSignal>
class BindSignalToBinder_1;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TSignal>
class BindSignalIdToBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal>
class BindSignalIdToBinder_1<TSignal>;
}
// Type: Zenject::BindSignalIdToBinder`1
// Type: Zenject::BindSignalIdToBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10582)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10589), inst: 929 }), TypeDefinitionIndex(TypeDefinitionIndex(10589))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10582), inst: 2 })
// CS Name: Zenject.BindSignalIdToBinder`1
class CORDL_TYPE BindSignalIdToBinder_1<TSignal> : public Zenject::BindSignalToBinder_1<TSignal> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BindSignalIdToBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalIdToBinder_1", modifiers: " const&", def_value: None }]
constexpr BindSignalIdToBinder_1(BindSignalIdToBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindSignalIdToBinder_1", modifiers: "&&", def_value: None }]
constexpr BindSignalIdToBinder_1(BindSignalIdToBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindSignalIdToBinder_1(void* ptr) noexcept : Zenject::BindSignalToBinder_1<TSignal>(ptr) {
}


  constexpr BindSignalIdToBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindSignalIdToBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindSignalIdToBinder_1& operator=(BindSignalIdToBinder_1&& o) noexcept = default;
  constexpr BindSignalIdToBinder_1& operator=(BindSignalIdToBinder_1 const& o) noexcept = default;
                


// Methods

static Zenject::BindSignalIdToBinder_1<TSignal> New_ctor(Zenject::DiContainer container, Zenject::SignalBindingBindInfo signalBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::SignalBindingBindInfo signalBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::BindSignalToBinder_1<TSignal> WithId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::BindSignalIdToBinder_1, "Zenject", "BindSignalIdToBinder`1");
