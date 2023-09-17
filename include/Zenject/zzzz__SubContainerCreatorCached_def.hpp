#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
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
// Forward declare root types
namespace Zenject {
class SubContainerCreatorCached;
}
// Type: Zenject::SubContainerCreatorCached
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11236))
// CS Name: Zenject.SubContainerCreatorCached
class CORDL_TYPE SubContainerCreatorCached : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::ISubContainerCreator
constexpr operator  ::Zenject::ISubContainerCreator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SubContainerCreatorCached() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorCached", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorCached(SubContainerCreatorCached const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorCached", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorCached(SubContainerCreatorCached&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorCached(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorCached& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorCached& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorCached& operator=(SubContainerCreatorCached&& o) noexcept = default;
  constexpr SubContainerCreatorCached& operator=(SubContainerCreatorCached const& o) noexcept = default;
                


// Fields

 ::Zenject::ISubContainerCreator __declspec(property(get=__get__subCreator, put=__set__subCreator))  _subCreator;

constexpr void __set__subCreator(::Zenject::ISubContainerCreator value) ;

constexpr ::Zenject::ISubContainerCreator __get__subCreator() const;

 bool __declspec(property(get=__get__isLookingUp, put=__set__isLookingUp))  _isLookingUp;

constexpr void __set__isLookingUp(bool value) ;

constexpr bool __get__isLookingUp() const;

 ::Zenject::DiContainer __declspec(property(get=__get__subContainer, put=__set__subContainer))  _subContainer;

constexpr void __set__subContainer(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__subContainer() const;


// Methods

// Ctor Parameters [CppParam { name: "subCreator", ty: "::Zenject::ISubContainerCreator", modifiers: "", def_value: None }]
explicit SubContainerCreatorCached(::Zenject::ISubContainerCreator subCreator) ;

/// @brief Method .ctor addr 0x2d93ea8 size 0x28 virtual false final false
 void _ctor(::Zenject::ISubContainerCreator subCreator) ;

/// @brief Method CreateSubContainer addr 0x2d93ed0 size 0x180 virtual true final true
 ::Zenject::DiContainer CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SubContainerCreatorCached);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorCached, "Zenject", "SubContainerCreatorCached");
