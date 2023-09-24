#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include <cstdint>
namespace Zenject {
class SignalDeclarationBindInfo;
}
namespace Zenject {
class SignalCopyBinder;
}
// Forward declare root types
namespace Zenject {
class SignalTickPriorityCopyBinder;
}
// Type: Zenject::SignalTickPriorityCopyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10597))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10599))
// CS Name: Zenject.SignalTickPriorityCopyBinder
class CORDL_TYPE SignalTickPriorityCopyBinder : public Zenject::SignalCopyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignalTickPriorityCopyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalTickPriorityCopyBinder", modifiers: " const&", def_value: None }]
constexpr SignalTickPriorityCopyBinder(SignalTickPriorityCopyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
constexpr SignalTickPriorityCopyBinder(SignalTickPriorityCopyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalTickPriorityCopyBinder(void* ptr) noexcept : Zenject::SignalCopyBinder(ptr) {
}


  constexpr SignalTickPriorityCopyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalTickPriorityCopyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalTickPriorityCopyBinder& operator=(SignalTickPriorityCopyBinder&& o) noexcept = default;
  constexpr SignalTickPriorityCopyBinder& operator=(SignalTickPriorityCopyBinder const& o) noexcept = default;
                


// Fields

 Zenject::SignalDeclarationBindInfo __declspec(property(get=__get__SignalBindInfo_k__BackingField, put=__set__SignalBindInfo_k__BackingField))  _SignalBindInfo_k__BackingField;

constexpr void __set__SignalBindInfo_k__BackingField(Zenject::SignalDeclarationBindInfo value) ;

constexpr Zenject::SignalDeclarationBindInfo __get__SignalBindInfo_k__BackingField() const;


// Properties

 Zenject::SignalDeclarationBindInfo __declspec(property(get=get_SignalBindInfo, put=set_SignalBindInfo))  SignalBindInfo;


// Methods

static Zenject::SignalTickPriorityCopyBinder New_ctor(Zenject::SignalDeclarationBindInfo signalBindInfo) ;

/// @brief Method .ctor addr 0x2d48df0 size 0x24 virtual false final false
 void _ctor(Zenject::SignalDeclarationBindInfo signalBindInfo) ;

/// @brief Method get_SignalBindInfo addr 0x2d4934c size 0x8 virtual false final false
 Zenject::SignalDeclarationBindInfo get_SignalBindInfo() ;

/// @brief Method set_SignalBindInfo addr 0x2d49354 size 0x8 virtual false final false
 void set_SignalBindInfo(Zenject::SignalDeclarationBindInfo value) ;

/// @brief Method WithTickPriority addr 0x2d4935c size 0x24 virtual false final false
 Zenject::SignalCopyBinder WithTickPriority(int32_t priority) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalTickPriorityCopyBinder, "Zenject", "SignalTickPriorityCopyBinder");
