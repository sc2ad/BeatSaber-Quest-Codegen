#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class SerializationCallback;
}
// Type: Newtonsoft.Json.Serialization::SerializationCallback
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11879))
// CS Name: Newtonsoft.Json.Serialization.SerializationCallback
class CORDL_TYPE SerializationCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SerializationCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationCallback", modifiers: " const&", def_value: None }]
constexpr SerializationCallback(SerializationCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationCallback", modifiers: "&&", def_value: None }]
constexpr SerializationCallback(SerializationCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr SerializationCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationCallback& operator=(SerializationCallback&& o) noexcept = default;
  constexpr SerializationCallback& operator=(SerializationCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SerializationCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x250007c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x25001ac size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType o, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method BeginInvoke addr 0x25001c0 size 0x94 virtual true final false
 ::System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType o, ::System::Runtime::Serialization::StreamingContext context, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2500254 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SerializationCallback);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SerializationCallback, "Newtonsoft.Json.Serialization", "SerializationCallback");
