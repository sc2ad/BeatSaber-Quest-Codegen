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
class ZenInjectMethod;
}
// Type: Zenject::ZenInjectMethod
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15655))
// CS Name: Zenject.ZenInjectMethod
class CORDL_TYPE ZenInjectMethod : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ZenInjectMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenInjectMethod", modifiers: " const&", def_value: None }]
constexpr ZenInjectMethod(ZenInjectMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenInjectMethod", modifiers: "&&", def_value: None }]
constexpr ZenInjectMethod(ZenInjectMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenInjectMethod(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ZenInjectMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenInjectMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenInjectMethod& operator=(ZenInjectMethod&& o) noexcept = default;
  constexpr ZenInjectMethod& operator=(ZenInjectMethod const& o) noexcept = default;
                


// Methods

static Zenject::ZenInjectMethod New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d40340 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d40470 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method BeginInvoke addr 0x2d40484 size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> args, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2d404ac size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenInjectMethod);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenInjectMethod, "Zenject", "ZenInjectMethod");
