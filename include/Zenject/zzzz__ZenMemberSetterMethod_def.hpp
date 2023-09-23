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
// Forward declare root types
namespace Zenject {
class ZenMemberSetterMethod;
}
// Type: Zenject::ZenMemberSetterMethod
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15657))
// CS Name: Zenject.ZenMemberSetterMethod
class CORDL_TYPE ZenMemberSetterMethod : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ZenMemberSetterMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenMemberSetterMethod", modifiers: " const&", def_value: None }]
constexpr ZenMemberSetterMethod(ZenMemberSetterMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenMemberSetterMethod", modifiers: "&&", def_value: None }]
constexpr ZenMemberSetterMethod(ZenMemberSetterMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenMemberSetterMethod(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ZenMemberSetterMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenMemberSetterMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenMemberSetterMethod& operator=(ZenMemberSetterMethod&& o) noexcept = default;
  constexpr ZenMemberSetterMethod& operator=(ZenMemberSetterMethod const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ZenMemberSetterMethod(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d40624 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d40754 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method BeginInvoke addr 0x2d40768 size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2d40790 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenMemberSetterMethod);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenMemberSetterMethod, "Zenject", "ZenMemberSetterMethod");
