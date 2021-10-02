// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetEase.Docker.LogoutData
  // [TokenAttribute] Offset: FFFFFFFF
  struct LogoutData/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0xEEDD98
    // private System.Int32 <LogoutCode>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int LogoutCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LogoutData
    constexpr LogoutData(int LogoutCode_ = {}) noexcept : LogoutCode{LogoutCode_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return LogoutCode;
    }
    // Get instance field reference: private System.Int32 <LogoutCode>k__BackingField
    int& dyn_$LogoutCode$k__BackingField();
    // public System.Void set_LogoutCode(System.Int32 value)
    // Offset: 0x261FFF0
    void set_LogoutCode(int value);
  }; // NetEase.Docker.LogoutData
  #pragma pack(pop)
  static check_size<sizeof(LogoutData), 0 + sizeof(int)> __NetEase_Docker_LogoutDataSizeCheck;
  static_assert(sizeof(LogoutData) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::LogoutData, "NetEase.Docker", "LogoutData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NetEase::Docker::LogoutData::set_LogoutCode
// Il2CppName: set_LogoutCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::LogoutData::*)(int)>(&NetEase::Docker::LogoutData::set_LogoutCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::LogoutData), "set_LogoutCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
