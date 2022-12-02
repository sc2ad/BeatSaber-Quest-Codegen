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
  // Forward declaring type: NoAnalyticsModel
  class NoAnalyticsModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoAnalyticsModel*, "", "NoAnalyticsModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NoAnalyticsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class NoAnalyticsModel : public ::Il2CppObject/*, public ::GlobalNamespace::IAnalyticsModel*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IAnalyticsModel
    operator ::GlobalNamespace::IAnalyticsModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAnalyticsModel*>(this);
    }
    // Creating interface conversion operator: i_IAnalyticsModel
    inline ::GlobalNamespace::IAnalyticsModel* i_IAnalyticsModel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IAnalyticsModel*>(this);
    }
    // public System.Boolean get_supportsOpenDataPrivacyPage()
    // Offset: 0x14FD434
    bool get_supportsOpenDataPrivacyPage();
    // public System.Void .ctor()
    // Offset: 0x14FD454
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoAnalyticsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoAnalyticsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoAnalyticsModel*, creationType>()));
    }
    // public System.Void OpenDataPrivacyPage()
    // Offset: 0x14FD43C
    void OpenDataPrivacyPage();
    // public System.Void LogEditAvatarEvent(System.String eventType, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    // Offset: 0x14FD440
    void LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);
    // public System.Void LogEvent(System.String eventType, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    // Offset: 0x14FD444
    void LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);
    // public System.Void LogClick(System.String clickType, System.Collections.Generic.Dictionary`2<System.String,System.String> clickData)
    // Offset: 0x14FD448
    void LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);
    // public System.Void LogImpression(System.String impressionType, System.Collections.Generic.Dictionary`2<System.String,System.String> impressionData)
    // Offset: 0x14FD44C
    void LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData);
    // public System.Void LogExposure(System.String exposureType, System.Collections.Generic.Dictionary`2<System.String,System.String> exposureData)
    // Offset: 0x14FD450
    void LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData);
  }; // NoAnalyticsModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::get_supportsOpenDataPrivacyPage
// Il2CppName: get_supportsOpenDataPrivacyPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NoAnalyticsModel::*)()>(&GlobalNamespace::NoAnalyticsModel::get_supportsOpenDataPrivacyPage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "get_supportsOpenDataPrivacyPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::OpenDataPrivacyPage
// Il2CppName: OpenDataPrivacyPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)()>(&GlobalNamespace::NoAnalyticsModel::OpenDataPrivacyPage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "OpenDataPrivacyPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogEditAvatarEvent
// Il2CppName: LogEditAvatarEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::NoAnalyticsModel::LogEditAvatarEvent)> {
  static const MethodInfo* get() {
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogEditAvatarEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventType, eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogEvent
// Il2CppName: LogEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::NoAnalyticsModel::LogEvent)> {
  static const MethodInfo* get() {
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventType, eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogClick
// Il2CppName: LogClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::NoAnalyticsModel::LogClick)> {
  static const MethodInfo* get() {
    static auto* clickType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* clickData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickType, clickData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogImpression
// Il2CppName: LogImpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::NoAnalyticsModel::LogImpression)> {
  static const MethodInfo* get() {
    static auto* impressionType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* impressionData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogImpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impressionType, impressionData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoAnalyticsModel::LogExposure
// Il2CppName: LogExposure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoAnalyticsModel::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::NoAnalyticsModel::LogExposure)> {
  static const MethodInfo* get() {
    static auto* exposureType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* exposureData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoAnalyticsModel*), "LogExposure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exposureType, exposureData});
  }
};
