// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IAnalyticsModel
#include "GlobalNamespace/IAnalyticsModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusAnalyticsModel
  class OculusAnalyticsModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusAnalyticsModel*, "", "OculusAnalyticsModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OculusAnalyticsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusAnalyticsModel : public ::Il2CppObject/*, public ::GlobalNamespace::IAnalyticsModel*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IAnalyticsModel
    operator ::GlobalNamespace::IAnalyticsModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAnalyticsModel*>(this);
    }
    // public System.Boolean get_supportsOpenDataPrivacyPage()
    // Offset: 0x2B35AD4
    bool get_supportsOpenDataPrivacyPage();
    // public System.Void OpenDataPrivacyPage()
    // Offset: 0x2B35ADC
    void OpenDataPrivacyPage();
    // public System.Void LogEvent(System.String eventType, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    // Offset: 0x2B35AE0
    void LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);
    // public System.Void LogEditAvatarEvent(System.String eventType, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    // Offset: 0x2B35BB0
    void LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);
    // public System.Void LogClick(System.String clickType, System.Collections.Generic.Dictionary`2<System.String,System.String> clickData)
    // Offset: 0x2B35C80
    void LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);
    // public System.Void LogImpression(System.String impressionType, System.Collections.Generic.Dictionary`2<System.String,System.String> impressionData)
    // Offset: 0x2B35D08
    void LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData);
    // public System.Void LogExposure(System.String exposureType, System.Collections.Generic.Dictionary`2<System.String,System.String> exposureData)
    // Offset: 0x2B35D90
    void LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData);
    // public System.Void .ctor()
    // Offset: 0x2B35E18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusAnalyticsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusAnalyticsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusAnalyticsModel*, creationType>()));
    }
  }; // OculusAnalyticsModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusAnalyticsModel::get_supportsOpenDataPrivacyPage
// Il2CppName: get_supportsOpenDataPrivacyPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusAnalyticsModel::*)()>(&GlobalNamespace::OculusAnalyticsModel::get_supportsOpenDataPrivacyPage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusAnalyticsModel*), "get_supportsOpenDataPrivacyPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusAnalyticsModel::OpenDataPrivacyPage
// Il2CppName: OpenDataPrivacyPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusAnalyticsModel::*)()>(&GlobalNamespace::OculusAnalyticsModel::OpenDataPrivacyPage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusAnalyticsModel*), "OpenDataPrivacyPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusAnalyticsModel::LogEvent
// Il2CppName: LogEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::OculusAnalyticsModel::LogEvent)> {
  static const MethodInfo* get() {
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusAnalyticsModel*), "LogEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventType, eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusAnalyticsModel::LogEditAvatarEvent
// Il2CppName: LogEditAvatarEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::OculusAnalyticsModel::LogEditAvatarEvent)> {
  static const MethodInfo* get() {
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusAnalyticsModel*), "LogEditAvatarEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventType, eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusAnalyticsModel::LogClick
// Il2CppName: LogClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::OculusAnalyticsModel::LogClick)> {
  static const MethodInfo* get() {
    static auto* clickType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* clickData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusAnalyticsModel*), "LogClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickType, clickData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusAnalyticsModel::LogImpression
// Il2CppName: LogImpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::OculusAnalyticsModel::LogImpression)> {
  static const MethodInfo* get() {
    static auto* impressionType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* impressionData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusAnalyticsModel*), "LogImpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impressionType, impressionData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusAnalyticsModel::LogExposure
// Il2CppName: LogExposure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::OculusAnalyticsModel::LogExposure)> {
  static const MethodInfo* get() {
    static auto* exposureType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* exposureData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusAnalyticsModel*), "LogExposure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exposureType, exposureData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusAnalyticsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
