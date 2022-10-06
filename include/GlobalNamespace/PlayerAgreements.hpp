// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerAgreements
  class PlayerAgreements;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerAgreements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAgreements*, "", "PlayerAgreements");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerAgreements
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerAgreements : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 eulaVersion
    // Size: 0x4
    // Offset: 0x10
    int eulaVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 privacyPolicyVersion
    // Size: 0x4
    // Offset: 0x14
    int privacyPolicyVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 healthAndSafetyVersion
    // Size: 0x4
    // Offset: 0x18
    int healthAndSafetyVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static public System.Int32 kFirstEulaVersion
    static constexpr const int kFirstEulaVersion = 1;
    // Get static field: static public System.Int32 kFirstEulaVersion
    static int _get_kFirstEulaVersion();
    // Set static field: static public System.Int32 kFirstEulaVersion
    static void _set_kFirstEulaVersion(int value);
    // static field const value: static public System.Int32 kFirstPrivacyPolicyVersion
    static constexpr const int kFirstPrivacyPolicyVersion = 1;
    // Get static field: static public System.Int32 kFirstPrivacyPolicyVersion
    static int _get_kFirstPrivacyPolicyVersion();
    // Set static field: static public System.Int32 kFirstPrivacyPolicyVersion
    static void _set_kFirstPrivacyPolicyVersion(int value);
    // static field const value: static private System.Int32 kCurrentEulaVersion
    static constexpr const int kCurrentEulaVersion = 3;
    // Get static field: static private System.Int32 kCurrentEulaVersion
    static int _get_kCurrentEulaVersion();
    // Set static field: static private System.Int32 kCurrentEulaVersion
    static void _set_kCurrentEulaVersion(int value);
    // static field const value: static private System.Int32 kCurrentPrivacyPolicyVersion
    static constexpr const int kCurrentPrivacyPolicyVersion = 4;
    // Get static field: static private System.Int32 kCurrentPrivacyPolicyVersion
    static int _get_kCurrentPrivacyPolicyVersion();
    // Set static field: static private System.Int32 kCurrentPrivacyPolicyVersion
    static void _set_kCurrentPrivacyPolicyVersion(int value);
    // static field const value: static private System.Int32 kCurrentHealthAndSafetyVersion
    static constexpr const int kCurrentHealthAndSafetyVersion = 1;
    // Get static field: static private System.Int32 kCurrentHealthAndSafetyVersion
    static int _get_kCurrentHealthAndSafetyVersion();
    // Set static field: static private System.Int32 kCurrentHealthAndSafetyVersion
    static void _set_kCurrentHealthAndSafetyVersion(int value);
    // Get instance field reference: public System.Int32 eulaVersion
    [[deprecated("Use field access instead!")]] int& dyn_eulaVersion();
    // Get instance field reference: public System.Int32 privacyPolicyVersion
    [[deprecated("Use field access instead!")]] int& dyn_privacyPolicyVersion();
    // Get instance field reference: public System.Int32 healthAndSafetyVersion
    [[deprecated("Use field access instead!")]] int& dyn_healthAndSafetyVersion();
    // public System.Void .ctor()
    // Offset: 0x1368A98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAgreements* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerAgreements::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAgreements*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 eulaVersion, System.Int32 privacyPolicyVersion, System.Int32 healthAndSafetyVersion)
    // Offset: 0x1368AC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAgreements* New_ctor(int eulaVersion, int privacyPolicyVersion, int healthAndSafetyVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerAgreements::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAgreements*, creationType>(eulaVersion, privacyPolicyVersion, healthAndSafetyVersion)));
    }
    // public System.Void AgreeToEula()
    // Offset: 0x1368B04
    void AgreeToEula();
    // public System.Void AgreeToPrivacyPolicy()
    // Offset: 0x1368B10
    void AgreeToPrivacyPolicy();
    // public System.Void AgreeToHealthAndSafety()
    // Offset: 0x1368B1C
    void AgreeToHealthAndSafety();
    // public System.Boolean AgreedToPreviousPrivacyPolicy()
    // Offset: 0x1368B28
    bool AgreedToPreviousPrivacyPolicy();
    // public System.Boolean AgreedToAnyPreviousEula()
    // Offset: 0x1368B38
    bool AgreedToAnyPreviousEula();
    // public System.Boolean AgreedToAnyPreviousPrivacyPolicy()
    // Offset: 0x1368B54
    bool AgreedToAnyPreviousPrivacyPolicy();
    // public System.Boolean AgreedToAnyPreviousHealthAndSafety()
    // Offset: 0x1368B70
    bool AgreedToAnyPreviousHealthAndSafety();
    // public System.Boolean AgreedToEula()
    // Offset: 0x1368B7C
    bool AgreedToEula();
    // public System.Boolean AgreedToPrivacyPolicy()
    // Offset: 0x1368B8C
    bool AgreedToPrivacyPolicy();
    // public System.Boolean AgreedToHealthAndSafety()
    // Offset: 0x1368B9C
    bool AgreedToHealthAndSafety();
  }; // PlayerAgreements
  #pragma pack(pop)
  static check_size<sizeof(PlayerAgreements), 24 + sizeof(int)> __GlobalNamespace_PlayerAgreementsSizeCheck;
  static_assert(sizeof(PlayerAgreements) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreeToEula
// Il2CppName: AgreeToEula
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreeToEula)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreeToEula", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreeToPrivacyPolicy
// Il2CppName: AgreeToPrivacyPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreeToPrivacyPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreeToPrivacyPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreeToHealthAndSafety
// Il2CppName: AgreeToHealthAndSafety
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreeToHealthAndSafety)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreeToHealthAndSafety", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToPreviousPrivacyPolicy
// Il2CppName: AgreedToPreviousPrivacyPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToPreviousPrivacyPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToPreviousPrivacyPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousEula
// Il2CppName: AgreedToAnyPreviousEula
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousEula)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToAnyPreviousEula", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousPrivacyPolicy
// Il2CppName: AgreedToAnyPreviousPrivacyPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousPrivacyPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToAnyPreviousPrivacyPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousHealthAndSafety
// Il2CppName: AgreedToAnyPreviousHealthAndSafety
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousHealthAndSafety)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToAnyPreviousHealthAndSafety", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToEula
// Il2CppName: AgreedToEula
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToEula)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToEula", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToPrivacyPolicy
// Il2CppName: AgreedToPrivacyPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToPrivacyPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToPrivacyPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAgreements::AgreedToHealthAndSafety
// Il2CppName: AgreedToHealthAndSafety
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerAgreements::*)()>(&GlobalNamespace::PlayerAgreements::AgreedToHealthAndSafety)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAgreements*), "AgreedToHealthAndSafety", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
