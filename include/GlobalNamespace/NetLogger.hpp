// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.INetLogger
#include "LiteNetLib/INetLogger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetLogger
  class NetLogger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetLogger*, "", "NetLogger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class NetLogger : public ::Il2CppObject/*, public ::LiteNetLib::INetLogger*/ {
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::INetLogger
    operator ::LiteNetLib::INetLogger() noexcept {
      return *reinterpret_cast<::LiteNetLib::INetLogger*>(this);
    }
    // Creating interface conversion operator: i_INetLogger
    inline ::LiteNetLib::INetLogger* i_INetLogger() noexcept {
      return reinterpret_cast<::LiteNetLib::INetLogger*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x173E9D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetLogger*, creationType>()));
    }
    // public System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0x173E828
    void WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::Il2CppObject*> args);
  }; // NetLogger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetLogger::WriteNet
// Il2CppName: WriteNet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetLogger::*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::Il2CppObject*>)>(&GlobalNamespace::NetLogger::WriteNet)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetLogger*), "WriteNet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, str, args});
  }
};
