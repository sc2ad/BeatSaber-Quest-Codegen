#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ExtensionDataSetter;
}
// Type: Newtonsoft.Json.Serialization::ExtensionDataSetter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11881))
// CS Name: Newtonsoft.Json.Serialization.ExtensionDataSetter
class CORDL_TYPE ExtensionDataSetter : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ExtensionDataSetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionDataSetter", modifiers: " const&", def_value: None }]
constexpr ExtensionDataSetter(ExtensionDataSetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionDataSetter", modifiers: "&&", def_value: None }]
constexpr ExtensionDataSetter(ExtensionDataSetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtensionDataSetter(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ExtensionDataSetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtensionDataSetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtensionDataSetter& operator=(ExtensionDataSetter&& o) noexcept = default;
  constexpr ExtensionDataSetter& operator=(ExtensionDataSetter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ExtensionDataSetter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24f9354 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2500448 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType o, ::StringW key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method BeginInvoke addr 0x250045c size 0x2c virtual true final false
 System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType o, ::StringW key, ::bs_hook::Il2CppWrapperType value, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2500488 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::ExtensionDataSetter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::ExtensionDataSetter, "Newtonsoft.Json.Serialization", "ExtensionDataSetter");
