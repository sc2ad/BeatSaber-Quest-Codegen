// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
// Including type: ILightWithId
#include "GlobalNamespace/ILightWithId.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightWithIds::LightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIds::LightWithId*, "", "LightWithIds/LightWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LightWithIds/LightWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class LightWithIds::LightWithId : public ::Il2CppObject/*, public ::GlobalNamespace::ILightWithId*/ {
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
    // private System.Int32 _lightId
    // Size: 0x4
    // Offset: 0x10
    int lightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x14
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _isRegistered
    // Size: 0x1
    // Offset: 0x24
    bool isRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRegistered and: parentLightWithIds
    char __padding2[0x3] = {};
    // private LightWithIds _parentLightWithIds
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::LightWithIds* parentLightWithIds;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIds*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ILightWithId
    operator ::GlobalNamespace::ILightWithId() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ILightWithId*>(this);
    }
    // Get instance field reference: private System.Int32 _lightId
    int& dyn__lightId();
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Boolean _isRegistered
    bool& dyn__isRegistered();
    // Get instance field reference: private LightWithIds _parentLightWithIds
    ::GlobalNamespace::LightWithIds*& dyn__parentLightWithIds();
    // public System.Int32 get_lightId()
    // Offset: 0x2AD3B8C
    int get_lightId();
    // public UnityEngine.Color get_color()
    // Offset: 0x2AD3B94
    ::UnityEngine::Color get_color();
    // public System.Boolean get_isRegistered()
    // Offset: 0x2AD3BA0
    bool get_isRegistered();
    // protected System.Void .ctor(System.Int32 lightId)
    // Offset: 0x2AD3BC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightWithIds::LightWithId* New_ctor(int lightId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightWithIds::LightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightWithIds::LightWithId*, creationType>(lightId)));
    }
    // public System.Void __SetIsRegistered()
    // Offset: 0x2AD3BA8
    void __SetIsRegistered();
    // public System.Void __SetIsUnRegistered()
    // Offset: 0x2AD3BB4
    void __SetIsUnRegistered();
    // public System.Void __SetParentLightWithIds(LightWithIds parentLightWithIds)
    // Offset: 0x2AD3BF0
    void __SetParentLightWithIds(::GlobalNamespace::LightWithIds* parentLightWithIds);
    // public System.Void ColorWasSet(UnityEngine.Color newColor)
    // Offset: 0x2AD3BF8
    void ColorWasSet(::UnityEngine::Color newColor);
    // protected System.Void .ctor()
    // Offset: 0x2AD3BBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightWithIds::LightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightWithIds::LightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightWithIds::LightWithId*, creationType>()));
    }
  }; // LightWithIds/LightWithId
  #pragma pack(pop)
  static check_size<sizeof(LightWithIds::LightWithId), 40 + sizeof(::GlobalNamespace::LightWithIds*)> __GlobalNamespace_LightWithIds_LightWithIdSizeCheck;
  static_assert(sizeof(LightWithIds::LightWithId) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::get_lightId
// Il2CppName: get_lightId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightWithIds::LightWithId::*)()>(&GlobalNamespace::LightWithIds::LightWithId::get_lightId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightWithId*), "get_lightId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::LightWithIds::LightWithId::*)()>(&GlobalNamespace::LightWithIds::LightWithId::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightWithId*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::get_isRegistered
// Il2CppName: get_isRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightWithIds::LightWithId::*)()>(&GlobalNamespace::LightWithIds::LightWithId::get_isRegistered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightWithId*), "get_isRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::__SetIsRegistered
// Il2CppName: __SetIsRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::LightWithId::*)()>(&GlobalNamespace::LightWithIds::LightWithId::__SetIsRegistered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightWithId*), "__SetIsRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::__SetIsUnRegistered
// Il2CppName: __SetIsUnRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::LightWithId::*)()>(&GlobalNamespace::LightWithIds::LightWithId::__SetIsUnRegistered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightWithId*), "__SetIsUnRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::__SetParentLightWithIds
// Il2CppName: __SetParentLightWithIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::LightWithId::*)(::GlobalNamespace::LightWithIds*)>(&GlobalNamespace::LightWithIds::LightWithId::__SetParentLightWithIds)> {
  static const MethodInfo* get() {
    static auto* parentLightWithIds = &::il2cpp_utils::GetClassFromName("", "LightWithIds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightWithId*), "__SetParentLightWithIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentLightWithIds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::LightWithId::*)(::UnityEngine::Color)>(&GlobalNamespace::LightWithIds::LightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
