// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarMeshPartSO
  class AvatarMeshPartSO;
  // Forward declaring type: AvatarSpritePartSO
  class AvatarSpritePartSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarPartsModelSO
  class AvatarPartsModelSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarPartsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPartsModelSO*, "", "AvatarPartsModelSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPartsModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarPartsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
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
    // private AvatarMeshPartSO[] _headTops
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> headTops;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>) == 0x8);
    // private AvatarSpritePartSO[] _eyes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*> eyes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AvatarSpritePartSO*>) == 0x8);
    // private AvatarSpritePartSO[] _mouths
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*> mouths;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AvatarSpritePartSO*>) == 0x8);
    // private AvatarMeshPartSO[] _glasses
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> glasses;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>) == 0x8);
    // private AvatarMeshPartSO[] _facialHair
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> facialHair;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>) == 0x8);
    // private AvatarMeshPartSO[] _hands
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> hands;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>) == 0x8);
    // private AvatarMeshPartSO[] _clothes
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> clothes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AvatarMeshPartSO[] _headTops
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>& dyn__headTops();
    // Get instance field reference: private AvatarSpritePartSO[] _eyes
    ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*>& dyn__eyes();
    // Get instance field reference: private AvatarSpritePartSO[] _mouths
    ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*>& dyn__mouths();
    // Get instance field reference: private AvatarMeshPartSO[] _glasses
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>& dyn__glasses();
    // Get instance field reference: private AvatarMeshPartSO[] _facialHair
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>& dyn__facialHair();
    // Get instance field reference: private AvatarMeshPartSO[] _hands
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>& dyn__hands();
    // Get instance field reference: private AvatarMeshPartSO[] _clothes
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>& dyn__clothes();
    // public AvatarMeshPartSO[] get_headTops()
    // Offset: 0x1493FE4
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> get_headTops();
    // public AvatarSpritePartSO[] get_Eyes()
    // Offset: 0x1493FEC
    ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*> get_Eyes();
    // public AvatarSpritePartSO[] get_Mouths()
    // Offset: 0x1493FF4
    ::ArrayW<::GlobalNamespace::AvatarSpritePartSO*> get_Mouths();
    // public AvatarMeshPartSO[] get_Glasses()
    // Offset: 0x1493FFC
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> get_Glasses();
    // public AvatarMeshPartSO[] get_FacialHair()
    // Offset: 0x1494004
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> get_FacialHair();
    // public AvatarMeshPartSO[] get_Hands()
    // Offset: 0x149400C
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> get_Hands();
    // public AvatarMeshPartSO[] get_Clothes()
    // Offset: 0x1494014
    ::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> get_Clothes();
    // public System.Void .ctor()
    // Offset: 0x149401C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPartsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPartsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPartsModelSO*, creationType>()));
    }
  }; // AvatarPartsModelSO
  #pragma pack(pop)
  static check_size<sizeof(AvatarPartsModelSO), 72 + sizeof(::ArrayW<::GlobalNamespace::AvatarMeshPartSO*>)> __GlobalNamespace_AvatarPartsModelSOSizeCheck;
  static_assert(sizeof(AvatarPartsModelSO) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_headTops
// Il2CppName: get_headTops
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> (GlobalNamespace::AvatarPartsModelSO::*)()>(&GlobalNamespace::AvatarPartsModelSO::get_headTops)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModelSO*), "get_headTops", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Eyes
// Il2CppName: get_Eyes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::AvatarSpritePartSO*> (GlobalNamespace::AvatarPartsModelSO::*)()>(&GlobalNamespace::AvatarPartsModelSO::get_Eyes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModelSO*), "get_Eyes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Mouths
// Il2CppName: get_Mouths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::AvatarSpritePartSO*> (GlobalNamespace::AvatarPartsModelSO::*)()>(&GlobalNamespace::AvatarPartsModelSO::get_Mouths)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModelSO*), "get_Mouths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Glasses
// Il2CppName: get_Glasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> (GlobalNamespace::AvatarPartsModelSO::*)()>(&GlobalNamespace::AvatarPartsModelSO::get_Glasses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModelSO*), "get_Glasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_FacialHair
// Il2CppName: get_FacialHair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> (GlobalNamespace::AvatarPartsModelSO::*)()>(&GlobalNamespace::AvatarPartsModelSO::get_FacialHair)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModelSO*), "get_FacialHair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Hands
// Il2CppName: get_Hands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> (GlobalNamespace::AvatarPartsModelSO::*)()>(&GlobalNamespace::AvatarPartsModelSO::get_Hands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModelSO*), "get_Hands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Clothes
// Il2CppName: get_Clothes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::AvatarMeshPartSO*> (GlobalNamespace::AvatarPartsModelSO::*)()>(&GlobalNamespace::AvatarPartsModelSO::get_Clothes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModelSO*), "get_Clothes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
