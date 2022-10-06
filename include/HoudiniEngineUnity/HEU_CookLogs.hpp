// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_CookLogs
  class HEU_CookLogs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookLogs);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookLogs*, "HoudiniEngineUnity", "HEU_CookLogs");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_CookLogs
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_CookLogs : public ::Il2CppObject {
    public:
    public:
    // private System.Text.StringBuilder _cookLogs
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::StringBuilder* cookLogs;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Int32 _currentCookLogCount
    // Size: 0x4
    // Offset: 0x18
    int currentCookLogCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentCookLogCount and: lastLogStr
    char __padding1[0x4] = {};
    // private System.String _lastLogStr
    // Size: 0x8
    // Offset: 0x20
    ::StringW lastLogStr;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _uniqueStrOnly
    // Size: 0x1
    // Offset: 0x28
    bool uniqueStrOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private HoudiniEngineUnity.HEU_CookLogs _instance
    static ::HoudiniEngineUnity::HEU_CookLogs* _get__instance();
    // Set static field: static private HoudiniEngineUnity.HEU_CookLogs _instance
    static void _set__instance(::HoudiniEngineUnity::HEU_CookLogs* value);
    // static field const value: static private System.Int32 MAX_COOK_LOG_COUNT
    static constexpr const int MAX_COOK_LOG_COUNT = 9001;
    // Get static field: static private System.Int32 MAX_COOK_LOG_COUNT
    static int _get_MAX_COOK_LOG_COUNT();
    // Set static field: static private System.Int32 MAX_COOK_LOG_COUNT
    static void _set_MAX_COOK_LOG_COUNT(int value);
    // static field const value: static public System.Int64 MaxLogSize
    static constexpr const int64_t MaxLogSize = 50000000;
    // Get static field: static public System.Int64 MaxLogSize
    static int64_t _get_MaxLogSize();
    // Set static field: static public System.Int64 MaxLogSize
    static void _set_MaxLogSize(int64_t value);
    // Get instance field reference: private System.Text.StringBuilder _cookLogs
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn__cookLogs();
    // Get instance field reference: private System.Int32 _currentCookLogCount
    [[deprecated("Use field access instead!")]] int& dyn__currentCookLogCount();
    // Get instance field reference: private System.String _lastLogStr
    [[deprecated("Use field access instead!")]] ::StringW& dyn__lastLogStr();
    // Get instance field reference: private System.Boolean _uniqueStrOnly
    [[deprecated("Use field access instead!")]] bool& dyn__uniqueStrOnly();
    // static public HoudiniEngineUnity.HEU_CookLogs get_Instance()
    // Offset: 0x16FE188
    static ::HoudiniEngineUnity::HEU_CookLogs* get_Instance();
    // public System.Void .ctor()
    // Offset: 0x16FE204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_CookLogs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_CookLogs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_CookLogs*, creationType>()));
    }
    // public System.String GetCookLogString()
    // Offset: 0x16FE284
    ::StringW GetCookLogString();
    // public System.Void AppendCookLog(System.String logStr)
    // Offset: 0x16FE2A4
    void AppendCookLog(::StringW logStr);
    // public System.Void ClearCookLog()
    // Offset: 0x16FE568
    void ClearCookLog();
    // public System.String GetCookLogFilePath()
    // Offset: 0x16FE5CC
    ::StringW GetCookLogFilePath();
    // public System.Void DeleteCookingFile()
    // Offset: 0x16FE698
    void DeleteCookingFile();
    // public System.Void WriteToLogFile(System.String logStr, System.Boolean checkLastLogStr)
    // Offset: 0x16FE3A8
    void WriteToLogFile(::StringW logStr, bool checkLastLogStr);
    // public System.Int64 GetFileSizeOfLogFile()
    // Offset: 0x16FE728
    int64_t GetFileSizeOfLogFile();
  }; // HoudiniEngineUnity.HEU_CookLogs
  #pragma pack(pop)
  static check_size<sizeof(HEU_CookLogs), 40 + sizeof(bool)> __HoudiniEngineUnity_HEU_CookLogsSizeCheck;
  static_assert(sizeof(HEU_CookLogs) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_CookLogs* (*)()>(&HoudiniEngineUnity::HEU_CookLogs::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_CookLogs*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::GetCookLogString
// Il2CppName: GetCookLogString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_CookLogs::*)()>(&HoudiniEngineUnity::HEU_CookLogs::GetCookLogString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_CookLogs*), "GetCookLogString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::AppendCookLog
// Il2CppName: AppendCookLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_CookLogs::*)(::StringW)>(&HoudiniEngineUnity::HEU_CookLogs::AppendCookLog)> {
  static const MethodInfo* get() {
    static auto* logStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_CookLogs*), "AppendCookLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logStr});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::ClearCookLog
// Il2CppName: ClearCookLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_CookLogs::*)()>(&HoudiniEngineUnity::HEU_CookLogs::ClearCookLog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_CookLogs*), "ClearCookLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::GetCookLogFilePath
// Il2CppName: GetCookLogFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_CookLogs::*)()>(&HoudiniEngineUnity::HEU_CookLogs::GetCookLogFilePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_CookLogs*), "GetCookLogFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::DeleteCookingFile
// Il2CppName: DeleteCookingFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_CookLogs::*)()>(&HoudiniEngineUnity::HEU_CookLogs::DeleteCookingFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_CookLogs*), "DeleteCookingFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::WriteToLogFile
// Il2CppName: WriteToLogFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_CookLogs::*)(::StringW, bool)>(&HoudiniEngineUnity::HEU_CookLogs::WriteToLogFile)> {
  static const MethodInfo* get() {
    static auto* logStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkLastLogStr = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_CookLogs*), "WriteToLogFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logStr, checkLastLogStr});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_CookLogs::GetFileSizeOfLogFile
// Il2CppName: GetFileSizeOfLogFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (HoudiniEngineUnity::HEU_CookLogs::*)()>(&HoudiniEngineUnity::HEU_CookLogs::GetFileSizeOfLogFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_CookLogs*), "GetFileSizeOfLogFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
