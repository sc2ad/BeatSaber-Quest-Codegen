#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Security/Principal/zzzz__WellKnownSidType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Principal::WellKnownSidType::WellKnownSidType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Security::Principal::WellKnownSidType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Security::Principal::WellKnownSidType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::NullSid{0};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WorldSid{1};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::LocalSid{2};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::CreatorOwnerSid{3};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::CreatorGroupSid{4};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::CreatorOwnerServerSid{5};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::CreatorGroupServerSid{6};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::NTAuthoritySid{7};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::DialupSid{8};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::NetworkSid{9};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BatchSid{10};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::InteractiveSid{11};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::ServiceSid{12};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AnonymousSid{13};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::ProxySid{14};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::EnterpriseControllersSid{15};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::SelfSid{16};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AuthenticatedUserSid{17};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::RestrictedCodeSid{18};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::TerminalServerSid{19};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::RemoteLogonIdSid{20};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::LogonIdsSid{21};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::LocalSystemSid{22};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::LocalServiceSid{23};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::NetworkServiceSid{24};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinDomainSid{25};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinAdministratorsSid{26};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinUsersSid{27};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinGuestsSid{28};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinPowerUsersSid{29};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinAccountOperatorsSid{30};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinSystemOperatorsSid{31};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinPrintOperatorsSid{32};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinBackupOperatorsSid{33};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinReplicatorSid{34};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinPreWindows2000CompatibleAccessSid{35};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinRemoteDesktopUsersSid{36};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinNetworkConfigurationOperatorsSid{37};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountAdministratorSid{38};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountGuestSid{39};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountKrbtgtSid{40};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountDomainAdminsSid{41};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountDomainUsersSid{42};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountDomainGuestsSid{43};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountComputersSid{44};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountControllersSid{45};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountCertAdminsSid{46};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountSchemaAdminsSid{47};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountEnterpriseAdminsSid{48};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountPolicyAdminsSid{49};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::AccountRasAndIasServersSid{50};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::NtlmAuthenticationSid{51};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::DigestAuthenticationSid{52};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::SChannelAuthenticationSid{53};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::ThisOrganizationSid{54};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::OtherOrganizationSid{55};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinIncomingForestTrustBuildersSid{56};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinPerformanceMonitoringUsersSid{57};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinPerformanceLoggingUsersSid{58};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::BuiltinAuthorizationAccessSid{59};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinBuiltinTerminalServerLicenseServersSid{60};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::MaxDefined{60};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinBuiltinDCOMUsersSid{61};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinBuiltinIUsersSid{62};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinIUserSid{63};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinBuiltinCryptoOperatorsSid{64};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinUntrustedLabelSid{65};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinLowLabelSid{66};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinMediumLabelSid{67};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinHighLabelSid{68};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinSystemLabelSid{69};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinWriteRestrictedCodeSid{70};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCreatorOwnerRightsSid{71};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCacheablePrincipalsGroupSid{72};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinNonCacheablePrincipalsGroupSid{73};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinEnterpriseReadonlyControllersSid{74};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinAccountReadonlyControllersSid{75};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinBuiltinEventLogReadersGroup{76};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinNewEnterpriseReadonlyControllersSid{77};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinBuiltinCertSvcDComAccessGroup{78};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinMediumPlusLabelSid{79};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinLocalLogonSid{80};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinConsoleLogonSid{81};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinThisOrganizationCertificateSid{82};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinApplicationPackageAuthoritySid{83};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinBuiltinAnyPackageSid{84};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityInternetClientSid{85};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityInternetClientServerSid{86};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityPrivateNetworkClientServerSid{87};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityPicturesLibrarySid{88};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityVideosLibrarySid{89};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityMusicLibrarySid{90};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityDocumentsLibrarySid{91};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilitySharedUserCertificatesSid{92};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityEnterpriseAuthenticationSid{93};
constexpr ::System::Security::Principal::WellKnownSidType  ::System::Security::Principal::WellKnownSidType::WinCapabilityRemovableStorageSid{94};
} // end anonymous namespace
