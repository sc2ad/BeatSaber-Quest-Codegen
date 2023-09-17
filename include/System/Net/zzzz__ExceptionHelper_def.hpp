#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Net {
class WebException;
}
namespace System {
class NotImplementedException;
}
namespace System {
class NotSupportedException;
}
// Forward declare root types
namespace System::Net {
class ExceptionHelper;
}
// Type: System.Net::ExceptionHelper
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7927))
// CS Name: System.Net.ExceptionHelper
class CORDL_TYPE ExceptionHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExceptionHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHelper", modifiers: " const&", def_value: None }]
constexpr ExceptionHelper(ExceptionHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHelper", modifiers: "&&", def_value: None }]
constexpr ExceptionHelper(ExceptionHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExceptionHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExceptionHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExceptionHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExceptionHelper& operator=(ExceptionHelper&& o) noexcept = default;
  constexpr ExceptionHelper& operator=(ExceptionHelper const& o) noexcept = default;
                


// Properties

static ::System::NotImplementedException __declspec(property(get=get_MethodNotImplementedException))  MethodNotImplementedException;

static ::System::NotImplementedException __declspec(property(get=get_PropertyNotImplementedException))  PropertyNotImplementedException;

static ::System::Net::WebException __declspec(property(get=get_TimeoutException))  TimeoutException;

static ::System::NotSupportedException __declspec(property(get=get_PropertyNotSupportedException))  PropertyNotSupportedException;

static ::System::Net::WebException __declspec(property(get=get_RequestAbortedException))  RequestAbortedException;


// Methods

/// @brief Method get_MethodNotImplementedException addr 0x280c860 size 0x88 virtual false final false
static ::System::NotImplementedException get_MethodNotImplementedException() ;

/// @brief Method get_PropertyNotImplementedException addr 0x280c8e8 size 0x88 virtual false final false
static ::System::NotImplementedException get_PropertyNotImplementedException() ;

/// @brief Method get_TimeoutException addr 0x280c970 size 0x80 virtual false final false
static ::System::Net::WebException get_TimeoutException() ;

/// @brief Method get_PropertyNotSupportedException addr 0x280ca04 size 0x88 virtual false final false
static ::System::NotSupportedException get_PropertyNotSupportedException() ;

/// @brief Method get_RequestAbortedException addr 0x280ca8c size 0x94 virtual false final false
static ::System::Net::WebException get_RequestAbortedException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::ExceptionHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ExceptionHelper, "System.Net", "ExceptionHelper");
