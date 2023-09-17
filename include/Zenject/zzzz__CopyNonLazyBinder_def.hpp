#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__NonLazyBinder_def.hpp"
namespace {
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class NonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class CopyNonLazyBinder;
}
// Type: Zenject::CopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10867))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10643))
// CS Name: Zenject.CopyNonLazyBinder
class CORDL_TYPE CopyNonLazyBinder : public ::Zenject::NonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "CopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr CopyNonLazyBinder(CopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr CopyNonLazyBinder(CopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CopyNonLazyBinder(void* ptr) noexcept : ::Zenject::NonLazyBinder(ptr) {
}


  constexpr CopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CopyNonLazyBinder& operator=(CopyNonLazyBinder&& o) noexcept = default;
  constexpr CopyNonLazyBinder& operator=(CopyNonLazyBinder const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::Zenject::BindInfo> __declspec(property(get=__get__secondaryBindInfos, put=__set__secondaryBindInfos))  _secondaryBindInfos;

constexpr void __set__secondaryBindInfos(::System::Collections::Generic::List_1<::Zenject::BindInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::BindInfo> __get__secondaryBindInfos() const;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }]
explicit CopyNonLazyBinder(::Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d4df24 size 0x8 virtual false final false
 void _ctor(::Zenject::BindInfo bindInfo) ;

/// @brief Method AddSecondaryCopyBindInfo addr 0x2d522f8 size 0xf0 virtual false final false
 void AddSecondaryCopyBindInfo(::Zenject::BindInfo bindInfo) ;

/// @brief Method CopyIntoAllSubContainers addr 0x2d4ca6c size 0x1c virtual false final false
 ::Zenject::NonLazyBinder CopyIntoAllSubContainers() ;

/// @brief Method CopyIntoDirectSubContainers addr 0x2d5252c size 0x1c virtual false final false
 ::Zenject::NonLazyBinder CopyIntoDirectSubContainers() ;

/// @brief Method MoveIntoAllSubContainers addr 0x2d52548 size 0x1c virtual false final false
 ::Zenject::NonLazyBinder MoveIntoAllSubContainers() ;

/// @brief Method MoveIntoDirectSubContainers addr 0x2d52564 size 0x1c virtual false final false
 ::Zenject::NonLazyBinder MoveIntoDirectSubContainers() ;

/// @brief Method SetInheritanceMethod addr 0x2d523e8 size 0x144 virtual false final false
 void SetInheritanceMethod(::Zenject::BindingInheritanceMethods method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::CopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CopyNonLazyBinder, "Zenject", "CopyNonLazyBinder");
