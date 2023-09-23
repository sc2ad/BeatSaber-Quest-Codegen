#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
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
// Forward declare root types
namespace Zenject {
class SignalCopyBinder;
}
// Type: Zenject::SignalCopyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10597))
// CS Name: Zenject.SignalCopyBinder
class CORDL_TYPE SignalCopyBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SignalCopyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalCopyBinder", modifiers: " const&", def_value: None }]
constexpr SignalCopyBinder(SignalCopyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalCopyBinder", modifiers: "&&", def_value: None }]
constexpr SignalCopyBinder(SignalCopyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalCopyBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalCopyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalCopyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalCopyBinder& operator=(SignalCopyBinder&& o) noexcept = default;
  constexpr SignalCopyBinder& operator=(SignalCopyBinder const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::BindInfo> __declspec(property(get=__get__bindInfos, put=__set__bindInfos))  _bindInfos;

constexpr void __set__bindInfos(System::Collections::Generic::List_1<Zenject::BindInfo> value) ;

constexpr System::Collections::Generic::List_1<Zenject::BindInfo> __get__bindInfos() const;


// Methods

// Ctor Parameters []
explicit SignalCopyBinder() ;

/// @brief Method .ctor addr 0x2d48fd4 size 0x80 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
explicit SignalCopyBinder(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d49054 size 0xf8 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method AddCopyBindInfo addr 0x2d4914c size 0xa8 virtual false final false
 void AddCopyBindInfo(Zenject::BindInfo bindInfo) ;

/// @brief Method CopyIntoAllSubContainers addr 0x2d491f4 size 0x8 virtual false final false
 void CopyIntoAllSubContainers() ;

/// @brief Method CopyIntoDirectSubContainers addr 0x2d49290 size 0x8 virtual false final false
 void CopyIntoDirectSubContainers() ;

/// @brief Method MoveIntoAllSubContainers addr 0x2d49298 size 0x8 virtual false final false
 void MoveIntoAllSubContainers() ;

/// @brief Method MoveIntoDirectSubContainers addr 0x2d492a0 size 0x8 virtual false final false
 void MoveIntoDirectSubContainers() ;

/// @brief Method SetInheritanceMethod addr 0x2d491fc size 0x94 virtual false final false
 void SetInheritanceMethod(Zenject::BindingInheritanceMethods method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalCopyBinder, "Zenject", "SignalCopyBinder");
