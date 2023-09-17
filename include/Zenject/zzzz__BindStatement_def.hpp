#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class BindStatement;
}
// Type: Zenject::BindStatement
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10889))
// CS Name: Zenject.BindStatement
class CORDL_TYPE BindStatement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BindStatement() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindStatement", modifiers: " const&", def_value: None }]
constexpr BindStatement(BindStatement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindStatement", modifiers: "&&", def_value: None }]
constexpr BindStatement(BindStatement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindStatement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BindStatement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindStatement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindStatement& operator=(BindStatement&& o) noexcept = default;
  constexpr BindStatement& operator=(BindStatement const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::System::IDisposable> __declspec(property(get=__get__disposables, put=__set__disposables))  _disposables;

constexpr void __set__disposables(::System::Collections::Generic::List_1<::System::IDisposable> value) ;

constexpr ::System::Collections::Generic::List_1<::System::IDisposable> __get__disposables() const;

 ::Zenject::IBindingFinalizer __declspec(property(get=__get__bindingFinalizer, put=__set__bindingFinalizer))  _bindingFinalizer;

constexpr void __set__bindingFinalizer(::Zenject::IBindingFinalizer value) ;

constexpr ::Zenject::IBindingFinalizer __get__bindingFinalizer() const;


// Properties

 ::Zenject::BindingInheritanceMethods __declspec(property(get=get_BindingInheritanceMethod))  BindingInheritanceMethod;

 bool __declspec(property(get=get_HasFinalizer))  HasFinalizer;


// Methods

// Ctor Parameters []
explicit BindStatement() ;

/// @brief Method .ctor addr 0x2d656c8 size 0x84 virtual false final false
 void _ctor() ;

/// @brief Method get_BindingInheritanceMethod addr 0x2d65888 size 0xa8 virtual false final false
 ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod() ;

/// @brief Method get_HasFinalizer addr 0x2d65974 size 0x10 virtual false final false
 bool get_HasFinalizer() ;

/// @brief Method SetFinalizer addr 0x2d65984 size 0x8 virtual false final false
 void SetFinalizer(::Zenject::IBindingFinalizer bindingFinalizer) ;

/// @brief Method AssertHasFinalizer addr 0x2d65930 size 0x44 virtual false final false
 void AssertHasFinalizer() ;

/// @brief Method AddDisposable addr 0x2d6598c size 0xa8 virtual false final false
 void AddDisposable(::System::IDisposable disposable) ;

/// @brief Method SpawnBindInfo addr 0x2d65a34 size 0x6c virtual false final false
 ::Zenject::BindInfo SpawnBindInfo() ;

/// @brief Method FinalizeBinding addr 0x2d65aa0 size 0xb4 virtual false final false
 void FinalizeBinding(::Zenject::DiContainer container) ;

/// @brief Method Reset addr 0x2d6574c size 0x13c virtual false final false
 void Reset() ;

/// @brief Method Dispose addr 0x2d65b54 size 0x58 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::BindStatement);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindStatement, "Zenject", "BindStatement");
