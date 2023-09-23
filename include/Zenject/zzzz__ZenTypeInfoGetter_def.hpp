#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace Zenject {
class ZenTypeInfoGetter;
}
// Type: Zenject::ZenTypeInfoGetter
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11295))
// CS Name: Zenject.ZenTypeInfoGetter
class CORDL_TYPE ZenTypeInfoGetter : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ZenTypeInfoGetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenTypeInfoGetter", modifiers: " const&", def_value: None }]
constexpr ZenTypeInfoGetter(ZenTypeInfoGetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenTypeInfoGetter", modifiers: "&&", def_value: None }]
constexpr ZenTypeInfoGetter(ZenTypeInfoGetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenTypeInfoGetter(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ZenTypeInfoGetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenTypeInfoGetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenTypeInfoGetter& operator=(ZenTypeInfoGetter&& o) noexcept = default;
  constexpr ZenTypeInfoGetter& operator=(ZenTypeInfoGetter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ZenTypeInfoGetter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2da512c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2da51e8 size 0x14 virtual true final false
 Zenject::InjectTypeInfo Invoke() ;

/// @brief Method BeginInvoke addr 0x2da51fc size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2da521c size 0xc virtual true final false
 Zenject::InjectTypeInfo EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenTypeInfoGetter);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenTypeInfoGetter, "Zenject", "ZenTypeInfoGetter");
