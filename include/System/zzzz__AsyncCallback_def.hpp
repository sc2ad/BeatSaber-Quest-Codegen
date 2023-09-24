#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace System {
class AsyncCallback;
}
// Type: System::AsyncCallback
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2353))
// CS Name: System.AsyncCallback
class CORDL_TYPE AsyncCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~AsyncCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCallback", modifiers: " const&", def_value: None }]
constexpr AsyncCallback(AsyncCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCallback", modifiers: "&&", def_value: None }]
constexpr AsyncCallback(AsyncCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr AsyncCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncCallback& operator=(AsyncCallback&& o) noexcept = default;
  constexpr AsyncCallback& operator=(AsyncCallback const& o) noexcept = default;
                


// Methods

static System::AsyncCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x23b47ec size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x23b4918 size 0x14 virtual true final false
 void Invoke(System::IAsyncResult ar) ;

/// @brief Method BeginInvoke addr 0x23b492c size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::IAsyncResult ar, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x23b494c size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AsyncCallback);
DEFINE_IL2CPP_ARG_TYPE(System::AsyncCallback, "System", "AsyncCallback");
