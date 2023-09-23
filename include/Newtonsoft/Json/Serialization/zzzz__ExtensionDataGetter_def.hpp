#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class AsyncCallback;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ExtensionDataGetter;
}
// Type: Newtonsoft.Json.Serialization::ExtensionDataGetter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11882))
// CS Name: Newtonsoft.Json.Serialization.ExtensionDataGetter
class CORDL_TYPE ExtensionDataGetter : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ExtensionDataGetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionDataGetter", modifiers: " const&", def_value: None }]
constexpr ExtensionDataGetter(ExtensionDataGetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionDataGetter", modifiers: "&&", def_value: None }]
constexpr ExtensionDataGetter(ExtensionDataGetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtensionDataGetter(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ExtensionDataGetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtensionDataGetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtensionDataGetter& operator=(ExtensionDataGetter&& o) noexcept = default;
  constexpr ExtensionDataGetter& operator=(ExtensionDataGetter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ExtensionDataGetter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24f948c size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2500494 size 0x14 virtual true final false
 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> Invoke(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method BeginInvoke addr 0x25004a8 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType o, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x25004c8 size 0xc virtual true final false
 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::ExtensionDataGetter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::ExtensionDataGetter, "Newtonsoft.Json.Serialization", "ExtensionDataGetter");
