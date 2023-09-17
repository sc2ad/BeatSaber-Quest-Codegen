#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
// Type: System.Security.Cryptography.X509Certificates::X509ChainStatus
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7860))
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainStatus
struct CORDL_TYPE X509ChainStatus : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "status", ty: "::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags", modifiers: "", def_value: None }, CppParam { name: "info", ty: "::StringW", modifiers: "", def_value: None }]
constexpr X509ChainStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status, ::StringW info) noexcept;


                    constexpr X509ChainStatus(X509ChainStatus const&) = default;
                    constexpr X509ChainStatus(X509ChainStatus&&) = default;
                    constexpr X509ChainStatus& operator=(X509ChainStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509ChainStatus& operator=(X509ChainStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509ChainStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags __get_status() const;

 ::StringW __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(::StringW value) ;

constexpr ::StringW __get_info() const;


// Properties

 ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags __declspec(property(get=get_Status, put=set_Status))  Status;

 ::StringW __declspec(property(put=set_StatusInformation))  StatusInformation;


// Methods

/// @brief Method .ctor addr 0x27eec1c size 0x20 virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) ;

/// @brief Method get_Status addr 0x27f1588 size 0x8 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_Status() ;

/// @brief Method set_Status addr 0x27f1590 size 0x8 virtual false final false
 void set_Status(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value) ;

/// @brief Method set_StatusInformation addr 0x27f1598 size 0x8 virtual false final false
 void set_StatusInformation(::StringW value) ;

/// @brief Method GetInformation addr 0x27ed6a4 size 0x198 virtual false final false
static ::StringW GetInformation(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainStatus, "System.Security.Cryptography.X509Certificates", "X509ChainStatus");
