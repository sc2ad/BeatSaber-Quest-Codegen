#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace ENet {
class ChecksumCallback;
}
// Type: ENet::ChecksumCallback
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15266))
// CS Name: ENet.ChecksumCallback
class CORDL_TYPE ChecksumCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ChecksumCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChecksumCallback", modifiers: " const&", def_value: None }]
constexpr ChecksumCallback(ChecksumCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChecksumCallback", modifiers: "&&", def_value: None }]
constexpr ChecksumCallback(ChecksumCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChecksumCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ChecksumCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChecksumCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChecksumCallback& operator=(ChecksumCallback&& o) noexcept = default;
  constexpr ChecksumCallback& operator=(ChecksumCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ChecksumCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x207cbc0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x207cc84 size 0x14 virtual true final false
 uint64_t Invoke(::cordl_internals::intptr_t buffers, int32_t bufferCount) ;

/// @brief Method BeginInvoke addr 0x207cc98 size 0xb4 virtual true final false
 ::System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t buffers, int32_t bufferCount, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x207cd4c size 0x28 virtual true final false
 uint64_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
} // end anonymous namespace
NEED_NO_BOX(::ENet::ChecksumCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::ChecksumCallback, "ENet", "ChecksumCallback");
