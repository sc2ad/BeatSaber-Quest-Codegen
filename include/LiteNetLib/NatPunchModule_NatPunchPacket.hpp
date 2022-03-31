// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.NatPunchModule
#include "LiteNetLib/NatPunchModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::NatPunchModule::NatPunchPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NatPunchModule::NatPunchPacket*, "LiteNetLib", "NatPunchModule/NatPunchPacket");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NatPunchModule/LiteNetLib.NatPunchPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class NatPunchModule::NatPunchPacket : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String <Token>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Token;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <IsExternal>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsExternal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <Token>k__BackingField
    ::StringW& dyn_$Token$k__BackingField();
    // Get instance field reference: private System.Boolean <IsExternal>k__BackingField
    bool& dyn_$IsExternal$k__BackingField();
    // public System.String get_Token()
    // Offset: 0x21645A4
    ::StringW get_Token();
    // public System.Void set_Token(System.String value)
    // Offset: 0x21645AC
    void set_Token(::StringW value);
    // public System.Boolean get_IsExternal()
    // Offset: 0x21645B4
    bool get_IsExternal();
    // public System.Void set_IsExternal(System.Boolean value)
    // Offset: 0x21645BC
    void set_IsExternal(bool value);
    // public System.Void .ctor()
    // Offset: 0x2164070
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NatPunchModule::NatPunchPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::NatPunchModule::NatPunchPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NatPunchModule::NatPunchPacket*, creationType>()));
    }
  }; // LiteNetLib.NatPunchModule/LiteNetLib.NatPunchPacket
  #pragma pack(pop)
  static check_size<sizeof(NatPunchModule::NatPunchPacket), 24 + sizeof(bool)> __LiteNetLib_NatPunchModule_NatPunchPacketSizeCheck;
  static_assert(sizeof(NatPunchModule::NatPunchPacket) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatPunchPacket::get_Token
// Il2CppName: get_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LiteNetLib::NatPunchModule::NatPunchPacket::*)()>(&LiteNetLib::NatPunchModule::NatPunchPacket::get_Token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatPunchPacket*), "get_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatPunchPacket::set_Token
// Il2CppName: set_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::NatPunchPacket::*)(::StringW)>(&LiteNetLib::NatPunchModule::NatPunchPacket::set_Token)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatPunchPacket*), "set_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatPunchPacket::get_IsExternal
// Il2CppName: get_IsExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::NatPunchModule::NatPunchPacket::*)()>(&LiteNetLib::NatPunchModule::NatPunchPacket::get_IsExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatPunchPacket*), "get_IsExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatPunchPacket::set_IsExternal
// Il2CppName: set_IsExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::NatPunchPacket::*)(bool)>(&LiteNetLib::NatPunchModule::NatPunchPacket::set_IsExternal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatPunchPacket*), "set_IsExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatPunchPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
