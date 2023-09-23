#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Zenject {
class ZenFactoryMethod;
}
// Type: Zenject::ZenFactoryMethod
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15656))
// CS Name: Zenject.ZenFactoryMethod
class CORDL_TYPE ZenFactoryMethod : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ZenFactoryMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenFactoryMethod", modifiers: " const&", def_value: None }]
constexpr ZenFactoryMethod(ZenFactoryMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenFactoryMethod", modifiers: "&&", def_value: None }]
constexpr ZenFactoryMethod(ZenFactoryMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenFactoryMethod(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ZenFactoryMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenFactoryMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenFactoryMethod& operator=(ZenFactoryMethod&& o) noexcept = default;
  constexpr ZenFactoryMethod& operator=(ZenFactoryMethod const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ZenFactoryMethod(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d404b8 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d405e4 size 0x14 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method BeginInvoke addr 0x2d405f8 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::ArrayW<::bs_hook::Il2CppWrapperType> args, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2d40618 size 0xc virtual true final false
 ::bs_hook::Il2CppWrapperType EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenFactoryMethod);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenFactoryMethod, "Zenject", "ZenFactoryMethod");
