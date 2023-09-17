#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Net {
struct FtpOperation;
}
namespace System::Net {
struct FtpMethodFlags;
}
// Forward declare root types
namespace System::Net {
class FtpMethodInfo;
}
// Type: System.Net::FtpMethodInfo
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7897))
// CS Name: System.Net.FtpMethodInfo
class CORDL_TYPE FtpMethodInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FtpMethodInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpMethodInfo", modifiers: " const&", def_value: None }]
constexpr FtpMethodInfo(FtpMethodInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpMethodInfo", modifiers: "&&", def_value: None }]
constexpr FtpMethodInfo(FtpMethodInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FtpMethodInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FtpMethodInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FtpMethodInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FtpMethodInfo& operator=(FtpMethodInfo&& o) noexcept = default;
  constexpr FtpMethodInfo& operator=(FtpMethodInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Method, put=__set_Method))  Method;

constexpr void __set_Method(::StringW value) ;

constexpr ::StringW __get_Method() const;

 ::System::Net::FtpOperation __declspec(property(get=__get_Operation, put=__set_Operation))  Operation;

constexpr void __set_Operation(::System::Net::FtpOperation value) ;

constexpr ::System::Net::FtpOperation __get_Operation() const;

 ::System::Net::FtpMethodFlags __declspec(property(get=__get_Flags, put=__set_Flags))  Flags;

constexpr void __set_Flags(::System::Net::FtpMethodFlags value) ;

constexpr ::System::Net::FtpMethodFlags __get_Flags() const;

 ::StringW __declspec(property(get=__get_HttpCommand, put=__set_HttpCommand))  HttpCommand;

constexpr void __set_HttpCommand(::StringW value) ;

constexpr ::StringW __get_HttpCommand() const;

static ::ArrayW<::System::Net::FtpMethodInfo> __declspec(property(get=__get_s_knownMethodInfo, put=__set_s_knownMethodInfo))  s_knownMethodInfo;

static void __set_s_knownMethodInfo(::ArrayW<::System::Net::FtpMethodInfo> value) ;

static ::ArrayW<::System::Net::FtpMethodInfo> __get_s_knownMethodInfo() ;


// Properties

 bool __declspec(property(get=get_IsCommandOnly))  IsCommandOnly;

 bool __declspec(property(get=get_IsUpload))  IsUpload;

 bool __declspec(property(get=get_IsDownload))  IsDownload;

 bool __declspec(property(get=get_ShouldParseForResponseUri))  ShouldParseForResponseUri;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "::System::Net::FtpOperation", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::System::Net::FtpMethodFlags", modifiers: "", def_value: None }, CppParam { name: "httpCommand", ty: "::StringW", modifiers: "", def_value: None }]
explicit FtpMethodInfo(::StringW method, ::System::Net::FtpOperation operation, ::System::Net::FtpMethodFlags flags, ::StringW httpCommand) ;

/// @brief Method .ctor addr 0x28030a4 size 0x44 virtual false final false
 void _ctor(::StringW method, ::System::Net::FtpOperation operation, ::System::Net::FtpMethodFlags flags, ::StringW httpCommand) ;

/// @brief Method HasFlag addr 0x2800d1c size 0x10 virtual false final false
 bool HasFlag(::System::Net::FtpMethodFlags flags) ;

/// @brief Method get_IsCommandOnly addr 0x2800ec0 size 0x10 virtual false final false
 bool get_IsCommandOnly() ;

/// @brief Method get_IsUpload addr 0x2801cbc size 0xc virtual false final false
 bool get_IsUpload() ;

/// @brief Method get_IsDownload addr 0x2801cc8 size 0xc virtual false final false
 bool get_IsDownload() ;

/// @brief Method get_ShouldParseForResponseUri addr 0x27ff574 size 0xc virtual false final false
 bool get_ShouldParseForResponseUri() ;

/// @brief Method GetMethodInfo addr 0x28030e8 size 0x164 virtual false final false
static ::System::Net::FtpMethodInfo GetMethodInfo(::StringW method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::FtpMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpMethodInfo, "System.Net", "FtpMethodInfo");
