#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class BindingCondition;
}
// Type: Zenject::BindingCondition
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11101))
// CS Name: Zenject.BindingCondition
class CORDL_TYPE BindingCondition : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BindingCondition() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindingCondition", modifiers: " const&", def_value: None }]
constexpr BindingCondition(BindingCondition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindingCondition", modifiers: "&&", def_value: None }]
constexpr BindingCondition(BindingCondition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindingCondition(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr BindingCondition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindingCondition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindingCondition& operator=(BindingCondition&& o) noexcept = default;
  constexpr BindingCondition& operator=(BindingCondition const& o) noexcept = default;
                


// Methods

static Zenject::BindingCondition New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d7cff8 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d7d124 size 0x14 virtual true final false
 bool Invoke(Zenject::InjectContext c) ;

/// @brief Method BeginInvoke addr 0x2d7d138 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(Zenject::InjectContext c, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2d7d158 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::BindingCondition);
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindingCondition, "Zenject", "BindingCondition");
