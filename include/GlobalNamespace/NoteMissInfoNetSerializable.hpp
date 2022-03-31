// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteMissInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteMissInfoNetSerializable*, "", "NoteMissInfoNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NoteMissInfoNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class NoteMissInfoNetSerializable : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable*/ {
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
    // private ColorType <colorType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorType) == 0x4);
    // private System.Single <noteTime>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float noteTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <noteLineIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int noteLineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private NoteLineLayer <noteLineLayer>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: private ColorType <colorType>k__BackingField
    ::GlobalNamespace::ColorType& dyn_$colorType$k__BackingField();
    // Get instance field reference: private System.Single <noteTime>k__BackingField
    float& dyn_$noteTime$k__BackingField();
    // Get instance field reference: private System.Int32 <noteLineIndex>k__BackingField
    int& dyn_$noteLineIndex$k__BackingField();
    // Get instance field reference: private NoteLineLayer <noteLineLayer>k__BackingField
    ::GlobalNamespace::NoteLineLayer& dyn_$noteLineLayer$k__BackingField();
    // public ColorType get_colorType()
    // Offset: 0x29C0FA8
    ::GlobalNamespace::ColorType get_colorType();
    // private System.Void set_colorType(ColorType value)
    // Offset: 0x29C0FB0
    void set_colorType(::GlobalNamespace::ColorType value);
    // public System.Single get_noteTime()
    // Offset: 0x29C0FB8
    float get_noteTime();
    // private System.Void set_noteTime(System.Single value)
    // Offset: 0x29C0FC0
    void set_noteTime(float value);
    // public System.Int32 get_noteLineIndex()
    // Offset: 0x29C0FC8
    int get_noteLineIndex();
    // private System.Void set_noteLineIndex(System.Int32 value)
    // Offset: 0x29C0FD0
    void set_noteLineIndex(int value);
    // public NoteLineLayer get_noteLineLayer()
    // Offset: 0x29C0FD8
    ::GlobalNamespace::NoteLineLayer get_noteLineLayer();
    // private System.Void set_noteLineLayer(NoteLineLayer value)
    // Offset: 0x29C0FE0
    void set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);
    // public System.Void .ctor(NoteData noteData)
    // Offset: 0x29C1110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteMissInfoNetSerializable* New_ctor(::GlobalNamespace::NoteData* noteData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteMissInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteMissInfoNetSerializable*, creationType>(noteData)));
    }
    // public System.Void .ctor(ColorType colorType, NoteLineLayer lineLayer, System.Int32 noteLineIndex, System.Single noteTime)
    // Offset: 0x29C1158
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteMissInfoNetSerializable* New_ctor(::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer lineLayer, int noteLineIndex, float noteTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteMissInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteMissInfoNetSerializable*, creationType>(colorType, lineLayer, noteLineIndex, noteTime)));
    }
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x29C0FE8
    void LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x29C1068
    void LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void .ctor()
    // Offset: 0x29C1108
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteMissInfoNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteMissInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteMissInfoNetSerializable*, creationType>()));
    }
  }; // NoteMissInfoNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(NoteMissInfoNetSerializable), 28 + sizeof(::GlobalNamespace::NoteLineLayer)> __GlobalNamespace_NoteMissInfoNetSerializableSizeCheck;
  static_assert(sizeof(NoteMissInfoNetSerializable) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::get_colorType
// Il2CppName: get_colorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (GlobalNamespace::NoteMissInfoNetSerializable::*)()>(&GlobalNamespace::NoteMissInfoNetSerializable::get_colorType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "get_colorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::set_colorType
// Il2CppName: set_colorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMissInfoNetSerializable::*)(::GlobalNamespace::ColorType)>(&GlobalNamespace::NoteMissInfoNetSerializable::set_colorType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "set_colorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::get_noteTime
// Il2CppName: get_noteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteMissInfoNetSerializable::*)()>(&GlobalNamespace::NoteMissInfoNetSerializable::get_noteTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "get_noteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::set_noteTime
// Il2CppName: set_noteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMissInfoNetSerializable::*)(float)>(&GlobalNamespace::NoteMissInfoNetSerializable::set_noteTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "set_noteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::get_noteLineIndex
// Il2CppName: get_noteLineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NoteMissInfoNetSerializable::*)()>(&GlobalNamespace::NoteMissInfoNetSerializable::get_noteLineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "get_noteLineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::set_noteLineIndex
// Il2CppName: set_noteLineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMissInfoNetSerializable::*)(int)>(&GlobalNamespace::NoteMissInfoNetSerializable::set_noteLineIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "set_noteLineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::get_noteLineLayer
// Il2CppName: get_noteLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (GlobalNamespace::NoteMissInfoNetSerializable::*)()>(&GlobalNamespace::NoteMissInfoNetSerializable::get_noteLineLayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "get_noteLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::set_noteLineLayer
// Il2CppName: set_noteLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMissInfoNetSerializable::*)(::GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::NoteMissInfoNetSerializable::set_noteLineLayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "set_noteLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMissInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::NoteMissInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "LiteNetLib.Utils.INetSerializable.Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMissInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::NoteMissInfoNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMissInfoNetSerializable*), "LiteNetLib.Utils.INetSerializable.Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMissInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
