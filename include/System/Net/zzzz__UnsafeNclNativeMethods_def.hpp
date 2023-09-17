#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security {
class SecureString;
}
// Forward declare root types
namespace GlobalNamespace {
class ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID;
}
namespace System::Net {
class UnsafeNclNativeMethods;
}
namespace System::Net {
class ____System__Net__UnsafeNclNativeMethods__HttpApi;
}
namespace System::Net {
class ____System__Net__UnsafeNclNativeMethods__SecureStringHelper;
}
// Type: ::HTTP_REQUEST_HEADER_ID
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7992))
// CS Name: System.Net.UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID
class CORDL_TYPE ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID() = default;

// Ctor Parameters [CppParam { name: "", ty: "______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID", modifiers: " const&", def_value: None }]
constexpr ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID(______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID", modifiers: "&&", def_value: None }]
constexpr ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID(______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID& operator=(______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID&& o) noexcept = default;
  constexpr ______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID& operator=(______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_m_Strings, put=__set_m_Strings))  m_Strings;

static void __set_m_Strings(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_m_Strings() ;


// Methods

/// @brief Method ToString addr 0x28273d4 size 0x7c virtual false final false
static ::StringW ToString(int32_t position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HttpApi
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7993))
// CS Name: System.Net.UnsafeNclNativeMethods::HttpApi
class CORDL_TYPE ____System__Net__UnsafeNclNativeMethods__HttpApi : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HTTP_REQUEST_HEADER_ID = ::GlobalNamespace::______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Net__UnsafeNclNativeMethods__HttpApi() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__UnsafeNclNativeMethods__HttpApi", modifiers: " const&", def_value: None }]
constexpr ____System__Net__UnsafeNclNativeMethods__HttpApi(____System__Net__UnsafeNclNativeMethods__HttpApi const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__UnsafeNclNativeMethods__HttpApi", modifiers: "&&", def_value: None }]
constexpr ____System__Net__UnsafeNclNativeMethods__HttpApi(____System__Net__UnsafeNclNativeMethods__HttpApi&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__UnsafeNclNativeMethods__HttpApi(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__UnsafeNclNativeMethods__HttpApi& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__UnsafeNclNativeMethods__HttpApi& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__UnsafeNclNativeMethods__HttpApi& operator=(____System__Net__UnsafeNclNativeMethods__HttpApi&& o) noexcept = default;
  constexpr ____System__Net__UnsafeNclNativeMethods__HttpApi& operator=(____System__Net__UnsafeNclNativeMethods__HttpApi const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_m_Strings, put=__set_m_Strings))  m_Strings;

static void __set_m_Strings(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_m_Strings() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::SecureStringHelper
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7994))
// CS Name: System.Net.UnsafeNclNativeMethods::SecureStringHelper
class CORDL_TYPE ____System__Net__UnsafeNclNativeMethods__SecureStringHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Net__UnsafeNclNativeMethods__SecureStringHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__UnsafeNclNativeMethods__SecureStringHelper", modifiers: " const&", def_value: None }]
constexpr ____System__Net__UnsafeNclNativeMethods__SecureStringHelper(____System__Net__UnsafeNclNativeMethods__SecureStringHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__UnsafeNclNativeMethods__SecureStringHelper", modifiers: "&&", def_value: None }]
constexpr ____System__Net__UnsafeNclNativeMethods__SecureStringHelper(____System__Net__UnsafeNclNativeMethods__SecureStringHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__UnsafeNclNativeMethods__SecureStringHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__UnsafeNclNativeMethods__SecureStringHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__UnsafeNclNativeMethods__SecureStringHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__UnsafeNclNativeMethods__SecureStringHelper& operator=(____System__Net__UnsafeNclNativeMethods__SecureStringHelper&& o) noexcept = default;
  constexpr ____System__Net__UnsafeNclNativeMethods__SecureStringHelper& operator=(____System__Net__UnsafeNclNativeMethods__SecureStringHelper const& o) noexcept = default;
                


// Methods

/// @brief Method CreateString addr 0x2827f14 size 0x1b0 virtual false final false
static ::StringW CreateString(::System::Security::SecureString secureString) ;

/// @brief Method CreateSecureString addr 0x28280c4 size 0xac virtual false final false
static ::System::Security::SecureString CreateSecureString(::StringW plainString) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::UnsafeNclNativeMethods
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7995))
// CS Name: System.Net.UnsafeNclNativeMethods
class CORDL_TYPE UnsafeNclNativeMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SecureStringHelper = ::System::Net::____System__Net__UnsafeNclNativeMethods__SecureStringHelper;

using HttpApi = ::System::Net::____System__Net__UnsafeNclNativeMethods__HttpApi;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnsafeNclNativeMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods", modifiers: " const&", def_value: None }]
constexpr UnsafeNclNativeMethods(UnsafeNclNativeMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods", modifiers: "&&", def_value: None }]
constexpr UnsafeNclNativeMethods(UnsafeNclNativeMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnsafeNclNativeMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnsafeNclNativeMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnsafeNclNativeMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnsafeNclNativeMethods& operator=(UnsafeNclNativeMethods&& o) noexcept = default;
  constexpr UnsafeNclNativeMethods& operator=(UnsafeNclNativeMethods const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______System__Net__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID, "System.Net", "UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID");
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods, "System.Net", "UnsafeNclNativeMethods");
NEED_NO_BOX(::System::Net::____System__Net__UnsafeNclNativeMethods__HttpApi);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__UnsafeNclNativeMethods__HttpApi, "System.Net", "UnsafeNclNativeMethods/HttpApi");
NEED_NO_BOX(::System::Net::____System__Net__UnsafeNclNativeMethods__SecureStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__UnsafeNclNativeMethods__SecureStringHelper, "System.Net", "UnsafeNclNativeMethods/SecureStringHelper");
