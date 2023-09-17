#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Uri;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace System::Net {
class AutoWebProxyScriptEngine;
}
// Type: System.Net::AutoWebProxyScriptEngine
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7991))
// CS Name: System.Net.AutoWebProxyScriptEngine
class CORDL_TYPE AutoWebProxyScriptEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AutoWebProxyScriptEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "AutoWebProxyScriptEngine", modifiers: " const&", def_value: None }]
constexpr AutoWebProxyScriptEngine(AutoWebProxyScriptEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AutoWebProxyScriptEngine", modifiers: "&&", def_value: None }]
constexpr AutoWebProxyScriptEngine(AutoWebProxyScriptEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AutoWebProxyScriptEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AutoWebProxyScriptEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AutoWebProxyScriptEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AutoWebProxyScriptEngine& operator=(AutoWebProxyScriptEngine&& o) noexcept = default;
  constexpr AutoWebProxyScriptEngine& operator=(AutoWebProxyScriptEngine const& o) noexcept = default;
                


// Methods

/// @brief Method GetProxies addr 0x2826bb8 size 0xc virtual false final false
 bool GetProxies(::System::Uri destination, ByRef<::System::Collections::Generic::IList_1<::StringW>> proxyList) ;

/// @brief Method GetProxies addr 0x2826bc4 size 0xc virtual false final false
 bool GetProxies(::System::Uri destination, ByRef<::System::Collections::Generic::IList_1<::StringW>> proxyList, ByRef<int32_t> syncStatus) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::AutoWebProxyScriptEngine);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AutoWebProxyScriptEngine, "System.Net", "AutoWebProxyScriptEngine");
