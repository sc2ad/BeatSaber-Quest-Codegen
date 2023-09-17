#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Type;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstaller;
}
// Type: Zenject::SubContainerCreatorByInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11185))
// CS Name: Zenject.SubContainerCreatorByInstaller
class CORDL_TYPE SubContainerCreatorByInstaller : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::ISubContainerCreator
constexpr operator  ::Zenject::ISubContainerCreator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstaller", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByInstaller(SubContainerCreatorByInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstaller", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByInstaller(SubContainerCreatorByInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByInstaller(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorByInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByInstaller& operator=(SubContainerCreatorByInstaller&& o) noexcept = default;
  constexpr SubContainerCreatorByInstaller& operator=(SubContainerCreatorByInstaller const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get__installerType, put=__set__installerType))  _installerType;

constexpr void __set__installerType(::System::Type value) ;

constexpr ::System::Type __get__installerType() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __declspec(property(get=__get__extraArgs, put=__set__extraArgs))  _extraArgs;

constexpr void __set__extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> __get__extraArgs() const;

 ::Zenject::SubContainerCreatorBindInfo __declspec(property(get=__get__containerBindInfo, put=__set__containerBindInfo))  _containerBindInfo;

constexpr void __set__containerBindInfo(::Zenject::SubContainerCreatorBindInfo value) ;

constexpr ::Zenject::SubContainerCreatorBindInfo __get__containerBindInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installerType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArgs", ty: "::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByInstaller(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Type installerType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArgs) ;

/// @brief Method .ctor addr 0x2d91aa8 size 0xf0 virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Type installerType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArgs) ;

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installerType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit SubContainerCreatorByInstaller(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Type installerType) ;

/// @brief Method .ctor addr 0x2d91b98 size 0xa0 virtual false final false
 void _ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Type installerType) ;

/// @brief Method CreateSubContainer addr 0x2d91c38 size 0x1a8 virtual true final true
 ::Zenject::DiContainer CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SubContainerCreatorByInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByInstaller, "Zenject", "SubContainerCreatorByInstaller");
