#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByMethodBase;
}
// Type: Zenject::SubContainerCreatorByMethodBase
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11188))
// CS Name: Zenject.SubContainerCreatorByMethodBase
class CORDL_TYPE SubContainerCreatorByMethodBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::ISubContainerCreator
constexpr operator  ::Zenject::ISubContainerCreator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SubContainerCreatorByMethodBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethodBase", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByMethodBase(SubContainerCreatorByMethodBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethodBase", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByMethodBase(SubContainerCreatorByMethodBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByMethodBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorByMethodBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByMethodBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByMethodBase& operator=(SubContainerCreatorByMethodBase&& o) noexcept = default;
  constexpr SubContainerCreatorByMethodBase& operator=(SubContainerCreatorByMethodBase const& o) noexcept = default;
                


// Fields

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::Zenject::SubContainerCreatorBindInfo __declspec(property(get=__get__containerBindInfo, put=__set__containerBindInfo))  _containerBindInfo;

constexpr void __set__containerBindInfo(::Zenject::SubContainerCreatorBindInfo value) ;

constexpr ::Zenject::SubContainerCreatorBindInfo __get__containerBindInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }]
explicit SubContainerCreatorByMethodBase(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo) ;

/// @brief Method .ctor addr 0x2d92220 size 0x2c virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Zenject::DiContainer CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context) ;

/// @brief Method CreateEmptySubContainer addr 0x2d9224c size 0x3c virtual false final false
 ::Zenject::DiContainer CreateEmptySubContainer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SubContainerCreatorByMethodBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByMethodBase, "Zenject", "SubContainerCreatorByMethodBase");
