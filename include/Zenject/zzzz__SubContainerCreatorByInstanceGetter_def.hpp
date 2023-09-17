#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class ISubContainerCreator;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstanceGetter;
}
// Type: Zenject::SubContainerCreatorByInstanceGetter
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11187))
// CS Name: Zenject.SubContainerCreatorByInstanceGetter
class CORDL_TYPE SubContainerCreatorByInstanceGetter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::ISubContainerCreator
constexpr operator  ::Zenject::ISubContainerCreator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubContainerCreatorByInstanceGetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstanceGetter", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByInstanceGetter(SubContainerCreatorByInstanceGetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstanceGetter", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByInstanceGetter(SubContainerCreatorByInstanceGetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByInstanceGetter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorByInstanceGetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByInstanceGetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByInstanceGetter& operator=(SubContainerCreatorByInstanceGetter&& o) noexcept = default;
  constexpr SubContainerCreatorByInstanceGetter& operator=(SubContainerCreatorByInstanceGetter const& o) noexcept = default;
                


// Fields

 ::System::Func_2<::Zenject::InjectContext,::Zenject::DiContainer> __declspec(property(get=__get__subcontainerGetter, put=__set__subcontainerGetter))  _subcontainerGetter;

constexpr void __set__subcontainerGetter(::System::Func_2<::Zenject::InjectContext,::Zenject::DiContainer> value) ;

constexpr ::System::Func_2<::Zenject::InjectContext,::Zenject::DiContainer> __get__subcontainerGetter() const;


// Methods

// Ctor Parameters [CppParam { name: "subcontainerGetter", ty: "::System::Func_2<::Zenject::InjectContext,::Zenject::DiContainer>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByInstanceGetter(::System::Func_2<::Zenject::InjectContext,::Zenject::DiContainer> subcontainerGetter) ;

/// @brief Method .ctor addr 0x2d92174 size 0x28 virtual false final false
 void _ctor(::System::Func_2<::Zenject::InjectContext,::Zenject::DiContainer> subcontainerGetter) ;

/// @brief Method CreateSubContainer addr 0x2d9219c size 0x84 virtual true final true
 ::Zenject::DiContainer CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SubContainerCreatorByInstanceGetter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByInstanceGetter, "Zenject", "SubContainerCreatorByInstanceGetter");
