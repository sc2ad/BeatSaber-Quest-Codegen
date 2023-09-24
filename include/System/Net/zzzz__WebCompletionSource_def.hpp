#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Net {
class WebCompletionSource;
}
// Type: System.Net::WebCompletionSource
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8063)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8063), inst: 2 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8064))
// CS Name: System.Net.WebCompletionSource
class CORDL_TYPE WebCompletionSource : public System::Net::WebCompletionSource_1<::bs_hook::Il2CppWrapperType> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WebCompletionSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource", modifiers: " const&", def_value: None }]
constexpr WebCompletionSource(WebCompletionSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource", modifiers: "&&", def_value: None }]
constexpr WebCompletionSource(WebCompletionSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebCompletionSource(void* ptr) noexcept : System::Net::WebCompletionSource_1<::bs_hook::Il2CppWrapperType>(ptr) {
}


  constexpr WebCompletionSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebCompletionSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebCompletionSource& operator=(WebCompletionSource&& o) noexcept = default;
  constexpr WebCompletionSource& operator=(WebCompletionSource const& o) noexcept = default;
                


// Methods

static System::Net::WebCompletionSource New_ctor() ;

/// @brief Method .ctor addr 0x284a40c size 0x4c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::WebCompletionSource);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebCompletionSource, "System.Net", "WebCompletionSource");
