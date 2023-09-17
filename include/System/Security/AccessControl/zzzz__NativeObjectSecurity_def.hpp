#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
struct ResourceType;
}
namespace System {
class Exception;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Forward declare root types
namespace System::Security::AccessControl {
class NativeObjectSecurity;
}
namespace System::Security::AccessControl {
class ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode;
}
// Type: ::ExceptionFromErrorCode
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3036))
// CS Name: System.Security.AccessControl.NativeObjectSecurity::ExceptionFromErrorCode
class CORDL_TYPE ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode", modifiers: " const&", def_value: None }]
constexpr ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode(____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode", modifiers: "&&", def_value: None }]
constexpr ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode(____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode& operator=(____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode&& o) noexcept = default;
  constexpr ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode& operator=(____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2319070 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2319174 size 0x14 virtual true final false
 ::System::Exception Invoke(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle handle, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
// Type: System.Security.AccessControl::NativeObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3022))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3037))
// CS Name: System.Security.AccessControl.NativeObjectSecurity
class CORDL_TYPE NativeObjectSecurity : public ::System::Security::AccessControl::CommonObjectSecurity {
public:
// Declarations
using ExceptionFromErrorCode = ::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NativeObjectSecurity() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity", modifiers: " const&", def_value: None }]
constexpr NativeObjectSecurity(NativeObjectSecurity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity", modifiers: "&&", def_value: None }]
constexpr NativeObjectSecurity(NativeObjectSecurity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeObjectSecurity(void* ptr) noexcept : ::System::Security::AccessControl::CommonObjectSecurity(ptr) {
}


  constexpr NativeObjectSecurity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeObjectSecurity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeObjectSecurity& operator=(NativeObjectSecurity&& o) noexcept = default;
  constexpr NativeObjectSecurity& operator=(NativeObjectSecurity const& o) noexcept = default;
                


// Fields

 ::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode __declspec(property(get=__get_exception_from_error_code, put=__set_exception_from_error_code))  exception_from_error_code;

constexpr void __set_exception_from_error_code(::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode value) ;

constexpr ::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode __get_exception_from_error_code() const;


// Methods

// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resourceType", ty: "::System::Security::AccessControl::ResourceType", modifiers: "", def_value: None }, CppParam { name: "exceptionFromErrorCode", ty: "::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode", modifiers: "", def_value: None }, CppParam { name: "exceptionContext", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit NativeObjectSecurity(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode exceptionFromErrorCode, ::bs_hook::Il2CppWrapperType exceptionContext) ;

/// @brief Method .ctor addr 0x2318cbc size 0x2c virtual false final false
 void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode exceptionFromErrorCode, ::bs_hook::Il2CppWrapperType exceptionContext) ;

// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resourceType", ty: "::System::Security::AccessControl::ResourceType", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "includeSections", ty: "::System::Security::AccessControl::AccessControlSections", modifiers: "", def_value: None }]
explicit NativeObjectSecurity(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) ;

/// @brief Method .ctor addr 0x2318380 size 0x10 virtual false final false
 void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) ;

// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resourceType", ty: "::System::Security::AccessControl::ResourceType", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "includeSections", ty: "::System::Security::AccessControl::AccessControlSections", modifiers: "", def_value: None }, CppParam { name: "exceptionFromErrorCode", ty: "::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode", modifiers: "", def_value: None }, CppParam { name: "exceptionContext", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit NativeObjectSecurity(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections, ::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode exceptionFromErrorCode, ::bs_hook::Il2CppWrapperType exceptionContext) ;

/// @brief Method .ctor addr 0x2318ce8 size 0x74 virtual false final false
 void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections, ::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode exceptionFromErrorCode, ::bs_hook::Il2CppWrapperType exceptionContext) ;

/// @brief Method ClearAccessControlSectionsModified addr 0x2318e00 size 0xa4 virtual false final false
 void ClearAccessControlSectionsModified() ;

/// @brief Method DefaultExceptionFromErrorCode addr 0x2318ee8 size 0x188 virtual false final false
static ::System::Exception DefaultExceptionFromErrorCode(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle handle, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method RaiseExceptionOnFailure addr 0x2318d5c size 0xa4 virtual false final false
 void RaiseExceptionOnFailure(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle handle, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method InternalGet addr 0x2319134 size 0x40 virtual true final false
 int32_t InternalGet(::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
NEED_NO_BOX(::System::Security::AccessControl::NativeObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::NativeObjectSecurity, "System.Security.AccessControl", "NativeObjectSecurity");
NEED_NO_BOX(::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::____System__Security__AccessControl__NativeObjectSecurity__ExceptionFromErrorCode, "System.Security.AccessControl", "NativeObjectSecurity/ExceptionFromErrorCode");
