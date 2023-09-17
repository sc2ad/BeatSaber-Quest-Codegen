#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::ComponentModel {
class NotifyCollectionChangedEventArgs;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::ComponentModel {
class NotifyCollectionChangedEventHandler;
}
// Type: System.ComponentModel::NotifyCollectionChangedEventHandler
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11733))
// CS Name: System.ComponentModel.NotifyCollectionChangedEventHandler
class CORDL_TYPE NotifyCollectionChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NotifyCollectionChangedEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventHandler", modifiers: " const&", def_value: None }]
constexpr NotifyCollectionChangedEventHandler(NotifyCollectionChangedEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventHandler", modifiers: "&&", def_value: None }]
constexpr NotifyCollectionChangedEventHandler(NotifyCollectionChangedEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotifyCollectionChangedEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr NotifyCollectionChangedEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotifyCollectionChangedEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotifyCollectionChangedEventHandler& operator=(NotifyCollectionChangedEventHandler&& o) noexcept = default;
  constexpr NotifyCollectionChangedEventHandler& operator=(NotifyCollectionChangedEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NotifyCollectionChangedEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24c7004 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24c7134 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, ::System::ComponentModel::NotifyCollectionChangedEventArgs e) ;

/// @brief Method BeginInvoke addr 0x24c7148 size 0x28 virtual true final false
 ::System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType sender, ::System::ComponentModel::NotifyCollectionChangedEventArgs e, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x24c7170 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::NotifyCollectionChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyCollectionChangedEventHandler, "System.ComponentModel", "NotifyCollectionChangedEventHandler");
