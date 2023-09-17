#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
class Assembly;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Text {
class EncodingHelper;
}
// Type: System.Text::EncodingHelper
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2873))
// CS Name: System.Text.EncodingHelper
class CORDL_TYPE EncodingHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncodingHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodingHelper", modifiers: " const&", def_value: None }]
constexpr EncodingHelper(EncodingHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodingHelper", modifiers: "&&", def_value: None }]
constexpr EncodingHelper(EncodingHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncodingHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncodingHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncodingHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncodingHelper& operator=(EncodingHelper&& o) noexcept = default;
  constexpr EncodingHelper& operator=(EncodingHelper const& o) noexcept = default;
                


// Fields

static ::System::Text::Encoding __declspec(property(get=__get_utf8EncodingWithoutMarkers, put=__set_utf8EncodingWithoutMarkers))  utf8EncodingWithoutMarkers;

static void __set_utf8EncodingWithoutMarkers(::System::Text::Encoding value) ;

static ::System::Text::Encoding __get_utf8EncodingWithoutMarkers() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_lockobj, put=__set_lockobj))  lockobj;

static void __set_lockobj(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_lockobj() ;

static ::System::Reflection::Assembly __declspec(property(get=__get_i18nAssembly, put=__set_i18nAssembly))  i18nAssembly;

static void __set_i18nAssembly(::System::Reflection::Assembly value) ;

static ::System::Reflection::Assembly __get_i18nAssembly() ;

static bool __declspec(property(get=__get_i18nDisabled, put=__set_i18nDisabled))  i18nDisabled;

static void __set_i18nDisabled(bool value) ;

static bool __get_i18nDisabled() ;


// Properties

static ::System::Text::Encoding __declspec(property(get=get_UTF8Unmarked))  UTF8Unmarked;


// Methods

/// @brief Method get_UTF8Unmarked addr 0x22e3eb0 size 0x1f0 virtual false final false
static ::System::Text::Encoding get_UTF8Unmarked() ;

/// @brief Method InternalCodePage addr 0x22e40a0 size 0x4 virtual false final false
static ::StringW InternalCodePage(ByRef<int32_t> code_page) ;

/// @brief Method GetDefaultEncoding addr 0x22e0d4c size 0x17c virtual false final false
static ::System::Text::Encoding GetDefaultEncoding() ;

/// @brief Method InvokeI18N addr 0x22df19c size 0x70c virtual false final false
static ::bs_hook::Il2CppWrapperType InvokeI18N(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::EncodingHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncodingHelper, "System.Text", "EncodingHelper");
