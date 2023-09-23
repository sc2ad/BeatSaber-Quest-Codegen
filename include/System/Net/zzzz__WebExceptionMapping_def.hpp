#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
struct WebExceptionStatus;
}
// Forward declare root types
namespace System::Net {
class WebExceptionMapping;
}
// Type: System.Net::WebExceptionMapping
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7939))
// CS Name: System.Net.WebExceptionMapping
class CORDL_TYPE WebExceptionMapping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WebExceptionMapping() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebExceptionMapping", modifiers: " const&", def_value: None }]
constexpr WebExceptionMapping(WebExceptionMapping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebExceptionMapping", modifiers: "&&", def_value: None }]
constexpr WebExceptionMapping(WebExceptionMapping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebExceptionMapping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebExceptionMapping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebExceptionMapping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebExceptionMapping& operator=(WebExceptionMapping&& o) noexcept = default;
  constexpr WebExceptionMapping& operator=(WebExceptionMapping const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_s_Mapping, put=__set_s_Mapping))  s_Mapping;

static void __set_s_Mapping(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_Mapping() ;


// Methods

/// @brief Method GetWebStatusString addr 0x280e470 size 0x198 virtual false final false
static ::StringW GetWebStatusString(System::Net::WebExceptionStatus status) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::WebExceptionMapping);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebExceptionMapping, "System.Net", "WebExceptionMapping");
