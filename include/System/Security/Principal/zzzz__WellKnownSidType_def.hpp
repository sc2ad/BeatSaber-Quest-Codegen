#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Principal {
struct WellKnownSidType;
}
// Type: System.Security.Principal::WellKnownSidType
namespace System::Security::Principal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3000))
// CS Name: System.Security.Principal.WellKnownSidType
struct CORDL_TYPE WellKnownSidType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WellKnownSidType(int32_t value__) noexcept;


                    constexpr WellKnownSidType(WellKnownSidType const&) = default;
                    constexpr WellKnownSidType(WellKnownSidType&&) = default;
                    constexpr WellKnownSidType& operator=(WellKnownSidType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WellKnownSidType& operator=(WellKnownSidType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WellKnownSidType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __WellKnownSidType_Unwrapped : int32_t {
__NullSid = 0,
__WorldSid = 1,
__LocalSid = 2,
__CreatorOwnerSid = 3,
__CreatorGroupSid = 4,
__CreatorOwnerServerSid = 5,
__CreatorGroupServerSid = 6,
__NTAuthoritySid = 7,
__DialupSid = 8,
__NetworkSid = 9,
__BatchSid = 10,
__InteractiveSid = 11,
__ServiceSid = 12,
__AnonymousSid = 13,
__ProxySid = 14,
__EnterpriseControllersSid = 15,
__SelfSid = 16,
__AuthenticatedUserSid = 17,
__RestrictedCodeSid = 18,
__TerminalServerSid = 19,
__RemoteLogonIdSid = 20,
__LogonIdsSid = 21,
__LocalSystemSid = 22,
__LocalServiceSid = 23,
__NetworkServiceSid = 24,
__BuiltinDomainSid = 25,
__BuiltinAdministratorsSid = 26,
__BuiltinUsersSid = 27,
__BuiltinGuestsSid = 28,
__BuiltinPowerUsersSid = 29,
__BuiltinAccountOperatorsSid = 30,
__BuiltinSystemOperatorsSid = 31,
__BuiltinPrintOperatorsSid = 32,
__BuiltinBackupOperatorsSid = 33,
__BuiltinReplicatorSid = 34,
__BuiltinPreWindows2000CompatibleAccessSid = 35,
__BuiltinRemoteDesktopUsersSid = 36,
__BuiltinNetworkConfigurationOperatorsSid = 37,
__AccountAdministratorSid = 38,
__AccountGuestSid = 39,
__AccountKrbtgtSid = 40,
__AccountDomainAdminsSid = 41,
__AccountDomainUsersSid = 42,
__AccountDomainGuestsSid = 43,
__AccountComputersSid = 44,
__AccountControllersSid = 45,
__AccountCertAdminsSid = 46,
__AccountSchemaAdminsSid = 47,
__AccountEnterpriseAdminsSid = 48,
__AccountPolicyAdminsSid = 49,
__AccountRasAndIasServersSid = 50,
__NtlmAuthenticationSid = 51,
__DigestAuthenticationSid = 52,
__SChannelAuthenticationSid = 53,
__ThisOrganizationSid = 54,
__OtherOrganizationSid = 55,
__BuiltinIncomingForestTrustBuildersSid = 56,
__BuiltinPerformanceMonitoringUsersSid = 57,
__BuiltinPerformanceLoggingUsersSid = 58,
__BuiltinAuthorizationAccessSid = 59,
__WinBuiltinTerminalServerLicenseServersSid = 60,
__MaxDefined = 60,
__WinBuiltinDCOMUsersSid = 61,
__WinBuiltinIUsersSid = 62,
__WinIUserSid = 63,
__WinBuiltinCryptoOperatorsSid = 64,
__WinUntrustedLabelSid = 65,
__WinLowLabelSid = 66,
__WinMediumLabelSid = 67,
__WinHighLabelSid = 68,
__WinSystemLabelSid = 69,
__WinWriteRestrictedCodeSid = 70,
__WinCreatorOwnerRightsSid = 71,
__WinCacheablePrincipalsGroupSid = 72,
__WinNonCacheablePrincipalsGroupSid = 73,
__WinEnterpriseReadonlyControllersSid = 74,
__WinAccountReadonlyControllersSid = 75,
__WinBuiltinEventLogReadersGroup = 76,
__WinNewEnterpriseReadonlyControllersSid = 77,
__WinBuiltinCertSvcDComAccessGroup = 78,
__WinMediumPlusLabelSid = 79,
__WinLocalLogonSid = 80,
__WinConsoleLogonSid = 81,
__WinThisOrganizationCertificateSid = 82,
__WinApplicationPackageAuthoritySid = 83,
__WinBuiltinAnyPackageSid = 84,
__WinCapabilityInternetClientSid = 85,
__WinCapabilityInternetClientServerSid = 86,
__WinCapabilityPrivateNetworkClientServerSid = 87,
__WinCapabilityPicturesLibrarySid = 88,
__WinCapabilityVideosLibrarySid = 89,
__WinCapabilityMusicLibrarySid = 90,
__WinCapabilityDocumentsLibrarySid = 91,
__WinCapabilitySharedUserCertificatesSid = 92,
__WinCapabilityEnterpriseAuthenticationSid = 93,
__WinCapabilityRemovableStorageSid = 94,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WellKnownSidType_Unwrapped () const noexcept {
return std::bit_cast<__WellKnownSidType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NullSid offset 0
static System::Security::Principal::WellKnownSidType const NullSid;

/// @brief Field WorldSid offset 0
static System::Security::Principal::WellKnownSidType const WorldSid;

/// @brief Field LocalSid offset 0
static System::Security::Principal::WellKnownSidType const LocalSid;

/// @brief Field CreatorOwnerSid offset 0
static System::Security::Principal::WellKnownSidType const CreatorOwnerSid;

/// @brief Field CreatorGroupSid offset 0
static System::Security::Principal::WellKnownSidType const CreatorGroupSid;

/// @brief Field CreatorOwnerServerSid offset 0
static System::Security::Principal::WellKnownSidType const CreatorOwnerServerSid;

/// @brief Field CreatorGroupServerSid offset 0
static System::Security::Principal::WellKnownSidType const CreatorGroupServerSid;

/// @brief Field NTAuthoritySid offset 0
static System::Security::Principal::WellKnownSidType const NTAuthoritySid;

/// @brief Field DialupSid offset 0
static System::Security::Principal::WellKnownSidType const DialupSid;

/// @brief Field NetworkSid offset 0
static System::Security::Principal::WellKnownSidType const NetworkSid;

/// @brief Field BatchSid offset 0
static System::Security::Principal::WellKnownSidType const BatchSid;

/// @brief Field InteractiveSid offset 0
static System::Security::Principal::WellKnownSidType const InteractiveSid;

/// @brief Field ServiceSid offset 0
static System::Security::Principal::WellKnownSidType const ServiceSid;

/// @brief Field AnonymousSid offset 0
static System::Security::Principal::WellKnownSidType const AnonymousSid;

/// @brief Field ProxySid offset 0
static System::Security::Principal::WellKnownSidType const ProxySid;

/// @brief Field EnterpriseControllersSid offset 0
static System::Security::Principal::WellKnownSidType const EnterpriseControllersSid;

/// @brief Field SelfSid offset 0
static System::Security::Principal::WellKnownSidType const SelfSid;

/// @brief Field AuthenticatedUserSid offset 0
static System::Security::Principal::WellKnownSidType const AuthenticatedUserSid;

/// @brief Field RestrictedCodeSid offset 0
static System::Security::Principal::WellKnownSidType const RestrictedCodeSid;

/// @brief Field TerminalServerSid offset 0
static System::Security::Principal::WellKnownSidType const TerminalServerSid;

/// @brief Field RemoteLogonIdSid offset 0
static System::Security::Principal::WellKnownSidType const RemoteLogonIdSid;

/// @brief Field LogonIdsSid offset 0
static System::Security::Principal::WellKnownSidType const LogonIdsSid;

/// @brief Field LocalSystemSid offset 0
static System::Security::Principal::WellKnownSidType const LocalSystemSid;

/// @brief Field LocalServiceSid offset 0
static System::Security::Principal::WellKnownSidType const LocalServiceSid;

/// @brief Field NetworkServiceSid offset 0
static System::Security::Principal::WellKnownSidType const NetworkServiceSid;

/// @brief Field BuiltinDomainSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinDomainSid;

/// @brief Field BuiltinAdministratorsSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinAdministratorsSid;

/// @brief Field BuiltinUsersSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinUsersSid;

/// @brief Field BuiltinGuestsSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinGuestsSid;

/// @brief Field BuiltinPowerUsersSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinPowerUsersSid;

/// @brief Field BuiltinAccountOperatorsSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinAccountOperatorsSid;

/// @brief Field BuiltinSystemOperatorsSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinSystemOperatorsSid;

/// @brief Field BuiltinPrintOperatorsSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinPrintOperatorsSid;

/// @brief Field BuiltinBackupOperatorsSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinBackupOperatorsSid;

/// @brief Field BuiltinReplicatorSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinReplicatorSid;

/// @brief Field BuiltinPreWindows2000CompatibleAccessSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinPreWindows2000CompatibleAccessSid;

/// @brief Field BuiltinRemoteDesktopUsersSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinRemoteDesktopUsersSid;

/// @brief Field BuiltinNetworkConfigurationOperatorsSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinNetworkConfigurationOperatorsSid;

/// @brief Field AccountAdministratorSid offset 0
static System::Security::Principal::WellKnownSidType const AccountAdministratorSid;

/// @brief Field AccountGuestSid offset 0
static System::Security::Principal::WellKnownSidType const AccountGuestSid;

/// @brief Field AccountKrbtgtSid offset 0
static System::Security::Principal::WellKnownSidType const AccountKrbtgtSid;

/// @brief Field AccountDomainAdminsSid offset 0
static System::Security::Principal::WellKnownSidType const AccountDomainAdminsSid;

/// @brief Field AccountDomainUsersSid offset 0
static System::Security::Principal::WellKnownSidType const AccountDomainUsersSid;

/// @brief Field AccountDomainGuestsSid offset 0
static System::Security::Principal::WellKnownSidType const AccountDomainGuestsSid;

/// @brief Field AccountComputersSid offset 0
static System::Security::Principal::WellKnownSidType const AccountComputersSid;

/// @brief Field AccountControllersSid offset 0
static System::Security::Principal::WellKnownSidType const AccountControllersSid;

/// @brief Field AccountCertAdminsSid offset 0
static System::Security::Principal::WellKnownSidType const AccountCertAdminsSid;

/// @brief Field AccountSchemaAdminsSid offset 0
static System::Security::Principal::WellKnownSidType const AccountSchemaAdminsSid;

/// @brief Field AccountEnterpriseAdminsSid offset 0
static System::Security::Principal::WellKnownSidType const AccountEnterpriseAdminsSid;

/// @brief Field AccountPolicyAdminsSid offset 0
static System::Security::Principal::WellKnownSidType const AccountPolicyAdminsSid;

/// @brief Field AccountRasAndIasServersSid offset 0
static System::Security::Principal::WellKnownSidType const AccountRasAndIasServersSid;

/// @brief Field NtlmAuthenticationSid offset 0
static System::Security::Principal::WellKnownSidType const NtlmAuthenticationSid;

/// @brief Field DigestAuthenticationSid offset 0
static System::Security::Principal::WellKnownSidType const DigestAuthenticationSid;

/// @brief Field SChannelAuthenticationSid offset 0
static System::Security::Principal::WellKnownSidType const SChannelAuthenticationSid;

/// @brief Field ThisOrganizationSid offset 0
static System::Security::Principal::WellKnownSidType const ThisOrganizationSid;

/// @brief Field OtherOrganizationSid offset 0
static System::Security::Principal::WellKnownSidType const OtherOrganizationSid;

/// @brief Field BuiltinIncomingForestTrustBuildersSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinIncomingForestTrustBuildersSid;

/// @brief Field BuiltinPerformanceMonitoringUsersSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinPerformanceMonitoringUsersSid;

/// @brief Field BuiltinPerformanceLoggingUsersSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinPerformanceLoggingUsersSid;

/// @brief Field BuiltinAuthorizationAccessSid offset 0
static System::Security::Principal::WellKnownSidType const BuiltinAuthorizationAccessSid;

/// @brief Field WinBuiltinTerminalServerLicenseServersSid offset 0
static System::Security::Principal::WellKnownSidType const WinBuiltinTerminalServerLicenseServersSid;

/// @brief Field MaxDefined offset 0
static System::Security::Principal::WellKnownSidType const MaxDefined;

/// @brief Field WinBuiltinDCOMUsersSid offset 0
static System::Security::Principal::WellKnownSidType const WinBuiltinDCOMUsersSid;

/// @brief Field WinBuiltinIUsersSid offset 0
static System::Security::Principal::WellKnownSidType const WinBuiltinIUsersSid;

/// @brief Field WinIUserSid offset 0
static System::Security::Principal::WellKnownSidType const WinIUserSid;

/// @brief Field WinBuiltinCryptoOperatorsSid offset 0
static System::Security::Principal::WellKnownSidType const WinBuiltinCryptoOperatorsSid;

/// @brief Field WinUntrustedLabelSid offset 0
static System::Security::Principal::WellKnownSidType const WinUntrustedLabelSid;

/// @brief Field WinLowLabelSid offset 0
static System::Security::Principal::WellKnownSidType const WinLowLabelSid;

/// @brief Field WinMediumLabelSid offset 0
static System::Security::Principal::WellKnownSidType const WinMediumLabelSid;

/// @brief Field WinHighLabelSid offset 0
static System::Security::Principal::WellKnownSidType const WinHighLabelSid;

/// @brief Field WinSystemLabelSid offset 0
static System::Security::Principal::WellKnownSidType const WinSystemLabelSid;

/// @brief Field WinWriteRestrictedCodeSid offset 0
static System::Security::Principal::WellKnownSidType const WinWriteRestrictedCodeSid;

/// @brief Field WinCreatorOwnerRightsSid offset 0
static System::Security::Principal::WellKnownSidType const WinCreatorOwnerRightsSid;

/// @brief Field WinCacheablePrincipalsGroupSid offset 0
static System::Security::Principal::WellKnownSidType const WinCacheablePrincipalsGroupSid;

/// @brief Field WinNonCacheablePrincipalsGroupSid offset 0
static System::Security::Principal::WellKnownSidType const WinNonCacheablePrincipalsGroupSid;

/// @brief Field WinEnterpriseReadonlyControllersSid offset 0
static System::Security::Principal::WellKnownSidType const WinEnterpriseReadonlyControllersSid;

/// @brief Field WinAccountReadonlyControllersSid offset 0
static System::Security::Principal::WellKnownSidType const WinAccountReadonlyControllersSid;

/// @brief Field WinBuiltinEventLogReadersGroup offset 0
static System::Security::Principal::WellKnownSidType const WinBuiltinEventLogReadersGroup;

/// @brief Field WinNewEnterpriseReadonlyControllersSid offset 0
static System::Security::Principal::WellKnownSidType const WinNewEnterpriseReadonlyControllersSid;

/// @brief Field WinBuiltinCertSvcDComAccessGroup offset 0
static System::Security::Principal::WellKnownSidType const WinBuiltinCertSvcDComAccessGroup;

/// @brief Field WinMediumPlusLabelSid offset 0
static System::Security::Principal::WellKnownSidType const WinMediumPlusLabelSid;

/// @brief Field WinLocalLogonSid offset 0
static System::Security::Principal::WellKnownSidType const WinLocalLogonSid;

/// @brief Field WinConsoleLogonSid offset 0
static System::Security::Principal::WellKnownSidType const WinConsoleLogonSid;

/// @brief Field WinThisOrganizationCertificateSid offset 0
static System::Security::Principal::WellKnownSidType const WinThisOrganizationCertificateSid;

/// @brief Field WinApplicationPackageAuthoritySid offset 0
static System::Security::Principal::WellKnownSidType const WinApplicationPackageAuthoritySid;

/// @brief Field WinBuiltinAnyPackageSid offset 0
static System::Security::Principal::WellKnownSidType const WinBuiltinAnyPackageSid;

/// @brief Field WinCapabilityInternetClientSid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityInternetClientSid;

/// @brief Field WinCapabilityInternetClientServerSid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityInternetClientServerSid;

/// @brief Field WinCapabilityPrivateNetworkClientServerSid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityPrivateNetworkClientServerSid;

/// @brief Field WinCapabilityPicturesLibrarySid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityPicturesLibrarySid;

/// @brief Field WinCapabilityVideosLibrarySid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityVideosLibrarySid;

/// @brief Field WinCapabilityMusicLibrarySid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityMusicLibrarySid;

/// @brief Field WinCapabilityDocumentsLibrarySid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityDocumentsLibrarySid;

/// @brief Field WinCapabilitySharedUserCertificatesSid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilitySharedUserCertificatesSid;

/// @brief Field WinCapabilityEnterpriseAuthenticationSid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityEnterpriseAuthenticationSid;

/// @brief Field WinCapabilityRemovableStorageSid offset 0
static System::Security::Principal::WellKnownSidType const WinCapabilityRemovableStorageSid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Principal
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WellKnownSidType, "System.Security.Principal", "WellKnownSidType");
